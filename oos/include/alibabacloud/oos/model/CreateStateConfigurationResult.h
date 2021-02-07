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

#ifndef ALIBABACLOUD_OOS_MODEL_CREATESTATECONFIGURATIONRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_CREATESTATECONFIGURATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT CreateStateConfigurationResult : public ServiceResult
			{
			public:
				struct StateConfigurationItem
				{
					std::string configureMode;
					std::string scheduleType;
					std::string scheduleExpression;
					std::string description;
					std::string parameters;
					std::string stateConfigurationId;
					std::string createTime;
					std::string templateName;
					std::string templateVersion;
					std::string targets;
					std::string templateId;
					std::string tags;
				};


				CreateStateConfigurationResult();
				explicit CreateStateConfigurationResult(const std::string &payload);
				~CreateStateConfigurationResult();
				std::vector<StateConfigurationItem> getStateConfiguration()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StateConfigurationItem> stateConfiguration_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_CREATESTATECONFIGURATIONRESULT_H_