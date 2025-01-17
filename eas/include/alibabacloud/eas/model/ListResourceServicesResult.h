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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT ListResourceServicesResult : public ServiceResult
			{
			public:
				struct ServicesItem
				{
					std::string message;
					int memory;
					int currentVersion;
					int runningInstance;
					int cpu;
					std::string image;
					int gpu;
					std::string callerUid;
					std::string reason;
					std::string source;
					std::string serviceId;
					int totalInstance;
					std::string serviceConfig;
					std::string accessToken;
					std::string internetEndpoint;
					std::string status;
					std::string requestId;
					std::string createTime;
					std::string resource;
					std::string _namespace;
					int weight;
					int pendingInstance;
					int latestVersion;
					std::string serviceName;
					std::string updateTime;
					std::string region;
					std::string parentUid;
					std::string intranetEndpoint;
				};


				ListResourceServicesResult();
				explicit ListResourceServicesResult(const std::string &payload);
				~ListResourceServicesResult();
				std::vector<ServicesItem> getServices()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ServicesItem> services_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_LISTRESOURCESERVICESRESULT_H_