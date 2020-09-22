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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBERECORDSREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeRecordsRequest();
				~DescribeRecordsRequest();

				std::string getSortDirection()const;
				void setSortDirection(const std::string& sortDirection);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageNum()const;
				void setPageNum(long pageNum);
				bool getPrivateBucket()const;
				void setPrivateBucket(bool privateBucket);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getStreamId()const;
				void setStreamId(const std::string& streamId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);

            private:
				std::string sortDirection_;
				std::string startTime_;
				std::string type_;
				long pageNum_;
				bool privateBucket_;
				long pageSize_;
				std::string showLog_;
				std::string streamId_;
				std::string endTime_;
				long ownerId_;
				std::string sortBy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBERECORDSREQUEST_H_