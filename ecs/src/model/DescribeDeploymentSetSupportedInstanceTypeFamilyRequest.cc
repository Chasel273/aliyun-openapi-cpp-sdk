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

#include <alibabacloud/ecs/model/DescribeDeploymentSetSupportedInstanceTypeFamilyRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest;

DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::DescribeDeploymentSetSupportedInstanceTypeFamilyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDeploymentSetSupportedInstanceTypeFamily")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::~DescribeDeploymentSetSupportedInstanceTypeFamilyRequest()
{}

long DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDeploymentSetSupportedInstanceTypeFamilyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

