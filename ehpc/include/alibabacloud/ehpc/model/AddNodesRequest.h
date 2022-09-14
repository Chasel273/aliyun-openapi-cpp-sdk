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

#ifndef ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT AddNodesRequest : public RpcServiceRequest {
public:
	AddNodesRequest();
	~AddNodesRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	int getCount() const;
	void setCount(int count);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getComputeSpotStrategy() const;
	void setComputeSpotStrategy(const std::string &computeSpotStrategy);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getImageOwnerAlias() const;
	void setImageOwnerAlias(const std::string &imageOwnerAlias);
	std::string getComputeSpotPriceLimit() const;
	void setComputeSpotPriceLimit(const std::string &computeSpotPriceLimit);

private:
	std::string imageId_;
	int count_;
	std::string clusterId_;
	std::string computeSpotStrategy_;
	std::string accessKeyId_;
	std::string imageOwnerAlias_;
	std::string computeSpotPriceLimit_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_ADDNODESREQUEST_H_
