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

#include <alibabacloud/cdn/model/DescribeDomainTopUrlVisitRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainTopUrlVisitRequest;

DescribeDomainTopUrlVisitRequest::DescribeDomainTopUrlVisitRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainTopUrlVisit")
{}

DescribeDomainTopUrlVisitRequest::~DescribeDomainTopUrlVisitRequest()
{}

long DescribeDomainTopUrlVisitRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainTopUrlVisitRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDomainTopUrlVisitRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainTopUrlVisitRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainTopUrlVisitRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainTopUrlVisitRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainTopUrlVisitRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainTopUrlVisitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainTopUrlVisitRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainTopUrlVisitRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainTopUrlVisitRequest::getPercent()const
{
	return percent_;
}

void DescribeDomainTopUrlVisitRequest::setPercent(const std::string& percent)
{
	percent_ = percent;
	setCoreParameter("Percent", percent);
}

std::string DescribeDomainTopUrlVisitRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainTopUrlVisitRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainTopUrlVisitRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainTopUrlVisitRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainTopUrlVisitRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainTopUrlVisitRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainTopUrlVisitRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainTopUrlVisitRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainTopUrlVisitRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainTopUrlVisitRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainTopUrlVisitRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainTopUrlVisitRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainTopUrlVisitRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainTopUrlVisitRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainTopUrlVisitRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainTopUrlVisitRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainTopUrlVisitRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainTopUrlVisitRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainTopUrlVisitRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainTopUrlVisitRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainTopUrlVisitRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainTopUrlVisitRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainTopUrlVisitRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainTopUrlVisitRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainTopUrlVisitRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainTopUrlVisitRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainTopUrlVisitRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainTopUrlVisitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainTopUrlVisitRequest::getVersion()const
{
	return version_;
}

void DescribeDomainTopUrlVisitRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainTopUrlVisitRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainTopUrlVisitRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainTopUrlVisitRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainTopUrlVisitRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainTopUrlVisitRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainTopUrlVisitRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainTopUrlVisitRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainTopUrlVisitRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainTopUrlVisitRequest::getSortBy()const
{
	return sortBy_;
}

void DescribeDomainTopUrlVisitRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setCoreParameter("SortBy", sortBy);
}

