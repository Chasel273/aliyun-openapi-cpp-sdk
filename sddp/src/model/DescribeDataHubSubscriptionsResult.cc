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

#include <alibabacloud/sddp/model/DescribeDataHubSubscriptionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataHubSubscriptionsResult::DescribeDataHubSubscriptionsResult() :
	ServiceResult()
{}

DescribeDataHubSubscriptionsResult::DescribeDataHubSubscriptionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataHubSubscriptionsResult::~DescribeDataHubSubscriptionsResult()
{}

void DescribeDataHubSubscriptionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Subscription"];
	for (auto value : allItems)
	{
		Subscription itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(value["CreationTime"].asString());
		if(!value["State"].isNull())
			itemsObject.state = value["State"].asString();
		if(!value["ApplicationName"].isNull())
			itemsObject.applicationName = value["ApplicationName"].asString();
		if(!value["UserId"].isNull())
			itemsObject.userId = std::stol(value["UserId"].asString());
		if(!value["LoginName"].isNull())
			itemsObject.loginName = value["LoginName"].asString();
		if(!value["DisplayName"].isNull())
			itemsObject.displayName = value["DisplayName"].asString();
		if(!value["SubscriptionUserId"].isNull())
			itemsObject.subscriptionUserId = std::stol(value["SubscriptionUserId"].asString());
		if(!value["SubscriptionUserName"].isNull())
			itemsObject.subscriptionUserName = value["SubscriptionUserName"].asString();
		if(!value["SubscriptionDisplayName"].isNull())
			itemsObject.subscriptionDisplayName = value["SubscriptionDisplayName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataHubSubscriptionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataHubSubscriptionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataHubSubscriptionsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataHubSubscriptionsResult::Subscription> DescribeDataHubSubscriptionsResult::getItems()const
{
	return items_;
}

