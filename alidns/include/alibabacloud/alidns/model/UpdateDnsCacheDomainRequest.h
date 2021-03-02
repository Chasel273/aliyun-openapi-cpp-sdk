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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSCACHEDOMAINREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSCACHEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT UpdateDnsCacheDomainRequest : public RpcServiceRequest
			{
			public:
				struct SourceDnsServer
				{
					std::string port;
					std::string host;
				};

			public:
				UpdateDnsCacheDomainRequest();
				~UpdateDnsCacheDomainRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSourceProtocol()const;
				void setSourceProtocol(const std::string& sourceProtocol);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getCacheTtlMax()const;
				void setCacheTtlMax(int cacheTtlMax);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceEdns()const;
				void setSourceEdns(const std::string& sourceEdns);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getCacheTtlMin()const;
				void setCacheTtlMin(int cacheTtlMin);
				std::vector<SourceDnsServer> getSourceDnsServer()const;
				void setSourceDnsServer(const std::vector<SourceDnsServer>& sourceDnsServer);

            private:
				std::string accessKeyId_;
				std::string sourceProtocol_;
				std::string lang_;
				std::string domainName_;
				int cacheTtlMax_;
				std::string instanceId_;
				std::string sourceEdns_;
				std::string userClientIp_;
				int cacheTtlMin_;
				std::vector<SourceDnsServer> sourceDnsServer_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSCACHEDOMAINREQUEST_H_