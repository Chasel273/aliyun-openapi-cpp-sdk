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

#include <alibabacloud/cbn/model/DeleteTransitRouterMulticastDomainRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterMulticastDomainRequest;

DeleteTransitRouterMulticastDomainRequest::DeleteTransitRouterMulticastDomainRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterMulticastDomain") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterMulticastDomainRequest::~DeleteTransitRouterMulticastDomainRequest() {}

long DeleteTransitRouterMulticastDomainRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterMulticastDomainRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterMulticastDomainRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterMulticastDomainRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTransitRouterMulticastDomainRequest::getTransitRouterMulticastDomainId() const {
  return transitRouterMulticastDomainId_;
}

void DeleteTransitRouterMulticastDomainRequest::setTransitRouterMulticastDomainId(const std::string &transitRouterMulticastDomainId) {
  transitRouterMulticastDomainId_ = transitRouterMulticastDomainId;
  setParameter(std::string("TransitRouterMulticastDomainId"), transitRouterMulticastDomainId);
}

bool DeleteTransitRouterMulticastDomainRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterMulticastDomainRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterMulticastDomainRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterMulticastDomainRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterMulticastDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterMulticastDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterMulticastDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterMulticastDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

