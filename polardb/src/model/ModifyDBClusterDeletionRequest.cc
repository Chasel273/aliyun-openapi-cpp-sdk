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

#include <alibabacloud/polardb/model/ModifyDBClusterDeletionRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterDeletionRequest;

ModifyDBClusterDeletionRequest::ModifyDBClusterDeletionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterDeletion")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterDeletionRequest::~ModifyDBClusterDeletionRequest()
{}

long ModifyDBClusterDeletionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterDeletionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyDBClusterDeletionRequest::getProtection()const
{
	return protection_;
}

void ModifyDBClusterDeletionRequest::setProtection(bool protection)
{
	protection_ = protection;
	setParameter("Protection", protection ? "true" : "false");
}

std::string ModifyDBClusterDeletionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterDeletionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterDeletionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterDeletionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterDeletionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterDeletionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterDeletionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterDeletionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterDeletionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterDeletionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

