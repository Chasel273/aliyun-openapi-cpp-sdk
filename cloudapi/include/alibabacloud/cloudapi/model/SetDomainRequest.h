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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_SETDOMAINREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_SETDOMAINREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT SetDomainRequest : public RpcServiceRequest {
public:
	SetDomainRequest();
	~SetDomainRequest();
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	bool getIsHttpRedirectToHttps() const;
	void setIsHttpRedirectToHttps(bool isHttpRedirectToHttps);
	std::string getCustomDomainType() const;
	void setCustomDomainType(const std::string &customDomainType);
	std::string getBindStageName() const;
	void setBindStageName(const std::string &bindStageName);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	bool getIsForce() const;
	void setIsForce(bool isForce);

private:
	std::string groupId_;
	std::string domainName_;
	bool isHttpRedirectToHttps_;
	std::string customDomainType_;
	std::string bindStageName_;
	std::string accessKeyId_;
	std::string securityToken_;
	bool isForce_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_SETDOMAINREQUEST_H_
