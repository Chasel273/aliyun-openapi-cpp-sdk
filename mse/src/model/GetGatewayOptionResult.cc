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

#include <alibabacloud/mse/model/GetGatewayOptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayOptionResult::GetGatewayOptionResult() :
	ServiceResult()
{}

GetGatewayOptionResult::GetGatewayOptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayOptionResult::~GetGatewayOptionResult()
{}

void GetGatewayOptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto traceDetailsNode = dataNode["TraceDetails"];
	if(!traceDetailsNode["TraceEnabled"].isNull())
		data_.traceDetails.traceEnabled = traceDetailsNode["TraceEnabled"].asString() == "true";
	if(!traceDetailsNode["Sample"].isNull())
		data_.traceDetails.sample = std::stol(traceDetailsNode["Sample"].asString());
	auto logConfigDetailsNode = dataNode["LogConfigDetails"];
	if(!logConfigDetailsNode["LogEnabled"].isNull())
		data_.logConfigDetails.logEnabled = logConfigDetailsNode["LogEnabled"].asString() == "true";
	if(!logConfigDetailsNode["ProjectName"].isNull())
		data_.logConfigDetails.projectName = logConfigDetailsNode["ProjectName"].asString();
	if(!logConfigDetailsNode["LogStoreName"].isNull())
		data_.logConfigDetails.logStoreName = logConfigDetailsNode["LogStoreName"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGatewayOptionResult::getMessage()const
{
	return message_;
}

int GetGatewayOptionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayOptionResult::Data GetGatewayOptionResult::getData()const
{
	return data_;
}

int GetGatewayOptionResult::getCode()const
{
	return code_;
}

bool GetGatewayOptionResult::getSuccess()const
{
	return success_;
}

