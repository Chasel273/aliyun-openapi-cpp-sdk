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

#include <alibabacloud/ehpc/model/ListNodesNoPagingRequest.h>

using AlibabaCloud::EHPC::Model::ListNodesNoPagingRequest;

ListNodesNoPagingRequest::ListNodesNoPagingRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListNodesNoPaging") {
  setMethod(HttpRequest::Method::Get);
}

ListNodesNoPagingRequest::~ListNodesNoPagingRequest() {}

std::string ListNodesNoPagingRequest::getRole() const {
  return role_;
}

void ListNodesNoPagingRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string ListNodesNoPagingRequest::getClusterId() const {
  return clusterId_;
}

void ListNodesNoPagingRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListNodesNoPagingRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListNodesNoPagingRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListNodesNoPagingRequest::getSequence() const {
  return sequence_;
}

void ListNodesNoPagingRequest::setSequence(const std::string &sequence) {
  sequence_ = sequence;
  setParameter(std::string("Sequence"), sequence);
}

std::string ListNodesNoPagingRequest::getHostName() const {
  return hostName_;
}

void ListNodesNoPagingRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

bool ListNodesNoPagingRequest::getOnlyDetached() const {
  return onlyDetached_;
}

void ListNodesNoPagingRequest::setOnlyDetached(bool onlyDetached) {
  onlyDetached_ = onlyDetached;
  setParameter(std::string("OnlyDetached"), onlyDetached ? "true" : "false");
}

