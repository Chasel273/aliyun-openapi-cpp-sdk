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

#include <alibabacloud/eas/model/UpdateServiceCronScalerRequest.h>

using AlibabaCloud::Eas::Model::UpdateServiceCronScalerRequest;

UpdateServiceCronScalerRequest::UpdateServiceCronScalerRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/cronscaler"};
  setMethod(HttpRequest::Method::Put);
}

UpdateServiceCronScalerRequest::~UpdateServiceCronScalerRequest() {}

string UpdateServiceCronScalerRequest::getServiceName() const {
  return serviceName_;
}

void UpdateServiceCronScalerRequest::setServiceName(string serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), std::to_string(serviceName));
}

string UpdateServiceCronScalerRequest::getClusterId() const {
  return clusterId_;
}

void UpdateServiceCronScalerRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

std::string UpdateServiceCronScalerRequest::getBody() const {
  return body_;
}

void UpdateServiceCronScalerRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

