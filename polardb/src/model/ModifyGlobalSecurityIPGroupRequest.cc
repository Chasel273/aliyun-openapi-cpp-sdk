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

#include <alibabacloud/polardb/model/ModifyGlobalSecurityIPGroupRequest.h>

using AlibabaCloud::Polardb::Model::ModifyGlobalSecurityIPGroupRequest;

ModifyGlobalSecurityIPGroupRequest::ModifyGlobalSecurityIPGroupRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyGlobalSecurityIPGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGlobalSecurityIPGroupRequest::~ModifyGlobalSecurityIPGroupRequest()
{}

long ModifyGlobalSecurityIPGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyGlobalSecurityIPGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyGlobalSecurityIPGroupRequest::getGIpList()const
{
	return gIpList_;
}

void ModifyGlobalSecurityIPGroupRequest::setGIpList(const std::string& gIpList)
{
	gIpList_ = gIpList;
	setParameter("GIpList", gIpList);
}

std::string ModifyGlobalSecurityIPGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGlobalSecurityIPGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyGlobalSecurityIPGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyGlobalSecurityIPGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyGlobalSecurityIPGroupRequest::getGlobalSecurityGroupId()const
{
	return globalSecurityGroupId_;
}

void ModifyGlobalSecurityIPGroupRequest::setGlobalSecurityGroupId(const std::string& globalSecurityGroupId)
{
	globalSecurityGroupId_ = globalSecurityGroupId;
	setParameter("GlobalSecurityGroupId", globalSecurityGroupId);
}

std::string ModifyGlobalSecurityIPGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGlobalSecurityIPGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGlobalSecurityIPGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyGlobalSecurityIPGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyGlobalSecurityIPGroupRequest::getSecurityIPType()const
{
	return securityIPType_;
}

void ModifyGlobalSecurityIPGroupRequest::setSecurityIPType(const std::string& securityIPType)
{
	securityIPType_ = securityIPType;
	setParameter("SecurityIPType", securityIPType);
}

std::string ModifyGlobalSecurityIPGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyGlobalSecurityIPGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyGlobalSecurityIPGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyGlobalSecurityIPGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyGlobalSecurityIPGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyGlobalSecurityIPGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyGlobalSecurityIPGroupRequest::getWhitelistNetType()const
{
	return whitelistNetType_;
}

void ModifyGlobalSecurityIPGroupRequest::setWhitelistNetType(const std::string& whitelistNetType)
{
	whitelistNetType_ = whitelistNetType;
	setParameter("WhitelistNetType", whitelistNetType);
}

std::string ModifyGlobalSecurityIPGroupRequest::getGlobalIgName()const
{
	return globalIgName_;
}

void ModifyGlobalSecurityIPGroupRequest::setGlobalIgName(const std::string& globalIgName)
{
	globalIgName_ = globalIgName;
	setParameter("GlobalIgName", globalIgName);
}

