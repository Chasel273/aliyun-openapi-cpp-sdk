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

#include <alibabacloud/polardb/model/DescribeDBClusterNetInfoRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterNetInfoRequest;

DescribeDBClusterNetInfoRequest::DescribeDBClusterNetInfoRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterNetInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterNetInfoRequest::~DescribeDBClusterNetInfoRequest()
{}

long DescribeDBClusterNetInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterNetInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterNetInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterNetInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterNetInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterNetInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterNetInfoRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterNetInfoRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterNetInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterNetInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterNetInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterNetInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBClusterNetInfoRequest::getConnectionStringType()const
{
	return connectionStringType_;
}

void DescribeDBClusterNetInfoRequest::setConnectionStringType(const std::string& connectionStringType)
{
	connectionStringType_ = connectionStringType;
	setParameter("ConnectionStringType", connectionStringType);
}

