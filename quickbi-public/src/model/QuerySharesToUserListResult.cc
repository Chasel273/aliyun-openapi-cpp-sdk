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

#include <alibabacloud/quickbi-public/model/QuerySharesToUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QuerySharesToUserListResult::QuerySharesToUserListResult() :
	ServiceResult()
{}

QuerySharesToUserListResult::QuerySharesToUserListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySharesToUserListResult::~QuerySharesToUserListResult()
{}

void QuerySharesToUserListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["Status"].isNull())
			resultObject.status = std::stoi(valueResultData["Status"].asString());
		if(!valueResultData["ThirdPartAuthFlag"].isNull())
			resultObject.thirdPartAuthFlag = std::stoi(valueResultData["ThirdPartAuthFlag"].asString());
		if(!valueResultData["WorksId"].isNull())
			resultObject.worksId = valueResultData["WorksId"].asString();
		if(!valueResultData["CreateTime"].isNull())
			resultObject.createTime = valueResultData["CreateTime"].asString();
		if(!valueResultData["WorkType"].isNull())
			resultObject.workType = valueResultData["WorkType"].asString();
		if(!valueResultData["OwnerName"].isNull())
			resultObject.ownerName = valueResultData["OwnerName"].asString();
		if(!valueResultData["WorkspaceName"].isNull())
			resultObject.workspaceName = valueResultData["WorkspaceName"].asString();
		if(!valueResultData["OwnerId"].isNull())
			resultObject.ownerId = valueResultData["OwnerId"].asString();
		if(!valueResultData["ModifyName"].isNull())
			resultObject.modifyName = valueResultData["ModifyName"].asString();
		if(!valueResultData["WorkspaceId"].isNull())
			resultObject.workspaceId = valueResultData["WorkspaceId"].asString();
		if(!valueResultData["SecurityLevel"].isNull())
			resultObject.securityLevel = valueResultData["SecurityLevel"].asString();
		if(!valueResultData["Description"].isNull())
			resultObject.description = valueResultData["Description"].asString();
		if(!valueResultData["WorkName"].isNull())
			resultObject.workName = valueResultData["WorkName"].asString();
		if(!valueResultData["ModifyTime"].isNull())
			resultObject.modifyTime = valueResultData["ModifyTime"].asString();
		auto directoryNode = value["Directory"];
		if(!directoryNode["PathId"].isNull())
			resultObject.directory.pathId = directoryNode["PathId"].asString();
		if(!directoryNode["PathName"].isNull())
			resultObject.directory.pathName = directoryNode["PathName"].asString();
		if(!directoryNode["Name"].isNull())
			resultObject.directory.name = directoryNode["Name"].asString();
		if(!directoryNode["Id"].isNull())
			resultObject.directory.id = directoryNode["Id"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QuerySharesToUserListResult::getSuccess()const
{
	return success_;
}

std::vector<QuerySharesToUserListResult::Data> QuerySharesToUserListResult::getResult()const
{
	return result_;
}

