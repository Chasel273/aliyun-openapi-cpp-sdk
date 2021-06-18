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

#include <alibabacloud/sas/model/ModifyStrategyRequest.h>

using AlibabaCloud::Sas::Model::ModifyStrategyRequest;

ModifyStrategyRequest::ModifyStrategyRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyStrategy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyStrategyRequest::~ModifyStrategyRequest()
{}

std::string ModifyStrategyRequest::getCycleDays()const
{
	return cycleDays_;
}

void ModifyStrategyRequest::setCycleDays(const std::string& cycleDays)
{
	cycleDays_ = cycleDays;
	setParameter("CycleDays", cycleDays);
}

std::string ModifyStrategyRequest::getRiskSubTypeName()const
{
	return riskSubTypeName_;
}

void ModifyStrategyRequest::setRiskSubTypeName(const std::string& riskSubTypeName)
{
	riskSubTypeName_ = riskSubTypeName;
	setParameter("RiskSubTypeName", riskSubTypeName);
}

std::string ModifyStrategyRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyStrategyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyStrategyRequest::getId()const
{
	return id_;
}

void ModifyStrategyRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyStrategyRequest::getCycleStartTime()const
{
	return cycleStartTime_;
}

void ModifyStrategyRequest::setCycleStartTime(const std::string& cycleStartTime)
{
	cycleStartTime_ = cycleStartTime;
	setParameter("CycleStartTime", cycleStartTime);
}

std::string ModifyStrategyRequest::getName()const
{
	return name_;
}

void ModifyStrategyRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

