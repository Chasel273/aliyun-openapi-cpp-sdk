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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPROMOTEACTIVITYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPROMOTEACTIVITYREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancePromoteActivityRequest : public RpcServiceRequest {
public:
	DescribeDBInstancePromoteActivityRequest();
	~DescribeDBInstancePromoteActivityRequest();
	std::string getDbInstanceName() const;
	void setDbInstanceName(const std::string &dbInstanceName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getAliUid() const;
	void setAliUid(const std::string &aliUid);

private:
	std::string dbInstanceName_;
	long resourceOwnerId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string aliUid_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPROMOTEACTIVITYREQUEST_H_
