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

#include <alibabacloud/codeup/model/CreateMergeRequestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

CreateMergeRequestResult::CreateMergeRequestResult() :
	ServiceResult()
{}

CreateMergeRequestResult::CreateMergeRequestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMergeRequestResult::~CreateMergeRequestResult()
{}

void CreateMergeRequestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["ProjectId"].isNull())
		result_.projectId = std::stol(resultNode["ProjectId"].asString());
	if(!resultNode["Title"].isNull())
		result_.title = resultNode["Title"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	if(!resultNode["MergeStatus"].isNull())
		result_.mergeStatus = resultNode["MergeStatus"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["UpdatedAt"].isNull())
		result_.updatedAt = resultNode["UpdatedAt"].asString();
	if(!resultNode["TargetBranch"].isNull())
		result_.targetBranch = resultNode["TargetBranch"].asString();
	if(!resultNode["SourceBranch"].isNull())
		result_.sourceBranch = resultNode["SourceBranch"].asString();
	if(!resultNode["WebUrl"].isNull())
		result_.webUrl = resultNode["WebUrl"].asString();
	if(!resultNode["AcceptedRevision"].isNull())
		result_.acceptedRevision = resultNode["AcceptedRevision"].asString();
	if(!resultNode["MergeError"].isNull())
		result_.mergeError = resultNode["MergeError"].asString();
	if(!resultNode["MergedRevision"].isNull())
		result_.mergedRevision = resultNode["MergedRevision"].asString();
	if(!resultNode["NameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["NameWithNamespace"].asString();
	if(!resultNode["MergeType"].isNull())
		result_.mergeType = resultNode["MergeType"].asString();
	if(!resultNode["AheadCommitCount"].isNull())
		result_.aheadCommitCount = std::stoi(resultNode["AheadCommitCount"].asString());
	if(!resultNode["BehindCommitCount"].isNull())
		result_.behindCommitCount = std::stoi(resultNode["BehindCommitCount"].asString());
	auto allAssigneeListNode = resultNode["AssigneeList"]["AssigneeListItem"];
	for (auto resultNodeAssigneeListAssigneeListItem : allAssigneeListNode)
	{
		Result::AssigneeListItem assigneeListItemObject;
		if(!resultNodeAssigneeListAssigneeListItem["Id"].isNull())
			assigneeListItemObject.id = resultNodeAssigneeListAssigneeListItem["Id"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["ExternUserId"].isNull())
			assigneeListItemObject.externUserId = resultNodeAssigneeListAssigneeListItem["ExternUserId"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["AvatarUrl"].isNull())
			assigneeListItemObject.avatarUrl = resultNodeAssigneeListAssigneeListItem["AvatarUrl"].asString();
		if(!resultNodeAssigneeListAssigneeListItem["Name"].isNull())
			assigneeListItemObject.name = resultNodeAssigneeListAssigneeListItem["Name"].asString();
		result_.assigneeList.push_back(assigneeListItemObject);
	}
	auto authorNode = resultNode["Author"];
	if(!authorNode["Id"].isNull())
		result_.author.id = std::stol(authorNode["Id"].asString());
	if(!authorNode["ExternUserId"].isNull())
		result_.author.externUserId = authorNode["ExternUserId"].asString();
	if(!authorNode["AvatarUrl"].isNull())
		result_.author.avatarUrl = authorNode["AvatarUrl"].asString();
	if(!authorNode["Name"].isNull())
		result_.author.name = authorNode["Name"].asString();
	auto approveCheckResultNode = resultNode["ApproveCheckResult"];
	if(!approveCheckResultNode["TotalCheckResult"].isNull())
		result_.approveCheckResult.totalCheckResult = approveCheckResultNode["TotalCheckResult"].asString();
	auto allSatisfiedCheckResultsNode = approveCheckResultNode["SatisfiedCheckResults"]["SatisfiedCheckResultsItem"];
	for (auto approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem : allSatisfiedCheckResultsNode)
	{
		Result::ApproveCheckResult::SatisfiedCheckResultsItem satisfiedCheckResultsItemObject;
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].isNull())
			satisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckStatus"].asString();
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].isNull())
			satisfiedCheckResultsItemObject.checkName = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckName"].asString();
		if(!approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].isNull())
			satisfiedCheckResultsItemObject.checkType = approveCheckResultNodeSatisfiedCheckResultsSatisfiedCheckResultsItem["CheckType"].asString();
		auto allExtraUsersNode = allSatisfiedCheckResultsNode["ExtraUsers"]["ExtraUsersItem"];
		for (auto allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem : allExtraUsersNode)
		{
			Result::ApproveCheckResult::SatisfiedCheckResultsItem::ExtraUsersItem extraUsersObject;
			if(!allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Id"].isNull())
				extraUsersObject.id = std::stol(allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Id"].asString());
			if(!allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["ExternUserId"].isNull())
				extraUsersObject.externUserId = allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["ExternUserId"].asString();
			if(!allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["AvatarUrl"].isNull())
				extraUsersObject.avatarUrl = allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["AvatarUrl"].asString();
			if(!allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Name"].isNull())
				extraUsersObject.name = allSatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Name"].asString();
			satisfiedCheckResultsItemObject.extraUsers.push_back(extraUsersObject);
		}
		auto allSatisfiedItems = value["SatisfiedItems"]["SatisfiedItems"];
		for (auto value : allSatisfiedItems)
			satisfiedCheckResultsItemObject.satisfiedItems.push_back(value.asString());
		auto allUnsatisfiedItems = value["UnsatisfiedItems"]["UnsatisfiedItems"];
		for (auto value : allUnsatisfiedItems)
			satisfiedCheckResultsItemObject.unsatisfiedItems.push_back(value.asString());
		result_.approveCheckResult.satisfiedCheckResults.push_back(satisfiedCheckResultsItemObject);
	}
	auto allUnsatisfiedCheckResultsNode = approveCheckResultNode["UnsatisfiedCheckResults"]["UnsatisfiedCheckResultsItem"];
	for (auto approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem : allUnsatisfiedCheckResultsNode)
	{
		Result::ApproveCheckResult::UnsatisfiedCheckResultsItem unsatisfiedCheckResultsItemObject;
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].isNull())
			unsatisfiedCheckResultsItemObject.checkStatus = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckStatus"].asString();
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].isNull())
			unsatisfiedCheckResultsItemObject.checkName = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckName"].asString();
		if(!approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].isNull())
			unsatisfiedCheckResultsItemObject.checkType = approveCheckResultNodeUnsatisfiedCheckResultsUnsatisfiedCheckResultsItem["CheckType"].asString();
		auto allExtraUsers3Node = allUnsatisfiedCheckResultsNode["ExtraUsers"]["ExtraUsersItem"];
		for (auto allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem : allExtraUsers3Node)
		{
			Result::ApproveCheckResult::UnsatisfiedCheckResultsItem::ExtraUsersItem4 extraUsers3Object;
			if(!allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Id"].isNull())
				extraUsers3Object.id = std::stol(allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Id"].asString());
			if(!allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["ExternUserId"].isNull())
				extraUsers3Object.externUserId = allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["ExternUserId"].asString();
			if(!allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["AvatarUrl"].isNull())
				extraUsers3Object.avatarUrl = allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["AvatarUrl"].asString();
			if(!allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Name"].isNull())
				extraUsers3Object.name = allUnsatisfiedCheckResultsNodeExtraUsersExtraUsersItem["Name"].asString();
			unsatisfiedCheckResultsItemObject.extraUsers3.push_back(extraUsers3Object);
		}
		auto allSatisfiedItems1 = value["SatisfiedItems"]["SatisfiedItems"];
		for (auto value : allSatisfiedItems1)
			unsatisfiedCheckResultsItemObject.satisfiedItems1.push_back(value.asString());
		auto allUnsatisfiedItems2 = value["UnsatisfiedItems"]["UnsatisfiedItems"];
		for (auto value : allUnsatisfiedItems2)
			unsatisfiedCheckResultsItemObject.unsatisfiedItems2.push_back(value.asString());
		result_.approveCheckResult.unsatisfiedCheckResults.push_back(unsatisfiedCheckResultsItemObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string CreateMergeRequestResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateMergeRequestResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateMergeRequestResult::getSuccess()const
{
	return success_;
}

CreateMergeRequestResult::Result CreateMergeRequestResult::getResult()const
{
	return result_;
}

