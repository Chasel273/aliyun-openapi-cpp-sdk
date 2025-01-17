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

#include <alibabacloud/ehpc/model/ListImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListImagesResult::ListImagesResult() :
	ServiceResult()
{}

ListImagesResult::ListImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImagesResult::~ListImagesResult()
{}

void ListImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOsTagsNode = value["OsTags"]["OsInfo"];
	for (auto valueOsTagsOsInfo : allOsTagsNode)
	{
		OsInfo osTagsObject;
		if(!valueOsTagsOsInfo["Version"].isNull())
			osTagsObject.version = valueOsTagsOsInfo["Version"].asString();
		if(!valueOsTagsOsInfo["BaseOsTag"].isNull())
			osTagsObject.baseOsTag = valueOsTagsOsInfo["BaseOsTag"].asString();
		if(!valueOsTagsOsInfo["Platform"].isNull())
			osTagsObject.platform = valueOsTagsOsInfo["Platform"].asString();
		if(!valueOsTagsOsInfo["OsTag"].isNull())
			osTagsObject.osTag = valueOsTagsOsInfo["OsTag"].asString();
		if(!valueOsTagsOsInfo["ImageId"].isNull())
			osTagsObject.imageId = valueOsTagsOsInfo["ImageId"].asString();
		if(!valueOsTagsOsInfo["Architecture"].isNull())
			osTagsObject.architecture = valueOsTagsOsInfo["Architecture"].asString();
		osTags_.push_back(osTagsObject);
	}

}

std::vector<ListImagesResult::OsInfo> ListImagesResult::getOsTags()const
{
	return osTags_;
}

