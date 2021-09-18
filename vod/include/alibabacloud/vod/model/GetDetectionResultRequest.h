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

#ifndef ALIBABACLOUD_VOD_MODEL_GETDETECTIONRESULTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETDETECTIONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetDetectionResultRequest : public RpcServiceRequest
			{

			public:
				GetDetectionResultRequest();
				~GetDetectionResultRequest();

				long getCountByPage()const;
				void setCountByPage(long countByPage);
				bool getDesensitization()const;
				void setDesensitization(bool desensitization);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				long getPage()const;
				void setPage(long page);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long countByPage_;
				bool desensitization_;
				std::string jobId_;
				long page_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETDETECTIONRESULTREQUEST_H_