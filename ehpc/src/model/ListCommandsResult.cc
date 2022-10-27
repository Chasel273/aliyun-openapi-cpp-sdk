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

#include <alibabacloud/ehpc/model/ListCommandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCommandsResult::ListCommandsResult() :
	ServiceResult()
{}

ListCommandsResult::ListCommandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCommandsResult::~ListCommandsResult()
{}

void ListCommandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommandsNode = value["Commands"]["Command"];
	for (auto valueCommandsCommand : allCommandsNode)
	{
		Command commandsObject;
		if(!valueCommandsCommand["Timeout"].isNull())
			commandsObject.timeout = valueCommandsCommand["Timeout"].asString();
		if(!valueCommandsCommand["CommandId"].isNull())
			commandsObject.commandId = valueCommandsCommand["CommandId"].asString();
		if(!valueCommandsCommand["WorkingDir"].isNull())
			commandsObject.workingDir = valueCommandsCommand["WorkingDir"].asString();
		if(!valueCommandsCommand["CommandContent"].isNull())
			commandsObject.commandContent = valueCommandsCommand["CommandContent"].asString();
		commands_.push_back(commandsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListCommandsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCommandsResult::getPageSize()const
{
	return pageSize_;
}

int ListCommandsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCommandsResult::Command> ListCommandsResult::getCommands()const
{
	return commands_;
}

