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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEFIGURECLUSTERSMERGINGTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEFIGURECLUSTERSMERGINGTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateFigureClustersMergingTaskRequest : public RpcServiceRequest {
public:
	CreateFigureClustersMergingTaskRequest();
	~CreateFigureClustersMergingTaskRequest();
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTo() const;
	void setTo(const std::string &to);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);

private:
	std::string userData_;
	std::string projectName_;
	std::string notifyTopicName_;
	std::string notifyEndpoint_;
	std::string datasetName_;
	std::string from_;
	std::string to_;
	std::map<std::string, std::string> tags_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEFIGURECLUSTERSMERGINGTASKREQUEST_H_
