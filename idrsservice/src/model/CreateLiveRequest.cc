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

#include <alibabacloud/idrsservice/model/CreateLiveRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateLiveRequest;

CreateLiveRequest::CreateLiveRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateLive")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLiveRequest::~CreateLiveRequest()
{}

std::string CreateLiveRequest::getClientToken()const
{
	return clientToken_;
}

void CreateLiveRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateLiveRequest::getUserId()const
{
	return userId_;
}

void CreateLiveRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string CreateLiveRequest::getRtcCode()const
{
	return rtcCode_;
}

void CreateLiveRequest::setRtcCode(const std::string& rtcCode)
{
	rtcCode_ = rtcCode;
	setParameter("RtcCode", rtcCode);
}

std::string CreateLiveRequest::getAppId()const
{
	return appId_;
}

void CreateLiveRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string CreateLiveRequest::getName()const
{
	return name_;
}

void CreateLiveRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

