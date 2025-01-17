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

#include <alibabacloud/polardb/model/DeleteGlobalSecurityIPGroupRequest.h>

using AlibabaCloud::Polardb::Model::DeleteGlobalSecurityIPGroupRequest;

DeleteGlobalSecurityIPGroupRequest::DeleteGlobalSecurityIPGroupRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DeleteGlobalSecurityIPGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGlobalSecurityIPGroupRequest::~DeleteGlobalSecurityIPGroupRequest()
{}

long DeleteGlobalSecurityIPGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteGlobalSecurityIPGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteGlobalSecurityIPGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGlobalSecurityIPGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteGlobalSecurityIPGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteGlobalSecurityIPGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DeleteGlobalSecurityIPGroupRequest::getGlobalSecurityGroupId()const
{
	return globalSecurityGroupId_;
}

void DeleteGlobalSecurityIPGroupRequest::setGlobalSecurityGroupId(const std::string& globalSecurityGroupId)
{
	globalSecurityGroupId_ = globalSecurityGroupId;
	setParameter("GlobalSecurityGroupId", globalSecurityGroupId);
}

std::string DeleteGlobalSecurityIPGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteGlobalSecurityIPGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteGlobalSecurityIPGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteGlobalSecurityIPGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteGlobalSecurityIPGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteGlobalSecurityIPGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteGlobalSecurityIPGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteGlobalSecurityIPGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteGlobalSecurityIPGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteGlobalSecurityIPGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteGlobalSecurityIPGroupRequest::getGlobalIgName()const
{
	return globalIgName_;
}

void DeleteGlobalSecurityIPGroupRequest::setGlobalIgName(const std::string& globalIgName)
{
	globalIgName_ = globalIgName;
	setParameter("GlobalIgName", globalIgName);
}

