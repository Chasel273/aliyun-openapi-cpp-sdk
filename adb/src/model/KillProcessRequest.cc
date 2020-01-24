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

#include <alibabacloud/adb/model/KillProcessRequest.h>

using AlibabaCloud::Adb::Model::KillProcessRequest;

KillProcessRequest::KillProcessRequest() :
	RpcServiceRequest("adb", "2019-03-15", "KillProcess")
{
	setMethod(HttpRequest::Method::Post);
}

KillProcessRequest::~KillProcessRequest()
{}

long KillProcessRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void KillProcessRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string KillProcessRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void KillProcessRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string KillProcessRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void KillProcessRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string KillProcessRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void KillProcessRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string KillProcessRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void KillProcessRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long KillProcessRequest::getOwnerId()const
{
	return ownerId_;
}

void KillProcessRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string KillProcessRequest::getProcessId()const
{
	return processId_;
}

void KillProcessRequest::setProcessId(const std::string& processId)
{
	processId_ = processId;
	setCoreParameter("ProcessId", processId);
}
