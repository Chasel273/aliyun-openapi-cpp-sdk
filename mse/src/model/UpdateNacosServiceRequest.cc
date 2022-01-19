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

#include <alibabacloud/mse/model/UpdateNacosServiceRequest.h>

using AlibabaCloud::Mse::Model::UpdateNacosServiceRequest;

UpdateNacosServiceRequest::UpdateNacosServiceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateNacosService") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNacosServiceRequest::~UpdateNacosServiceRequest() {}

std::string UpdateNacosServiceRequest::getClusterId() const {
  return clusterId_;
}

void UpdateNacosServiceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateNacosServiceRequest::getGroupName() const {
  return groupName_;
}

void UpdateNacosServiceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateNacosServiceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNacosServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateNacosServiceRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateNacosServiceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateNacosServiceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateNacosServiceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateNacosServiceRequest::getServiceName() const {
  return serviceName_;
}

void UpdateNacosServiceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string UpdateNacosServiceRequest::getProtectThreshold() const {
  return protectThreshold_;
}

void UpdateNacosServiceRequest::setProtectThreshold(const std::string &protectThreshold) {
  protectThreshold_ = protectThreshold;
  setParameter(std::string("ProtectThreshold"), protectThreshold);
}

