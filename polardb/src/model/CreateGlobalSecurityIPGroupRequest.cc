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

#include <alibabacloud/polardb/model/CreateGlobalSecurityIPGroupRequest.h>

using AlibabaCloud::Polardb::Model::CreateGlobalSecurityIPGroupRequest;

CreateGlobalSecurityIPGroupRequest::CreateGlobalSecurityIPGroupRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateGlobalSecurityIPGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGlobalSecurityIPGroupRequest::~CreateGlobalSecurityIPGroupRequest()
{}

long CreateGlobalSecurityIPGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateGlobalSecurityIPGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateGlobalSecurityIPGroupRequest::getGIpList()const
{
	return gIpList_;
}

void CreateGlobalSecurityIPGroupRequest::setGIpList(const std::string& gIpList)
{
	gIpList_ = gIpList;
	setParameter("GIpList", gIpList);
}

std::string CreateGlobalSecurityIPGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGlobalSecurityIPGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGlobalSecurityIPGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateGlobalSecurityIPGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateGlobalSecurityIPGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGlobalSecurityIPGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGlobalSecurityIPGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateGlobalSecurityIPGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateGlobalSecurityIPGroupRequest::getSecurityIPType()const
{
	return securityIPType_;
}

void CreateGlobalSecurityIPGroupRequest::setSecurityIPType(const std::string& securityIPType)
{
	securityIPType_ = securityIPType;
	setParameter("SecurityIPType", securityIPType);
}

std::string CreateGlobalSecurityIPGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateGlobalSecurityIPGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateGlobalSecurityIPGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateGlobalSecurityIPGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateGlobalSecurityIPGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateGlobalSecurityIPGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateGlobalSecurityIPGroupRequest::getWhitelistNetType()const
{
	return whitelistNetType_;
}

void CreateGlobalSecurityIPGroupRequest::setWhitelistNetType(const std::string& whitelistNetType)
{
	whitelistNetType_ = whitelistNetType;
	setParameter("WhitelistNetType", whitelistNetType);
}

std::string CreateGlobalSecurityIPGroupRequest::getGlobalIgName()const
{
	return globalIgName_;
}

void CreateGlobalSecurityIPGroupRequest::setGlobalIgName(const std::string& globalIgName)
{
	globalIgName_ = globalIgName;
	setParameter("GlobalIgName", globalIgName);
}

