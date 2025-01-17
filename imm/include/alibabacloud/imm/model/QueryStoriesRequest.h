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

#ifndef ALIBABACLOUD_IMM_MODEL_QUERYSTORIESREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_QUERYSTORIESREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT QueryStoriesRequest : public RpcServiceRequest {
public:
	struct StoryEndTimeRange {
		std::string start;
		std::string end;
	};
	struct StoryStartTimeRange {
		std::string start;
		std::string end;
	};
	struct CreateTimeRange {
		std::string start;
		std::string end;
	};
	QueryStoriesRequest();
	~QueryStoriesRequest();
	std::vector<std::string> getFigureClusterIds() const;
	void setFigureClusterIds(const std::vector<std::string> &figureClusterIds);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::string getStoryType() const;
	void setStoryType(const std::string &storyType);
	StoryEndTimeRange getStoryEndTimeRange() const;
	void setStoryEndTimeRange(const StoryEndTimeRange &storyEndTimeRange);
	bool getWithEmptyStories() const;
	void setWithEmptyStories(bool withEmptyStories);
	StoryStartTimeRange getStoryStartTimeRange() const;
	void setStoryStartTimeRange(const StoryStartTimeRange &storyStartTimeRange);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getStorySubType() const;
	void setStorySubType(const std::string &storySubType);
	CreateTimeRange getCreateTimeRange() const;
	void setCreateTimeRange(const CreateTimeRange &createTimeRange);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getObjectId() const;
	void setObjectId(const std::string &objectId);
	std::string getStoryName() const;
	void setStoryName(const std::string &storyName);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	std::vector<std::string> figureClusterIds_;
	std::string projectName_;
	std::string customLabels_;
	std::string sort_;
	std::string storyType_;
	StoryEndTimeRange storyEndTimeRange_;
	bool withEmptyStories_;
	StoryStartTimeRange storyStartTimeRange_;
	std::string nextToken_;
	std::string storySubType_;
	CreateTimeRange createTimeRange_;
	std::string datasetName_;
	long maxResults_;
	std::string objectId_;
	std::string storyName_;
	std::string order_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_QUERYSTORIESREQUEST_H_
