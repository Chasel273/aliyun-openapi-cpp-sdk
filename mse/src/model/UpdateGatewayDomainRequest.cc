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

#include <alibabacloud/mse/model/UpdateGatewayDomainRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayDomainRequest;

UpdateGatewayDomainRequest::UpdateGatewayDomainRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayDomain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayDomainRequest::~UpdateGatewayDomainRequest() {}

std::string UpdateGatewayDomainRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayDomainRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateGatewayDomainRequest::getProtocol() const {
  return protocol_;
}

void UpdateGatewayDomainRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

bool UpdateGatewayDomainRequest::getMustHttps() const {
  return mustHttps_;
}

void UpdateGatewayDomainRequest::setMustHttps(bool mustHttps) {
  mustHttps_ = mustHttps;
  setParameter(std::string("MustHttps"), mustHttps ? "true" : "false");
}

long UpdateGatewayDomainRequest::getId() const {
  return id_;
}

void UpdateGatewayDomainRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string UpdateGatewayDomainRequest::getCertIdentifier() const {
  return certIdentifier_;
}

void UpdateGatewayDomainRequest::setCertIdentifier(const std::string &certIdentifier) {
  certIdentifier_ = certIdentifier;
  setParameter(std::string("CertIdentifier"), certIdentifier);
}

std::string UpdateGatewayDomainRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayDomainRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

