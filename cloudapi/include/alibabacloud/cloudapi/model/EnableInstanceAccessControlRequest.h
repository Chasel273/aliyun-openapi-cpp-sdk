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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_ENABLEINSTANCEACCESSCONTROLREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_ENABLEINSTANCEACCESSCONTROLREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT EnableInstanceAccessControlRequest : public RpcServiceRequest {
public:
	EnableInstanceAccessControlRequest();
	~EnableInstanceAccessControlRequest();
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAclType() const;
	void setAclType(const std::string &aclType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);

private:
	std::string aclId_;
	std::string accessKeyId_;
	std::string aclType_;
	std::string instanceId_;
	std::string securityToken_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_ENABLEINSTANCEACCESSCONTROLREQUEST_H_
