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

#include <alibabacloud/imageseg/model/SegmentFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageseg;
using namespace AlibabaCloud::Imageseg::Model;

SegmentFaceResult::SegmentFaceResult() :
	ServiceResult()
{}

SegmentFaceResult::SegmentFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SegmentFaceResult::~SegmentFaceResult()
{}

void SegmentFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allElementsNode = dataNode["Elements"]["Element"];
	for (auto dataNodeElementsElement : allElementsNode)
	{
		Data::Element elementObject;
		if(!dataNodeElementsElement["ImageURL"].isNull())
			elementObject.imageURL = dataNodeElementsElement["ImageURL"].asString();
		if(!dataNodeElementsElement["Width"].isNull())
			elementObject.width = std::stoi(dataNodeElementsElement["Width"].asString());
		if(!dataNodeElementsElement["Height"].isNull())
			elementObject.height = std::stoi(dataNodeElementsElement["Height"].asString());
		if(!dataNodeElementsElement["Y"].isNull())
			elementObject.y = std::stoi(dataNodeElementsElement["Y"].asString());
		if(!dataNodeElementsElement["X"].isNull())
			elementObject.x = std::stoi(dataNodeElementsElement["X"].asString());
		data_.elements.push_back(elementObject);
	}

}

SegmentFaceResult::Data SegmentFaceResult::getData()const
{
	return data_;
}

