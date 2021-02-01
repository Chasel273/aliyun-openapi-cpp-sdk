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

#include <alibabacloud/facebody/model/DeleteFaceImageTemplateRequest.h>

using AlibabaCloud::Facebody::Model::DeleteFaceImageTemplateRequest;

DeleteFaceImageTemplateRequest::DeleteFaceImageTemplateRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "DeleteFaceImageTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteFaceImageTemplateRequest::~DeleteFaceImageTemplateRequest()
{}

std::string DeleteFaceImageTemplateRequest::getUserId()const
{
	return userId_;
}

void DeleteFaceImageTemplateRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}

std::string DeleteFaceImageTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void DeleteFaceImageTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setBodyParameter("TemplateId", templateId);
}

