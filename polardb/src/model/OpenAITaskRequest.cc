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

#include <alibabacloud/polardb/model/OpenAITaskRequest.h>

using AlibabaCloud::Polardb::Model::OpenAITaskRequest;

OpenAITaskRequest::OpenAITaskRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "OpenAITask")
{
	setMethod(HttpRequest::Method::Post);
}

OpenAITaskRequest::~OpenAITaskRequest()
{}

long OpenAITaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpenAITaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpenAITaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpenAITaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpenAITaskRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void OpenAITaskRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string OpenAITaskRequest::getPassword()const
{
	return password_;
}

void OpenAITaskRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string OpenAITaskRequest::getRegionId()const
{
	return regionId_;
}

void OpenAITaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string OpenAITaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void OpenAITaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string OpenAITaskRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void OpenAITaskRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string OpenAITaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void OpenAITaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long OpenAITaskRequest::getOwnerId()const
{
	return ownerId_;
}

void OpenAITaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string OpenAITaskRequest::getUsername()const
{
	return username_;
}

void OpenAITaskRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

