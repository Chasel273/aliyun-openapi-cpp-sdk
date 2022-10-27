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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT GetAccountingReportRequest : public RpcServiceRequest {
public:
	GetAccountingReportRequest();
	~GetAccountingReportRequest();
	std::string getReportType() const;
	void setReportType(const std::string &reportType);
	int getEndTime() const;
	void setEndTime(int endTime);
	std::string getFilterValue() const;
	void setFilterValue(const std::string &filterValue);
	std::string getDim() const;
	void setDim(const std::string &dim);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	int getStartTime() const;
	void setStartTime(int startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string reportType_;
	int endTime_;
	std::string filterValue_;
	std::string dim_;
	std::string clusterId_;
	int startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string jobId_;
	int pageSize_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_GETACCOUNTINGREPORTREQUEST_H_
