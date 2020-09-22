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

#include <alibabacloud/rtc/model/DeleteMAURuleRequest.h>

using AlibabaCloud::Rtc::Model::DeleteMAURuleRequest;

DeleteMAURuleRequest::DeleteMAURuleRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DeleteMAURule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteMAURuleRequest::~DeleteMAURuleRequest()
{}

std::string DeleteMAURuleRequest::getShowLog()const
{
	return showLog_;
}

void DeleteMAURuleRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DeleteMAURuleRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteMAURuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteMAURuleRequest::getAppId()const
{
	return appId_;
}

void DeleteMAURuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

long DeleteMAURuleRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteMAURuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", std::to_string(ruleId));
}

