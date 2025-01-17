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

#include <alibabacloud/polardb/model/ModifyDBClusterResourceGroupRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterResourceGroupRequest;

ModifyDBClusterResourceGroupRequest::ModifyDBClusterResourceGroupRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterResourceGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterResourceGroupRequest::~ModifyDBClusterResourceGroupRequest()
{}

long ModifyDBClusterResourceGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterResourceGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterResourceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterResourceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterResourceGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyDBClusterResourceGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyDBClusterResourceGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterResourceGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterResourceGroupRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterResourceGroupRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterResourceGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterResourceGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterResourceGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterResourceGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterResourceGroupRequest::getNewResourceGroupId()const
{
	return newResourceGroupId_;
}

void ModifyDBClusterResourceGroupRequest::setNewResourceGroupId(const std::string& newResourceGroupId)
{
	newResourceGroupId_ = newResourceGroupId;
	setParameter("NewResourceGroupId", newResourceGroupId);
}

