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

#include <alibabacloud/ehpc/model/ModifyClusterAttributesRequest.h>

using AlibabaCloud::EHPC::Model::ModifyClusterAttributesRequest;

ModifyClusterAttributesRequest::ModifyClusterAttributesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ModifyClusterAttributes") {
  setMethod(HttpRequest::Method::Get);
}

ModifyClusterAttributesRequest::~ModifyClusterAttributesRequest() {}

std::string ModifyClusterAttributesRequest::getImageId() const {
  return imageId_;
}

void ModifyClusterAttributesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyClusterAttributesRequest::getDescription() const {
  return description_;
}

void ModifyClusterAttributesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyClusterAttributesRequest::getClusterId() const {
  return clusterId_;
}

void ModifyClusterAttributesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyClusterAttributesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyClusterAttributesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyClusterAttributesRequest::getImageOwnerAlias() const {
  return imageOwnerAlias_;
}

void ModifyClusterAttributesRequest::setImageOwnerAlias(const std::string &imageOwnerAlias) {
  imageOwnerAlias_ = imageOwnerAlias;
  setParameter(std::string("ImageOwnerAlias"), imageOwnerAlias);
}

std::string ModifyClusterAttributesRequest::getName() const {
  return name_;
}

void ModifyClusterAttributesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

