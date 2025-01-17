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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTALARMEVENTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTALARMEVENTSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListHoneypotAlarmEventsRequest : public RpcServiceRequest {
public:
	ListHoneypotAlarmEventsRequest();
	~ListHoneypotAlarmEventsRequest();
	std::string getSrcIp() const;
	void setSrcIp(const std::string &srcIp);
	std::vector<std::string> getRiskLevelList() const;
	void setRiskLevelList(const std::vector<std::string> &riskLevelList);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDstIp() const;
	void setDstIp(const std::string &dstIp);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);

private:
	std::string srcIp_;
	std::vector<std::string> riskLevelList_;
	int pageSize_;
	std::string dstIp_;
	std::string dealed_;
	int currentPage_;
	std::string requestId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTALARMEVENTSREQUEST_H_
