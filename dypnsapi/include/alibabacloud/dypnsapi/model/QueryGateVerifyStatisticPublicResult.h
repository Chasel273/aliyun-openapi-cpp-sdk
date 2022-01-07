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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICRESULT_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT QueryGateVerifyStatisticPublicResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DayStatisticItem
					{
						long totalUnknown;
						long totalFail;
						std::string statisticDateStr;
						long totalSuccess;
					};
					long totalUnknown;
					long totalFail;
					std::vector<DayStatisticItem> dayStatistic;
					long total;
					long totalSuccess;
				};


				QueryGateVerifyStatisticPublicResult();
				explicit QueryGateVerifyStatisticPublicResult(const std::string &payload);
				~QueryGateVerifyStatisticPublicResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_QUERYGATEVERIFYSTATISTICPUBLICRESULT_H_