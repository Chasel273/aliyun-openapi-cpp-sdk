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

#ifndef ALIBABACLOUD_DNSKNOCKER_MODEL_GETDOMAINRESULT_H_
#define ALIBABACLOUD_DNSKNOCKER_MODEL_GETDOMAINRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dnsknocker/DnsKnockerExport.h>

namespace AlibabaCloud
{
	namespace DnsKnocker
	{
		namespace Model
		{
			class ALIBABACLOUD_DNSKNOCKER_EXPORT GetDomainResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string message;
					std::string domainName;
					std::string exists;
				};


				GetDomainResult();
				explicit GetDomainResult(const std::string &payload);
				~GetDomainResult();
				std::vector<Data> getDomain()const;
				std::string getResultMessage()const;
				std::string getResultCode()const;
				std::string getSuccess()const;
				std::string getTransactionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> domain_;
				std::string resultMessage_;
				std::string resultCode_;
				std::string success_;
				std::string transactionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DNSKNOCKER_MODEL_GETDOMAINRESULT_H_