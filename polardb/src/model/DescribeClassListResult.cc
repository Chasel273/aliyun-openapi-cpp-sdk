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

#include <alibabacloud/polardb/model/DescribeClassListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeClassListResult::DescribeClassListResult() :
	ServiceResult()
{}

DescribeClassListResult::DescribeClassListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClassListResult::~DescribeClassListResult()
{}

void DescribeClassListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["MaxIOPS"].isNull())
			itemsObject.maxIOPS = valueItemsItemsItem["MaxIOPS"].asString();
		if(!valueItemsItemsItem["ClassTypeLevel"].isNull())
			itemsObject.classTypeLevel = valueItemsItemsItem["ClassTypeLevel"].asString();
		if(!valueItemsItemsItem["Cpu"].isNull())
			itemsObject.cpu = valueItemsItemsItem["Cpu"].asString();
		if(!valueItemsItemsItem["ReferencePrice"].isNull())
			itemsObject.referencePrice = valueItemsItemsItem["ReferencePrice"].asString();
		if(!valueItemsItemsItem["MaxConnections"].isNull())
			itemsObject.maxConnections = valueItemsItemsItem["MaxConnections"].asString();
		if(!valueItemsItemsItem["MemoryClass"].isNull())
			itemsObject.memoryClass = valueItemsItemsItem["MemoryClass"].asString();
		if(!valueItemsItemsItem["ClassCode"].isNull())
			itemsObject.classCode = valueItemsItemsItem["ClassCode"].asString();
		if(!valueItemsItemsItem["ClassGroup"].isNull())
			itemsObject.classGroup = valueItemsItemsItem["ClassGroup"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<DescribeClassListResult::ItemsItem> DescribeClassListResult::getItems()const
{
	return items_;
}

std::string DescribeClassListResult::getRegionId()const
{
	return regionId_;
}

