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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEGROUPREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT CreateOrUpdateGroupRequest : public RpcServiceRequest
			{

			public:
				CreateOrUpdateGroupRequest();
				~CreateOrUpdateGroupRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getId()const;
				void setId(long id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getRuleIds()const;
				void setRuleIds(const std::string& ruleIds);
				std::string getMachineGroupIds()const;
				void setMachineGroupIds(const std::string& machineGroupIds);

            private:
				std::string description_;
				std::string sourceIp_;
				long id_;
				std::string lang_;
				std::string groupName_;
				std::string ruleIds_;
				std::string machineGroupIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATEORUPDATEGROUPREQUEST_H_