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

#include <alibabacloud/cdn/model/BatchUpdateCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::BatchUpdateCdnDomainRequest;

BatchUpdateCdnDomainRequest::BatchUpdateCdnDomainRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "BatchUpdateCdnDomain")
{}

BatchUpdateCdnDomainRequest::~BatchUpdateCdnDomainRequest()
{}

std::string BatchUpdateCdnDomainRequest::getTopLevelDomain()const
{
	return topLevelDomain_;
}

void BatchUpdateCdnDomainRequest::setTopLevelDomain(const std::string& topLevelDomain)
{
	topLevelDomain_ = topLevelDomain;
	setCoreParameter("TopLevelDomain", topLevelDomain);
}

std::string BatchUpdateCdnDomainRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void BatchUpdateCdnDomainRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string BatchUpdateCdnDomainRequest::getSources()const
{
	return sources_;
}

void BatchUpdateCdnDomainRequest::setSources(const std::string& sources)
{
	sources_ = sources;
	setCoreParameter("Sources", sources);
}

std::string BatchUpdateCdnDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void BatchUpdateCdnDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string BatchUpdateCdnDomainRequest::getDomainName()const
{
	return domainName_;
}

void BatchUpdateCdnDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long BatchUpdateCdnDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchUpdateCdnDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

