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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDRIVESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDRIVESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeDrivesRequest : public RpcServiceRequest {
public:
	DescribeDrivesRequest();
	~DescribeDrivesRequest();
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<std::string> getDomainIds() const;
	void setDomainIds(const std::vector<std::string> &domainIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string userId_;
	std::string resourceType_;
	std::vector<std::string> domainIds_;
	std::string regionId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDRIVESREQUEST_H_
