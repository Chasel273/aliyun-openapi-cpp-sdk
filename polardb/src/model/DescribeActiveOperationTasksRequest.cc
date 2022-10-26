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

#include <alibabacloud/polardb/model/DescribeActiveOperationTasksRequest.h>

using AlibabaCloud::Polardb::Model::DescribeActiveOperationTasksRequest;

DescribeActiveOperationTasksRequest::DescribeActiveOperationTasksRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeActiveOperationTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationTasksRequest::~DescribeActiveOperationTasksRequest()
{}

long DescribeActiveOperationTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActiveOperationTasksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationTasksRequest::getChangeLevel()const
{
	return changeLevel_;
}

void DescribeActiveOperationTasksRequest::setChangeLevel(const std::string& changeLevel)
{
	changeLevel_ = changeLevel;
	setParameter("ChangeLevel", changeLevel);
}

int DescribeActiveOperationTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeActiveOperationTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeActiveOperationTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeActiveOperationTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeActiveOperationTasksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeActiveOperationTasksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeActiveOperationTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeActiveOperationTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeActiveOperationTasksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeActiveOperationTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeActiveOperationTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeActiveOperationTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeActiveOperationTasksRequest::getProductName()const
{
	return productName_;
}

void DescribeActiveOperationTasksRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string DescribeActiveOperationTasksRequest::getTaskType()const
{
	return taskType_;
}

void DescribeActiveOperationTasksRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string DescribeActiveOperationTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActiveOperationTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeActiveOperationTasksRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeActiveOperationTasksRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeActiveOperationTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActiveOperationTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeActiveOperationTasksRequest::getAllowCancel()const
{
	return allowCancel_;
}

void DescribeActiveOperationTasksRequest::setAllowCancel(long allowCancel)
{
	allowCancel_ = allowCancel;
	setParameter("AllowCancel", std::to_string(allowCancel));
}

long DescribeActiveOperationTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActiveOperationTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeActiveOperationTasksRequest::getDBType()const
{
	return dBType_;
}

void DescribeActiveOperationTasksRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setParameter("DBType", dBType);
}

long DescribeActiveOperationTasksRequest::getAllowChange()const
{
	return allowChange_;
}

void DescribeActiveOperationTasksRequest::setAllowChange(long allowChange)
{
	allowChange_ = allowChange;
	setParameter("AllowChange", std::to_string(allowChange));
}

std::string DescribeActiveOperationTasksRequest::getRegion()const
{
	return region_;
}

void DescribeActiveOperationTasksRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

long DescribeActiveOperationTasksRequest::getStatus()const
{
	return status_;
}

void DescribeActiveOperationTasksRequest::setStatus(long status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

