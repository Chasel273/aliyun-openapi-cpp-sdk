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

#include <alibabacloud/dcdn/model/ModifyDcdnServiceRequest.h>

using AlibabaCloud::Dcdn::Model::ModifyDcdnServiceRequest;

ModifyDcdnServiceRequest::ModifyDcdnServiceRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "ModifyDcdnService")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDcdnServiceRequest::~ModifyDcdnServiceRequest()
{}

std::string ModifyDcdnServiceRequest::getWebsocketBillType()const
{
	return websocketBillType_;
}

void ModifyDcdnServiceRequest::setWebsocketBillType(const std::string& websocketBillType)
{
	websocketBillType_ = websocketBillType;
	setParameter("WebsocketBillType", websocketBillType);
}

std::string ModifyDcdnServiceRequest::getBillType()const
{
	return billType_;
}

void ModifyDcdnServiceRequest::setBillType(const std::string& billType)
{
	billType_ = billType;
	setParameter("BillType", billType);
}

std::string ModifyDcdnServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDcdnServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long ModifyDcdnServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDcdnServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

