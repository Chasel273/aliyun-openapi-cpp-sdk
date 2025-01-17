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

#include <alibabacloud/eas/model/DescribeBenchmarkTaskRequest.h>

using AlibabaCloud::Eas::Model::DescribeBenchmarkTaskRequest;

DescribeBenchmarkTaskRequest::DescribeBenchmarkTaskRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/benchmark-tasks/[ClusterId]/[TaskName]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeBenchmarkTaskRequest::~DescribeBenchmarkTaskRequest() {}

string DescribeBenchmarkTaskRequest::getTaskName() const {
  return taskName_;
}

void DescribeBenchmarkTaskRequest::setTaskName(string taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), std::to_string(taskName));
}

string DescribeBenchmarkTaskRequest::getClusterId() const {
  return clusterId_;
}

void DescribeBenchmarkTaskRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

