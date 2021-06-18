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

#include <alibabacloud/cloudesl/model/DescribePlanogramShelvesRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribePlanogramShelvesRequest;

DescribePlanogramShelvesRequest::DescribePlanogramShelvesRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "DescribePlanogramShelves")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePlanogramShelvesRequest::~DescribePlanogramShelvesRequest()
{}

std::string DescribePlanogramShelvesRequest::getExtraParams()const
{
	return extraParams_;
}

void DescribePlanogramShelvesRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string DescribePlanogramShelvesRequest::getStoreId()const
{
	return storeId_;
}

void DescribePlanogramShelvesRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", storeId);
}

int DescribePlanogramShelvesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribePlanogramShelvesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

int DescribePlanogramShelvesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePlanogramShelvesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

