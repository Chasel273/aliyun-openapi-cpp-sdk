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

#include <alibabacloud/polardb/model/DeleteFirewallRulesRequest.h>

using AlibabaCloud::Polardb::Model::DeleteFirewallRulesRequest;

DeleteFirewallRulesRequest::DeleteFirewallRulesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DeleteFirewallRules")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteFirewallRulesRequest::~DeleteFirewallRulesRequest()
{}

long DeleteFirewallRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFirewallRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteFirewallRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFirewallRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteFirewallRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteFirewallRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteFirewallRulesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DeleteFirewallRulesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DeleteFirewallRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteFirewallRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteFirewallRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFirewallRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFirewallRulesRequest::getRuleNameList()const
{
	return ruleNameList_;
}

void DeleteFirewallRulesRequest::setRuleNameList(const std::string& ruleNameList)
{
	ruleNameList_ = ruleNameList;
	setParameter("RuleNameList", ruleNameList);
}

