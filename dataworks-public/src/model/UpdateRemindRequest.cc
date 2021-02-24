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

#include <alibabacloud/dataworks-public/model/UpdateRemindRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateRemindRequest;

UpdateRemindRequest::UpdateRemindRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateRemind")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRemindRequest::~UpdateRemindRequest()
{}

std::string UpdateRemindRequest::getDndEnd()const
{
	return dndEnd_;
}

void UpdateRemindRequest::setDndEnd(const std::string& dndEnd)
{
	dndEnd_ = dndEnd;
	setBodyParameter("DndEnd", dndEnd);
}

std::string UpdateRemindRequest::getAlertUnit()const
{
	return alertUnit_;
}

void UpdateRemindRequest::setAlertUnit(const std::string& alertUnit)
{
	alertUnit_ = alertUnit;
	setBodyParameter("AlertUnit", alertUnit);
}

std::string UpdateRemindRequest::getRemindUnit()const
{
	return remindUnit_;
}

void UpdateRemindRequest::setRemindUnit(const std::string& remindUnit)
{
	remindUnit_ = remindUnit;
	setBodyParameter("RemindUnit", remindUnit);
}

bool UpdateRemindRequest::getUseFlag()const
{
	return useFlag_;
}

void UpdateRemindRequest::setUseFlag(bool useFlag)
{
	useFlag_ = useFlag;
	setBodyParameter("UseFlag", useFlag ? "true" : "false");
}

int UpdateRemindRequest::getAlertInterval()const
{
	return alertInterval_;
}

void UpdateRemindRequest::setAlertInterval(int alertInterval)
{
	alertInterval_ = alertInterval;
	setBodyParameter("AlertInterval", std::to_string(alertInterval));
}

std::string UpdateRemindRequest::getAlertMethods()const
{
	return alertMethods_;
}

void UpdateRemindRequest::setAlertMethods(const std::string& alertMethods)
{
	alertMethods_ = alertMethods;
	setBodyParameter("AlertMethods", alertMethods);
}

std::string UpdateRemindRequest::getRobotUrls()const
{
	return robotUrls_;
}

void UpdateRemindRequest::setRobotUrls(const std::string& robotUrls)
{
	robotUrls_ = robotUrls;
	setBodyParameter("RobotUrls", robotUrls);
}

int UpdateRemindRequest::getMaxAlertTimes()const
{
	return maxAlertTimes_;
}

void UpdateRemindRequest::setMaxAlertTimes(int maxAlertTimes)
{
	maxAlertTimes_ = maxAlertTimes;
	setBodyParameter("MaxAlertTimes", std::to_string(maxAlertTimes));
}

std::string UpdateRemindRequest::getBizProcessIds()const
{
	return bizProcessIds_;
}

void UpdateRemindRequest::setBizProcessIds(const std::string& bizProcessIds)
{
	bizProcessIds_ = bizProcessIds;
	setBodyParameter("BizProcessIds", bizProcessIds);
}

std::string UpdateRemindRequest::getRemindType()const
{
	return remindType_;
}

void UpdateRemindRequest::setRemindType(const std::string& remindType)
{
	remindType_ = remindType;
	setBodyParameter("RemindType", remindType);
}

std::string UpdateRemindRequest::getAlertTargets()const
{
	return alertTargets_;
}

void UpdateRemindRequest::setAlertTargets(const std::string& alertTargets)
{
	alertTargets_ = alertTargets;
	setBodyParameter("AlertTargets", alertTargets);
}

std::string UpdateRemindRequest::getBaselineIds()const
{
	return baselineIds_;
}

void UpdateRemindRequest::setBaselineIds(const std::string& baselineIds)
{
	baselineIds_ = baselineIds;
	setBodyParameter("BaselineIds", baselineIds);
}

long UpdateRemindRequest::getRemindId()const
{
	return remindId_;
}

void UpdateRemindRequest::setRemindId(long remindId)
{
	remindId_ = remindId;
	setBodyParameter("RemindId", std::to_string(remindId));
}

std::string UpdateRemindRequest::getDetail()const
{
	return detail_;
}

void UpdateRemindRequest::setDetail(const std::string& detail)
{
	detail_ = detail;
	setBodyParameter("Detail", detail);
}

std::string UpdateRemindRequest::getRemindName()const
{
	return remindName_;
}

void UpdateRemindRequest::setRemindName(const std::string& remindName)
{
	remindName_ = remindName;
	setBodyParameter("RemindName", remindName);
}

long UpdateRemindRequest::getProjectId()const
{
	return projectId_;
}

void UpdateRemindRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

std::string UpdateRemindRequest::getNodeIds()const
{
	return nodeIds_;
}

void UpdateRemindRequest::setNodeIds(const std::string& nodeIds)
{
	nodeIds_ = nodeIds;
	setBodyParameter("NodeIds", nodeIds);
}

