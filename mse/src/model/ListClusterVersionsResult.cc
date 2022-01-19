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

#include <alibabacloud/mse/model/ListClusterVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListClusterVersionsResult::ListClusterVersionsResult() :
	ServiceResult()
{}

ListClusterVersionsResult::ListClusterVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterVersionsResult::~ListClusterVersionsResult()
{}

void ListClusterVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Code"].isNull())
			dataObject.code = valueDataDataItem["Code"].asString();
		if(!valueDataDataItem["ShowName"].isNull())
			dataObject.showName = valueDataDataItem["ShowName"].asString();
		if(!valueDataDataItem["ClusterType"].isNull())
			dataObject.clusterType = valueDataDataItem["ClusterType"].asString();
		data_.push_back(dataObject);
	}
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

std::string ListClusterVersionsResult::getMessage()const
{
	return message_;
}

int ListClusterVersionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListClusterVersionsResult::DataItem> ListClusterVersionsResult::getData()const
{
	return data_;
}

std::string ListClusterVersionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListClusterVersionsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int ListClusterVersionsResult::getCode()const
{
	return code_;
}

bool ListClusterVersionsResult::getSuccess()const
{
	return success_;
}

