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

#include <alibabacloud/cloudapi/model/RemoveVpcAccessAndAbolishApisRequest.h>

using AlibabaCloud::CloudAPI::Model::RemoveVpcAccessAndAbolishApisRequest;

RemoveVpcAccessAndAbolishApisRequest::RemoveVpcAccessAndAbolishApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "RemoveVpcAccessAndAbolishApis") {
  setMethod(HttpRequest::Method::Post);
}

RemoveVpcAccessAndAbolishApisRequest::~RemoveVpcAccessAndAbolishApisRequest() {}

std::string RemoveVpcAccessAndAbolishApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RemoveVpcAccessAndAbolishApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RemoveVpcAccessAndAbolishApisRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveVpcAccessAndAbolishApisRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool RemoveVpcAccessAndAbolishApisRequest::getNeedBatchWork() const {
  return needBatchWork_;
}

void RemoveVpcAccessAndAbolishApisRequest::setNeedBatchWork(bool needBatchWork) {
  needBatchWork_ = needBatchWork;
  setParameter(std::string("NeedBatchWork"), needBatchWork ? "true" : "false");
}

std::string RemoveVpcAccessAndAbolishApisRequest::getSecurityToken() const {
  return securityToken_;
}

void RemoveVpcAccessAndAbolishApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int RemoveVpcAccessAndAbolishApisRequest::getPort() const {
  return port_;
}

void RemoveVpcAccessAndAbolishApisRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string RemoveVpcAccessAndAbolishApisRequest::getVpcId() const {
  return vpcId_;
}

void RemoveVpcAccessAndAbolishApisRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string RemoveVpcAccessAndAbolishApisRequest::getVpcAccessId() const {
  return vpcAccessId_;
}

void RemoveVpcAccessAndAbolishApisRequest::setVpcAccessId(const std::string &vpcAccessId) {
  vpcAccessId_ = vpcAccessId;
  setParameter(std::string("VpcAccessId"), vpcAccessId);
}

