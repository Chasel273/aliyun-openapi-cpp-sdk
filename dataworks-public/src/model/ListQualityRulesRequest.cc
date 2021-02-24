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

#include <alibabacloud/dataworks-public/model/ListQualityRulesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListQualityRulesRequest;

ListQualityRulesRequest::ListQualityRulesRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListQualityRules")
{
	setMethod(HttpRequest::Method::Post);
}

ListQualityRulesRequest::~ListQualityRulesRequest()
{}

std::string ListQualityRulesRequest::getProjectName()const
{
	return projectName_;
}

void ListQualityRulesRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setBodyParameter("ProjectName", projectName);
}

int ListQualityRulesRequest::getPageSize()const
{
	return pageSize_;
}

void ListQualityRulesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

long ListQualityRulesRequest::getEntityId()const
{
	return entityId_;
}

void ListQualityRulesRequest::setEntityId(long entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", std::to_string(entityId));
}

int ListQualityRulesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListQualityRulesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

