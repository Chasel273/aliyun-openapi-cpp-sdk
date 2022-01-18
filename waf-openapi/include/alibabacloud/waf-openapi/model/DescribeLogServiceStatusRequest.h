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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBELOGSERVICESTATUSREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBELOGSERVICESTATUSREQUEST_H_

#include <alibabacloud/waf-openapi/Waf_openapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Waf_openapi {
namespace Model {
class ALIBABACLOUD_WAF_OPENAPI_EXPORT DescribeLogServiceStatusRequest : public RpcServiceRequest {
public:
	DescribeLogServiceStatusRequest();
	~DescribeLogServiceStatusRequest();
	std::vector<std::string> getDomainNames() const;
	void setDomainNames(const std::vector<std::string> &domainNames);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::vector<std::string> domainNames_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	int pageSize_;
	std::string instanceId_;
	std::string region_;
};
} // namespace Model
} // namespace Waf_openapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_DESCRIBELOGSERVICESTATUSREQUEST_H_
