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

#ifndef ALIBABACLOUD_RTC_MODEL_ENABLEMAURULEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_ENABLEMAURULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT EnableMAURuleRequest : public RpcServiceRequest
			{

			public:
				EnableMAURuleRequest();
				~EnableMAURuleRequest();

				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				long getRuleId()const;
				void setRuleId(long ruleId);

            private:
				std::string showLog_;
				long ownerId_;
				std::string appId_;
				long ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_ENABLEMAURULEREQUEST_H_