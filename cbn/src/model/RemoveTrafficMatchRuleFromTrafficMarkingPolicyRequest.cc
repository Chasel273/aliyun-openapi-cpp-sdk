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

#include <alibabacloud/cbn/model/RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest.h>

using AlibabaCloud::Cbn::Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest;

RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RemoveTrafficMatchRuleFromTrafficMarkingPolicy") {
  setMethod(HttpRequest::Method::Post);
}

RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::~RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest() {}

long RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getClientToken() const {
  return clientToken_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

bool RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getDryRun() const {
  return dryRun_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getTrafficMarkRuleIds() const {
  return trafficMarkRuleIds_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setTrafficMarkRuleIds(const std::vector<std::string> &trafficMarkRuleIds) {
  trafficMarkRuleIds_ = trafficMarkRuleIds;
}

long RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

