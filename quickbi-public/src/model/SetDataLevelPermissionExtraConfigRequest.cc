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

#include <alibabacloud/quickbi-public/model/SetDataLevelPermissionExtraConfigRequest.h>

using AlibabaCloud::Quickbi_public::Model::SetDataLevelPermissionExtraConfigRequest;

SetDataLevelPermissionExtraConfigRequest::SetDataLevelPermissionExtraConfigRequest() :
	RpcServiceRequest("quickbi-public", "2022-01-01", "SetDataLevelPermissionExtraConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetDataLevelPermissionExtraConfigRequest::~SetDataLevelPermissionExtraConfigRequest()
{}

std::string SetDataLevelPermissionExtraConfigRequest::getMissHitPolicy()const
{
	return missHitPolicy_;
}

void SetDataLevelPermissionExtraConfigRequest::setMissHitPolicy(const std::string& missHitPolicy)
{
	missHitPolicy_ = missHitPolicy;
	setParameter("MissHitPolicy", missHitPolicy);
}

std::string SetDataLevelPermissionExtraConfigRequest::getRuleType()const
{
	return ruleType_;
}

void SetDataLevelPermissionExtraConfigRequest::setRuleType(const std::string& ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", ruleType);
}

std::string SetDataLevelPermissionExtraConfigRequest::getAccessPoint()const
{
	return accessPoint_;
}

void SetDataLevelPermissionExtraConfigRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

std::string SetDataLevelPermissionExtraConfigRequest::getSignType()const
{
	return signType_;
}

void SetDataLevelPermissionExtraConfigRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string SetDataLevelPermissionExtraConfigRequest::getCubeId()const
{
	return cubeId_;
}

void SetDataLevelPermissionExtraConfigRequest::setCubeId(const std::string& cubeId)
{
	cubeId_ = cubeId;
	setParameter("CubeId", cubeId);
}

