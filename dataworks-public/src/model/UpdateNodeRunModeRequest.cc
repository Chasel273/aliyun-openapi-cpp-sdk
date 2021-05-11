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

#include <alibabacloud/dataworks-public/model/UpdateNodeRunModeRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateNodeRunModeRequest;

UpdateNodeRunModeRequest::UpdateNodeRunModeRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateNodeRunMode")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNodeRunModeRequest::~UpdateNodeRunModeRequest()
{}

std::string UpdateNodeRunModeRequest::getProjectEnv()const
{
	return projectEnv_;
}

void UpdateNodeRunModeRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

int UpdateNodeRunModeRequest::getNodeType()const
{
	return nodeType_;
}

void UpdateNodeRunModeRequest::setNodeType(int nodeType)
{
	nodeType_ = nodeType;
	setBodyParameter("NodeType", std::to_string(nodeType));
}

long UpdateNodeRunModeRequest::getNodeId()const
{
	return nodeId_;
}

void UpdateNodeRunModeRequest::setNodeId(long nodeId)
{
	nodeId_ = nodeId;
	setBodyParameter("NodeId", std::to_string(nodeId));
}

