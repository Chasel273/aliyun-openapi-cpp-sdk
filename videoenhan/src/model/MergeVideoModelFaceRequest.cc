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

#include <alibabacloud/videoenhan/model/MergeVideoModelFaceRequest.h>

using AlibabaCloud::Videoenhan::Model::MergeVideoModelFaceRequest;

MergeVideoModelFaceRequest::MergeVideoModelFaceRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "MergeVideoModelFace") {
  setMethod(HttpRequest::Method::Post);
}

MergeVideoModelFaceRequest::~MergeVideoModelFaceRequest() {}

std::string MergeVideoModelFaceRequest::getFaceImageURL() const {
  return faceImageURL_;
}

void MergeVideoModelFaceRequest::setFaceImageURL(const std::string &faceImageURL) {
  faceImageURL_ = faceImageURL;
  setBodyParameter(std::string("FaceImageURL"), faceImageURL);
}

std::string MergeVideoModelFaceRequest::getUserId() const {
  return userId_;
}

void MergeVideoModelFaceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string MergeVideoModelFaceRequest::getTemplateId() const {
  return templateId_;
}

void MergeVideoModelFaceRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string MergeVideoModelFaceRequest::getAsync() const {
  return async_;
}

void MergeVideoModelFaceRequest::setAsync(const std::string &async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async);
}

