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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyDedicatedHostAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyDedicatedHostAttributeRequest();
				~ModifyDedicatedHostAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAllocationStatus()const;
				void setAllocationStatus(const std::string& allocationStatus);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDedicatedHostId()const;
				void setDedicatedHostId(const std::string& dedicatedHostId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string hostName_;
				std::string regionId_;
				std::string allocationStatus_;
				std::string resourceOwnerAccount_;
				std::string dedicatedHostId_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_