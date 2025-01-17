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

#include <alibabacloud/config/model/StartConfigurationRecorderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

StartConfigurationRecorderResult::StartConfigurationRecorderResult() :
	ServiceResult()
{}

StartConfigurationRecorderResult::StartConfigurationRecorderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartConfigurationRecorderResult::~StartConfigurationRecorderResult()
{}

void StartConfigurationRecorderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configurationRecorderNode = value["ConfigurationRecorder"];
	if(!configurationRecorderNode["OrganizationEnableStatus"].isNull())
		configurationRecorder_.organizationEnableStatus = configurationRecorderNode["OrganizationEnableStatus"].asString();
	if(!configurationRecorderNode["ConfigurationRecorderStatus"].isNull())
		configurationRecorder_.configurationRecorderStatus = configurationRecorderNode["ConfigurationRecorderStatus"].asString();
	if(!configurationRecorderNode["OrganizationMasterId"].isNull())
		configurationRecorder_.organizationMasterId = std::stol(configurationRecorderNode["OrganizationMasterId"].asString());
	if(!configurationRecorderNode["AccountId"].isNull())
		configurationRecorder_.accountId = std::stol(configurationRecorderNode["AccountId"].asString());
		auto allResourceTypes = configurationRecorderNode["ResourceTypes"]["ResourceType"];
		for (auto value : allResourceTypes)
			configurationRecorder_.resourceTypes.push_back(value.asString());

}

StartConfigurationRecorderResult::ConfigurationRecorder StartConfigurationRecorderResult::getConfigurationRecorder()const
{
	return configurationRecorder_;
}

