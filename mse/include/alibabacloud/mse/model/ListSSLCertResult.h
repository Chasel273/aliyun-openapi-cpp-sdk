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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTSSLCERTRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTSSLCERTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListSSLCertResult : public ServiceResult
			{
			public:
				struct Domains
				{
					std::string afterDate;
					std::string gmtBefore;
					std::string sans;
					std::string issuer;
					std::string certIdentifier;
					std::string certName;
					std::string algorithm;
					std::string gmtAfter;
					std::string commonName;
					std::string beforeDate;
				};


				ListSSLCertResult();
				explicit ListSSLCertResult(const std::string &payload);
				~ListSSLCertResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<Domains> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<Domains> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTSSLCERTRESULT_H_