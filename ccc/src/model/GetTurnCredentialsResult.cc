/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ccc/model/GetTurnCredentialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetTurnCredentialsResult::GetTurnCredentialsResult() :
	ServiceResult()
{}

GetTurnCredentialsResult::GetTurnCredentialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTurnCredentialsResult::~GetTurnCredentialsResult()
{}

void GetTurnCredentialsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["Password"].isNull())
		data_.password = dataNode["Password"].asString();
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetTurnCredentialsResult::getMessage()const
{
	return message_;
}

int GetTurnCredentialsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> GetTurnCredentialsResult::getParams()const
{
	return params_;
}

GetTurnCredentialsResult::Data GetTurnCredentialsResult::getData()const
{
	return data_;
}

std::string GetTurnCredentialsResult::getCode()const
{
	return code_;
}

