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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEUSERSTATUSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEUSERSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeUserStatusResult : public ServiceResult
			{
			public:
				struct UserStatus
				{
					int labStatus;
					long totalDataMaskColumns;
					bool purchased;
					int instanceNum;
					bool renewStatus;
					long dataMaskTasks;
					long dlpCount;
					long dlpTotalCount;
					std::string version;
					long ossSize;
					long sensitiveTable;
					int instanceStatus;
					bool ossBucketSet;
					std::string sensitiveTop;
					std::string displayTime;
					std::string sensitiveTotalTop;
					bool odpsSet;
					long sensitiveTables;
					bool buyed;
					long incSensitiveTables;
					std::string authProductList;
					long alarmCount;
					int dbAuditStatus;
					long datamaskColumns;
					bool rdsSet;
					std::string instanceId;
					long dataMaskColumns;
					bool auditUpgradeStatus;
					long sensitiveObjects;
					bool trail;
					long useOssSize;
					bool authed;
					long divulgeCount;
					std::string chargeType;
					std::string accessKeyId;
					long incSensitiveObjects;
					long sensitiveObject;
					bool assetScanned;
					int remainDays;
					int useInstanceNum;
				};


				DescribeUserStatusResult();
				explicit DescribeUserStatusResult(const std::string &payload);
				~DescribeUserStatusResult();
				UserStatus getUserStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				UserStatus userStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEUSERSTATUSRESULT_H_