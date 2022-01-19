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

#include <alibabacloud/mse/model/QueryGatewayTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryGatewayTypeResult::QueryGatewayTypeResult() :
	ServiceResult()
{}

QueryGatewayTypeResult::QueryGatewayTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGatewayTypeResult::~QueryGatewayTypeResult()
{}

void QueryGatewayTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["types"];
	for (const auto &item : allData)
		data_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryGatewayTypeResult::getMessage()const
{
	return message_;
}

int QueryGatewayTypeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> QueryGatewayTypeResult::getData()const
{
	return data_;
}

int QueryGatewayTypeResult::getCode()const
{
	return code_;
}

bool QueryGatewayTypeResult::getSuccess()const
{
	return success_;
}

