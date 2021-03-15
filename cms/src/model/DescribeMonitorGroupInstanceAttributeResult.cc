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

#include <alibabacloud/cms/model/DescribeMonitorGroupInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorGroupInstanceAttributeResult::DescribeMonitorGroupInstanceAttributeResult() :
	ServiceResult()
{}

DescribeMonitorGroupInstanceAttributeResult::DescribeMonitorGroupInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorGroupInstanceAttributeResult::~DescribeMonitorGroupInstanceAttributeResult()
{}

void DescribeMonitorGroupInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["InstanceName"].isNull())
			resourcesObject.instanceName = valueResourcesResource["InstanceName"].asString();
		if(!valueResourcesResource["InstanceId"].isNull())
			resourcesObject.instanceId = valueResourcesResource["InstanceId"].asString();
		if(!valueResourcesResource["Desc"].isNull())
			resourcesObject.desc = valueResourcesResource["Desc"].asString();
		if(!valueResourcesResource["NetworkType"].isNull())
			resourcesObject.networkType = valueResourcesResource["NetworkType"].asString();
		if(!valueResourcesResource["Category"].isNull())
			resourcesObject.category = valueResourcesResource["Category"].asString();
		if(!valueResourcesResource["Dimension"].isNull())
			resourcesObject.dimension = valueResourcesResource["Dimension"].asString();
		auto allTagsNode = valueResourcesResource["Tags"]["Tag"];
		for (auto valueResourcesResourceTagsTag : allTagsNode)
		{
			Resource::Tag tagsObject;
			if(!valueResourcesResourceTagsTag["Key"].isNull())
				tagsObject.key = valueResourcesResourceTagsTag["Key"].asString();
			if(!valueResourcesResourceTagsTag["Value"].isNull())
				tagsObject.value = valueResourcesResourceTagsTag["Value"].asString();
			resourcesObject.tags.push_back(tagsObject);
		}
		auto regionNode = value["Region"];
		if(!regionNode["RegionId"].isNull())
			resourcesObject.region.regionId = regionNode["RegionId"].asString();
		if(!regionNode["AvailabilityZone"].isNull())
			resourcesObject.region.availabilityZone = regionNode["AvailabilityZone"].asString();
		auto vpcNode = value["Vpc"];
		if(!vpcNode["VpcInstanceId"].isNull())
			resourcesObject.vpc.vpcInstanceId = vpcNode["VpcInstanceId"].asString();
		if(!vpcNode["VswitchInstanceId"].isNull())
			resourcesObject.vpc.vswitchInstanceId = vpcNode["VswitchInstanceId"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeMonitorGroupInstanceAttributeResult::getMessage()const
{
	return message_;
}

int DescribeMonitorGroupInstanceAttributeResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMonitorGroupInstanceAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeMonitorGroupInstanceAttributeResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMonitorGroupInstanceAttributeResult::Resource> DescribeMonitorGroupInstanceAttributeResult::getResources()const
{
	return resources_;
}

int DescribeMonitorGroupInstanceAttributeResult::getCode()const
{
	return code_;
}

bool DescribeMonitorGroupInstanceAttributeResult::getSuccess()const
{
	return success_;
}

