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

#include <alibabacloud/polardb/model/ModifyLogBackupPolicyRequest.h>

using AlibabaCloud::Polardb::Model::ModifyLogBackupPolicyRequest;

ModifyLogBackupPolicyRequest::ModifyLogBackupPolicyRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyLogBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyLogBackupPolicyRequest::~ModifyLogBackupPolicyRequest()
{}

long ModifyLogBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyLogBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyLogBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLogBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyLogBackupPolicyRequest::getLogBackupAnotherRegionRegion()const
{
	return logBackupAnotherRegionRegion_;
}

void ModifyLogBackupPolicyRequest::setLogBackupAnotherRegionRegion(const std::string& logBackupAnotherRegionRegion)
{
	logBackupAnotherRegionRegion_ = logBackupAnotherRegionRegion;
	setParameter("LogBackupAnotherRegionRegion", logBackupAnotherRegionRegion);
}

std::string ModifyLogBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyLogBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyLogBackupPolicyRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyLogBackupPolicyRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyLogBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyLogBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyLogBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyLogBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyLogBackupPolicyRequest::getLogBackupAnotherRegionRetentionPeriod()const
{
	return logBackupAnotherRegionRetentionPeriod_;
}

void ModifyLogBackupPolicyRequest::setLogBackupAnotherRegionRetentionPeriod(const std::string& logBackupAnotherRegionRetentionPeriod)
{
	logBackupAnotherRegionRetentionPeriod_ = logBackupAnotherRegionRetentionPeriod;
	setParameter("LogBackupAnotherRegionRetentionPeriod", logBackupAnotherRegionRetentionPeriod);
}

std::string ModifyLogBackupPolicyRequest::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

void ModifyLogBackupPolicyRequest::setLogBackupRetentionPeriod(const std::string& logBackupRetentionPeriod)
{
	logBackupRetentionPeriod_ = logBackupRetentionPeriod;
	setParameter("LogBackupRetentionPeriod", logBackupRetentionPeriod);
}

