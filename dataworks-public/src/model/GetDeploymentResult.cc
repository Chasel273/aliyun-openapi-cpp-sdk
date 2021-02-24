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

#include <alibabacloud/dataworks-public/model/GetDeploymentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDeploymentResult::GetDeploymentResult() :
	ServiceResult()
{}

GetDeploymentResult::GetDeploymentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeploymentResult::~GetDeploymentResult()
{}

void GetDeploymentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto deploymentNode = dataNode["Deployment"];
	if(!deploymentNode["Name"].isNull())
		data_.deployment.name = deploymentNode["Name"].asString();
	if(!deploymentNode["CreatorId"].isNull())
		data_.deployment.creatorId = deploymentNode["CreatorId"].asString();
	if(!deploymentNode["HandlerId"].isNull())
		data_.deployment.handlerId = deploymentNode["HandlerId"].asString();
	if(!deploymentNode["CreateTime"].isNull())
		data_.deployment.createTime = std::stol(deploymentNode["CreateTime"].asString());
	if(!deploymentNode["ExecuteTime"].isNull())
		data_.deployment.executeTime = std::stol(deploymentNode["ExecuteTime"].asString());
	if(!deploymentNode["Status"].isNull())
		data_.deployment.status = std::stoi(deploymentNode["Status"].asString());
	if(!deploymentNode["FromEnvironment"].isNull())
		data_.deployment.fromEnvironment = std::stoi(deploymentNode["FromEnvironment"].asString());
	if(!deploymentNode["ToEnvironment"].isNull())
		data_.deployment.toEnvironment = std::stoi(deploymentNode["ToEnvironment"].asString());
	if(!deploymentNode["ErrorMessage"].isNull())
		data_.deployment.errorMessage = deploymentNode["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int GetDeploymentResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDeploymentResult::Data GetDeploymentResult::getData()const
{
	return data_;
}

std::string GetDeploymentResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDeploymentResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDeploymentResult::getSuccess()const
{
	return success_;
}

