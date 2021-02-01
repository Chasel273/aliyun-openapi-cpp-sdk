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

#include <alibabacloud/facebody/model/ExtractPedestrianFeatureAttrRequest.h>

using AlibabaCloud::Facebody::Model::ExtractPedestrianFeatureAttrRequest;

ExtractPedestrianFeatureAttrRequest::ExtractPedestrianFeatureAttrRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "ExtractPedestrianFeatureAttr")
{
	setMethod(HttpRequest::Method::Post);
}

ExtractPedestrianFeatureAttrRequest::~ExtractPedestrianFeatureAttrRequest()
{}

std::string ExtractPedestrianFeatureAttrRequest::getMode()const
{
	return mode_;
}

void ExtractPedestrianFeatureAttrRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

std::string ExtractPedestrianFeatureAttrRequest::getImageURL()const
{
	return imageURL_;
}

void ExtractPedestrianFeatureAttrRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

std::string ExtractPedestrianFeatureAttrRequest::getServiceVersion()const
{
	return serviceVersion_;
}

void ExtractPedestrianFeatureAttrRequest::setServiceVersion(const std::string& serviceVersion)
{
	serviceVersion_ = serviceVersion;
	setBodyParameter("ServiceVersion", serviceVersion);
}

