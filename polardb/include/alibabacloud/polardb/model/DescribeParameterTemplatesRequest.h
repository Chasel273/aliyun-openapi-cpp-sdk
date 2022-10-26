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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeParameterTemplatesRequest : public RpcServiceRequest
			{

			public:
				DescribeParameterTemplatesRequest();
				~DescribeParameterTemplatesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBType()const;
				void setDBType(const std::string& dBType);
				std::string getDBVersion()const;
				void setDBVersion(const std::string& dBVersion);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string dBType_;
				std::string dBVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_