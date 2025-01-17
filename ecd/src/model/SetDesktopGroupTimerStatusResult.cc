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

#include <alibabacloud/ecd/model/SetDesktopGroupTimerStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

SetDesktopGroupTimerStatusResult::SetDesktopGroupTimerStatusResult() :
	ServiceResult()
{}

SetDesktopGroupTimerStatusResult::SetDesktopGroupTimerStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetDesktopGroupTimerStatusResult::~SetDesktopGroupTimerStatusResult()
{}

void SetDesktopGroupTimerStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderIds = value["OrderIds"]["OrderId"];
	for (const auto &item : allOrderIds)
		orderIds_.push_back(item.asString());
	if(!value["DesktopGroupId"].isNull())
		desktopGroupId_ = value["DesktopGroupId"].asString();

}

std::string SetDesktopGroupTimerStatusResult::getDesktopGroupId()const
{
	return desktopGroupId_;
}

std::vector<std::string> SetDesktopGroupTimerStatusResult::getOrderIds()const
{
	return orderIds_;
}

