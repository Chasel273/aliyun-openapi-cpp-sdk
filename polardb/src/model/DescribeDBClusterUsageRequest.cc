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

#include <alibabacloud/polardb/model/DescribeDBClusterUsageRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterUsageRequest;

DescribeDBClusterUsageRequest::DescribeDBClusterUsageRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterUsage")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterUsageRequest::~DescribeDBClusterUsageRequest()
{}

long DescribeDBClusterUsageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterUsageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterUsageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterUsageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterUsageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterUsageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterUsageRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterUsageRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterUsageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterUsageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterUsageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterUsageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

