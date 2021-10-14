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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListCampaignsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ListItem
					{
						long casesAborted;
						long casesUncompleted;
						long maxAttemptCount;
						long minAttemptInterval;
						std::string strategyType;
						long casesConnected;
						long planedStartTime;
						std::string queueId;
						long totalCases;
						std::string name;
						long actualStartTime;
						std::string strategyParameters;
						bool simulation;
						std::string campaignId;
						std::string state;
						long completedRate;
						long actualEndTime;
						long planedEndTime;
						std::string queueName;
					};
					long totalCount;
					long pageSize;
					long pageNumber;
					std::vector<ListItem> list;
				};


				ListCampaignsResult();
				explicit ListCampaignsResult(const std::string &payload);
				~ListCampaignsResult();
				std::string getMessage()const;
				long getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCAMPAIGNSRESULT_H_