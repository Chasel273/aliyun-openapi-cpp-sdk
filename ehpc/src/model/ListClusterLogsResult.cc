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

#include <alibabacloud/ehpc/model/ListClusterLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListClusterLogsResult::ListClusterLogsResult() :
	ServiceResult()
{}

ListClusterLogsResult::ListClusterLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterLogsResult::~ListClusterLogsResult()
{}

void ListClusterLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["LogInfo"];
	for (auto valueLogsLogInfo : allLogsNode)
	{
		LogInfo logsObject;
		if(!valueLogsLogInfo["Operation"].isNull())
			logsObject.operation = valueLogsLogInfo["Operation"].asString();
		if(!valueLogsLogInfo["Message"].isNull())
			logsObject.message = valueLogsLogInfo["Message"].asString();
		if(!valueLogsLogInfo["CreateTime"].isNull())
			logsObject.createTime = valueLogsLogInfo["CreateTime"].asString();
		if(!valueLogsLogInfo["Level"].isNull())
			logsObject.level = valueLogsLogInfo["Level"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();

}

int ListClusterLogsResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterLogsResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListClusterLogsResult::getClusterId()const
{
	return clusterId_;
}

std::vector<ListClusterLogsResult::LogInfo> ListClusterLogsResult::getLogs()const
{
	return logs_;
}

