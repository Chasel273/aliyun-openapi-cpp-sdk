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

#include <alibabacloud/polardb/model/DescribeGlobalSecurityIPGroupRelationRequest.h>

using AlibabaCloud::Polardb::Model::DescribeGlobalSecurityIPGroupRelationRequest;

DescribeGlobalSecurityIPGroupRelationRequest::DescribeGlobalSecurityIPGroupRelationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeGlobalSecurityIPGroupRelation")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGlobalSecurityIPGroupRelationRequest::~DescribeGlobalSecurityIPGroupRelationRequest()
{}

long DescribeGlobalSecurityIPGroupRelationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getRegionId()const
{
	return regionId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeGlobalSecurityIPGroupRelationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

