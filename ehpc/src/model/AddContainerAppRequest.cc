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

#include <alibabacloud/ehpc/model/AddContainerAppRequest.h>

using AlibabaCloud::EHPC::Model::AddContainerAppRequest;

AddContainerAppRequest::AddContainerAppRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "AddContainerApp") {
  setMethod(HttpRequest::Method::Get);
}

AddContainerAppRequest::~AddContainerAppRequest() {}

std::string AddContainerAppRequest::getDescription() const {
  return description_;
}

void AddContainerAppRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddContainerAppRequest::getRepository() const {
  return repository_;
}

void AddContainerAppRequest::setRepository(const std::string &repository) {
  repository_ = repository;
  setParameter(std::string("Repository"), repository);
}

std::string AddContainerAppRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddContainerAppRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddContainerAppRequest::getContainerType() const {
  return containerType_;
}

void AddContainerAppRequest::setContainerType(const std::string &containerType) {
  containerType_ = containerType;
  setParameter(std::string("ContainerType"), containerType);
}

std::string AddContainerAppRequest::getName() const {
  return name_;
}

void AddContainerAppRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddContainerAppRequest::getImageTag() const {
  return imageTag_;
}

void AddContainerAppRequest::setImageTag(const std::string &imageTag) {
  imageTag_ = imageTag;
  setParameter(std::string("ImageTag"), imageTag);
}

