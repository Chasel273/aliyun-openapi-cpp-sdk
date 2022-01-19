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

#include <alibabacloud/mse/model/GetImportFileUrlRequest.h>

using AlibabaCloud::Mse::Model::GetImportFileUrlRequest;

GetImportFileUrlRequest::GetImportFileUrlRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetImportFileUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetImportFileUrlRequest::~GetImportFileUrlRequest() {}

std::string GetImportFileUrlRequest::getContentType() const {
  return contentType_;
}

void GetImportFileUrlRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

std::string GetImportFileUrlRequest::getInstanceId() const {
  return instanceId_;
}

void GetImportFileUrlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetImportFileUrlRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetImportFileUrlRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string GetImportFileUrlRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetImportFileUrlRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

