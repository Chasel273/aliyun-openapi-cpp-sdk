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

#include <alibabacloud/ehpc/model/EcdDeleteDesktopsRequest.h>

using AlibabaCloud::EHPC::Model::EcdDeleteDesktopsRequest;

EcdDeleteDesktopsRequest::EcdDeleteDesktopsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "EcdDeleteDesktops")
{
	setMethod(HttpRequest::Method::Get);
}

EcdDeleteDesktopsRequest::~EcdDeleteDesktopsRequest()
{}

std::string EcdDeleteDesktopsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EcdDeleteDesktopsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> EcdDeleteDesktopsRequest::getDesktopId()const
{
	return desktopId_;
}

void EcdDeleteDesktopsRequest::setDesktopId(const std::vector<std::string>& desktopId)
{
	desktopId_ = desktopId;
	for(int dep1 = 0; dep1!= desktopId.size(); dep1++) {
		setParameter("DesktopId."+ std::to_string(dep1), desktopId.at(dep1));
	}
}

