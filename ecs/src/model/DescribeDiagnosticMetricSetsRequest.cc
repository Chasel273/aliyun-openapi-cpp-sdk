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

#include <alibabacloud/ecs/model/DescribeDiagnosticMetricSetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiagnosticMetricSetsRequest;

DescribeDiagnosticMetricSetsRequest::DescribeDiagnosticMetricSetsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDiagnosticMetricSets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosticMetricSetsRequest::~DescribeDiagnosticMetricSetsRequest() {}

std::vector<std::string> DescribeDiagnosticMetricSetsRequest::getMetricSetIds() const {
  return metricSetIds_;
}

void DescribeDiagnosticMetricSetsRequest::setMetricSetIds(const std::vector<std::string> &metricSetIds) {
  metricSetIds_ = metricSetIds;
}

std::string DescribeDiagnosticMetricSetsRequest::getType() const {
  return type_;
}

void DescribeDiagnosticMetricSetsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeDiagnosticMetricSetsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosticMetricSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosticMetricSetsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDiagnosticMetricSetsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeDiagnosticMetricSetsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeDiagnosticMetricSetsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int DescribeDiagnosticMetricSetsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDiagnosticMetricSetsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

