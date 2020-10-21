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

#include <alibabacloud/sgw/model/DescribeGatewaySMBUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewaySMBUsersResult::DescribeGatewaySMBUsersResult() :
	ServiceResult()
{}

DescribeGatewaySMBUsersResult::DescribeGatewaySMBUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewaySMBUsersResult::~DescribeGatewaySMBUsersResult()
{}

void DescribeGatewaySMBUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["Username"].isNull())
			usersObject.username = valueUsersUser["Username"].asString();
		users_.push_back(usersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGatewaySMBUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGatewaySMBUsersResult::getMessage()const
{
	return message_;
}

int DescribeGatewaySMBUsersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGatewaySMBUsersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGatewaySMBUsersResult::User> DescribeGatewaySMBUsersResult::getUsers()const
{
	return users_;
}

std::string DescribeGatewaySMBUsersResult::getCode()const
{
	return code_;
}

bool DescribeGatewaySMBUsersResult::getSuccess()const
{
	return success_;
}

