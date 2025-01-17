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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeDBInstancePerformanceRequest : public RpcServiceRequest {
public:
	DescribeDBInstancePerformanceRequest();
	~DescribeDBInstancePerformanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRoleId() const;
	void setRoleId(const std::string &roleId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getReplicaSetRole() const;
	void setReplicaSetRole(const std::string &replicaSetRole);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getKey() const;
	void setKey(const std::string &key);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string roleId_;
	std::string startTime_;
	std::string accessKeyId_;
	std::string replicaSetRole_;
	std::string securityToken_;
	std::string dBInstanceId_;
	std::string nodeId_;
	std::string key_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCEREQUEST_H_
