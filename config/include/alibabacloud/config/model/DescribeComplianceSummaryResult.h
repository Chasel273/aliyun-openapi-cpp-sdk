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

#ifndef ALIBABACLOUD_CONFIG_MODEL_DESCRIBECOMPLIANCESUMMARYRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_DESCRIBECOMPLIANCESUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT DescribeComplianceSummaryResult : public ServiceResult
			{
			public:
				struct ComplianceSummary
				{
					struct ComplianceSummaryByResource
					{
						long totalCount;
						int compliantCount;
						int nonCompliantCount;
						long complianceSummaryTimestamp;
					};
					struct ComplianceSummaryByConfigRule
					{
						long totalCount;
						int compliantCount;
						int nonCompliantCount;
						long complianceSummaryTimestamp;
					};
					ComplianceSummaryByResource complianceSummaryByResource;
					ComplianceSummaryByConfigRule complianceSummaryByConfigRule;
				};


				DescribeComplianceSummaryResult();
				explicit DescribeComplianceSummaryResult(const std::string &payload);
				~DescribeComplianceSummaryResult();
				ComplianceSummary getComplianceSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				ComplianceSummary complianceSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_DESCRIBECOMPLIANCESUMMARYRESULT_H_