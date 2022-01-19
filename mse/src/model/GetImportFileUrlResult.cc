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

#include <alibabacloud/mse/model/GetImportFileUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetImportFileUrlResult::GetImportFileUrlResult() :
	ServiceResult()
{}

GetImportFileUrlResult::GetImportFileUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImportFileUrlResult::~GetImportFileUrlResult()
{}

void GetImportFileUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string GetImportFileUrlResult::getMessage()const
{
	return message_;
}

int GetImportFileUrlResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetImportFileUrlResult::Data GetImportFileUrlResult::getData()const
{
	return data_;
}

std::string GetImportFileUrlResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetImportFileUrlResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int GetImportFileUrlResult::getCode()const
{
	return code_;
}

bool GetImportFileUrlResult::getSuccess()const
{
	return success_;
}

