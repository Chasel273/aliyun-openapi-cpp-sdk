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

#include <alibabacloud/cdn/model/DeleteSpecificStagingConfigRequest.h>

using AlibabaCloud::Cdn::Model::DeleteSpecificStagingConfigRequest;

DeleteSpecificStagingConfigRequest::DeleteSpecificStagingConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DeleteSpecificStagingConfig")
{}

DeleteSpecificStagingConfigRequest::~DeleteSpecificStagingConfigRequest()
{}

std::string DeleteSpecificStagingConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteSpecificStagingConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteSpecificStagingConfigRequest::getConfigId()const
{
	return configId_;
}

void DeleteSpecificStagingConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string DeleteSpecificStagingConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteSpecificStagingConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DeleteSpecificStagingConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSpecificStagingConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

