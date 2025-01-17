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

#include <alibabacloud/objectdet/model/GetAsyncJobResultRequest.h>

using AlibabaCloud::Objectdet::Model::GetAsyncJobResultRequest;

GetAsyncJobResultRequest::GetAsyncJobResultRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "GetAsyncJobResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetAsyncJobResultRequest::~GetAsyncJobResultRequest()
{}

bool GetAsyncJobResultRequest::getFormatResultToJson()const
{
	return formatResultToJson_;
}

void GetAsyncJobResultRequest::setFormatResultToJson(bool formatResultToJson)
{
	formatResultToJson_ = formatResultToJson;
	setParameter("FormatResultToJson", formatResultToJson ? "true" : "false");
}

std::string GetAsyncJobResultRequest::getJobId()const
{
	return jobId_;
}

void GetAsyncJobResultRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string GetAsyncJobResultRequest::getOssFile()const
{
	return ossFile_;
}

void GetAsyncJobResultRequest::setOssFile(const std::string& ossFile)
{
	ossFile_ = ossFile;
	setParameter("OssFile", ossFile);
}

std::string GetAsyncJobResultRequest::getRequestProxyBy()const
{
	return requestProxyBy_;
}

void GetAsyncJobResultRequest::setRequestProxyBy(const std::string& requestProxyBy)
{
	requestProxyBy_ = requestProxyBy;
	setParameter("RequestProxyBy", requestProxyBy);
}

bool GetAsyncJobResultRequest::getAsync()const
{
	return async_;
}

void GetAsyncJobResultRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

