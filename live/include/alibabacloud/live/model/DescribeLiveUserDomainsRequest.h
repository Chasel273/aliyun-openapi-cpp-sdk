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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveUserDomainsRequest : public RpcServiceRequest
			{

			public:
				DescribeLiveUserDomainsRequest();
				~DescribeLiveUserDomainsRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getRegionName()const;
				void setRegionName(const std::string& regionName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getDomainStatus()const;
				void setDomainStatus(const std::string& domainStatus);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getLiveDomainType()const;
				void setLiveDomainType(const std::string& liveDomainType);
				std::string getDomainSearchType()const;
				void setDomainSearchType(const std::string& domainSearchType);

            private:
				std::string securityToken_;
				int pageSize_;
				std::string domainName_;
				std::string regionName_;
				long ownerId_;
				int pageNumber_;
				std::string domainStatus_;
				std::string accessKeyId_;
				std::string liveDomainType_;
				std::string domainSearchType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERDOMAINSREQUEST_H_