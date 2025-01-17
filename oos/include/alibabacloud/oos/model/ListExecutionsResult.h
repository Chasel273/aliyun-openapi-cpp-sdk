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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT ListExecutionsResult : public ServiceResult
			{
			public:
				struct Execution
				{
					struct CurrentTask
					{
						std::string taskName;
						std::string taskAction;
						std::string taskExecutionId;
					};
					std::vector<Execution::CurrentTask> currentTasks;
					std::string parentExecutionId;
					std::string description;
					std::string category;
					std::string resourceGroupId;
					std::string templateVersion;
					std::string createDate;
					std::string startDate;
					std::string updateDate;
					std::string lastTriggerTime;
					std::string lastSuccessfulTriggerTime;
					std::string templateName;
					std::string resourceStatus;
					std::string tags;
					std::string executedBy;
					std::string templateId;
					std::string status;
					std::string parameters;
					std::string statusReason;
					bool isParent;
					std::string mode;
					std::string targets;
					std::string waitingStatus;
					std::string endDate;
					std::string statusMessage;
					std::string safetyCheck;
					std::string outputs;
					std::string ramRole;
					std::string counters;
					std::string lastTriggerStatus;
					std::string executionId;
				};


				ListExecutionsResult();
				explicit ListExecutionsResult(const std::string &payload);
				~ListExecutionsResult();
				std::vector<Execution> getExecutions()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Execution> executions_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_LISTEXECUTIONSRESULT_H_