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

#include <alibabacloud/dytnsapi/model/DescribePhoneNumberAttributeRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribePhoneNumberAttributeRequest;

DescribePhoneNumberAttributeRequest::DescribePhoneNumberAttributeRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribePhoneNumberAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribePhoneNumberAttributeRequest::~DescribePhoneNumberAttributeRequest() {}

long DescribePhoneNumberAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePhoneNumberAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePhoneNumberAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePhoneNumberAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePhoneNumberAttributeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void DescribePhoneNumberAttributeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

long DescribePhoneNumberAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePhoneNumberAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePhoneNumberAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePhoneNumberAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

