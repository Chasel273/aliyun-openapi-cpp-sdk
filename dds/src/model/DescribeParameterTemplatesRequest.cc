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

#include <alibabacloud/dds/model/DescribeParameterTemplatesRequest.h>

using AlibabaCloud::Dds::Model::DescribeParameterTemplatesRequest;

DescribeParameterTemplatesRequest::DescribeParameterTemplatesRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeParameterTemplates") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterTemplatesRequest::~DescribeParameterTemplatesRequest() {}

long DescribeParameterTemplatesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterTemplatesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterTemplatesRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeParameterTemplatesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeParameterTemplatesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterTemplatesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterTemplatesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeParameterTemplatesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeParameterTemplatesRequest::getRegionId() const {
  return regionId_;
}

void DescribeParameterTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeParameterTemplatesRequest::getEngine() const {
  return engine_;
}

void DescribeParameterTemplatesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeParameterTemplatesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterTemplatesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterTemplatesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterTemplatesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeParameterTemplatesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterTemplatesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

