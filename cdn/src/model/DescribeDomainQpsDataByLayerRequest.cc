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

#include <alibabacloud/cdn/model/DescribeDomainQpsDataByLayerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainQpsDataByLayerRequest;

DescribeDomainQpsDataByLayerRequest::DescribeDomainQpsDataByLayerRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainQpsDataByLayer")
{}

DescribeDomainQpsDataByLayerRequest::~DescribeDomainQpsDataByLayerRequest()
{}

long DescribeDomainQpsDataByLayerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainQpsDataByLayerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDomainQpsDataByLayerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainQpsDataByLayerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainQpsDataByLayerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainQpsDataByLayerRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainQpsDataByLayerRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainQpsDataByLayerRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainQpsDataByLayerRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainQpsDataByLayerRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainQpsDataByLayerRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainQpsDataByLayerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainQpsDataByLayerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainQpsDataByLayerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainQpsDataByLayerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainQpsDataByLayerRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainQpsDataByLayerRequest::getLayer()const
{
	return layer_;
}

void DescribeDomainQpsDataByLayerRequest::setLayer(const std::string& layer)
{
	layer_ = layer;
	setCoreParameter("Layer", layer);
}

std::string DescribeDomainQpsDataByLayerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainQpsDataByLayerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainQpsDataByLayerRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainQpsDataByLayerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainQpsDataByLayerRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainQpsDataByLayerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainQpsDataByLayerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainQpsDataByLayerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainQpsDataByLayerRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainQpsDataByLayerRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainQpsDataByLayerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainQpsDataByLayerRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainQpsDataByLayerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainQpsDataByLayerRequest::getProduct()const
{
	return product_;
}

void DescribeDomainQpsDataByLayerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainQpsDataByLayerRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainQpsDataByLayerRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainQpsDataByLayerRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainQpsDataByLayerRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainQpsDataByLayerRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainQpsDataByLayerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainQpsDataByLayerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainQpsDataByLayerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainQpsDataByLayerRequest::getVersion()const
{
	return version_;
}

void DescribeDomainQpsDataByLayerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainQpsDataByLayerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainQpsDataByLayerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainQpsDataByLayerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainQpsDataByLayerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainQpsDataByLayerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainQpsDataByLayerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainQpsDataByLayerRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeDomainQpsDataByLayerRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeDomainQpsDataByLayerRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainQpsDataByLayerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainQpsDataByLayerRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainQpsDataByLayerRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

