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

#include <alibabacloud/cloudesl/model/DescribePlanogramRailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribePlanogramRailsResult::DescribePlanogramRailsResult() :
	ServiceResult()
{}

DescribePlanogramRailsResult::DescribePlanogramRailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlanogramRailsResult::~DescribePlanogramRailsResult()
{}

void DescribePlanogramRailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlanogramRailInfosNode = value["PlanogramRailInfos"]["PlanogramRailInfo"];
	for (auto valuePlanogramRailInfosPlanogramRailInfo : allPlanogramRailInfosNode)
	{
		PlanogramRailInfo planogramRailInfosObject;
		if(!valuePlanogramRailInfosPlanogramRailInfo["Shelf"].isNull())
			planogramRailInfosObject.shelf = valuePlanogramRailInfosPlanogramRailInfo["Shelf"].asString();
		if(!valuePlanogramRailInfosPlanogramRailInfo["RailCode"].isNull())
			planogramRailInfosObject.railCode = valuePlanogramRailInfosPlanogramRailInfo["RailCode"].asString();
		if(!valuePlanogramRailInfosPlanogramRailInfo["Layer"].isNull())
			planogramRailInfosObject.layer = std::stoi(valuePlanogramRailInfosPlanogramRailInfo["Layer"].asString());
		if(!valuePlanogramRailInfosPlanogramRailInfo["GapUnit"].isNull())
			planogramRailInfosObject.gapUnit = std::stoi(valuePlanogramRailInfosPlanogramRailInfo["GapUnit"].asString());
		planogramRailInfos_.push_back(planogramRailInfosObject);
	}
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribePlanogramRailsResult::PlanogramRailInfo> DescribePlanogramRailsResult::getPlanogramRailInfos()const
{
	return planogramRailInfos_;
}

int DescribePlanogramRailsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribePlanogramRailsResult::getMessage()const
{
	return message_;
}

std::string DescribePlanogramRailsResult::getStoreId()const
{
	return storeId_;
}

int DescribePlanogramRailsResult::getPageSize()const
{
	return pageSize_;
}

int DescribePlanogramRailsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribePlanogramRailsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribePlanogramRailsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribePlanogramRailsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribePlanogramRailsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribePlanogramRailsResult::getCode()const
{
	return code_;
}

bool DescribePlanogramRailsResult::getSuccess()const
{
	return success_;
}

