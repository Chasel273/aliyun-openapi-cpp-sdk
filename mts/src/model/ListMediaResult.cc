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

#include <alibabacloud/mts/model/ListMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListMediaResult::ListMediaResult() :
	ServiceResult()
{}

ListMediaResult::ListMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediaResult::~ListMediaResult()
{}

void ListMediaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaListNode = value["MediaList"]["Media"];
	for (auto valueMediaListMedia : allMediaListNode)
	{
		Media mediaListObject;
		if(!valueMediaListMedia["CreationTime"].isNull())
			mediaListObject.creationTime = valueMediaListMedia["CreationTime"].asString();
		if(!valueMediaListMedia["CateId"].isNull())
			mediaListObject.cateId = std::stol(valueMediaListMedia["CateId"].asString());
		if(!valueMediaListMedia["Height"].isNull())
			mediaListObject.height = valueMediaListMedia["Height"].asString();
		if(!valueMediaListMedia["CensorState"].isNull())
			mediaListObject.censorState = valueMediaListMedia["CensorState"].asString();
		if(!valueMediaListMedia["Bitrate"].isNull())
			mediaListObject.bitrate = valueMediaListMedia["Bitrate"].asString();
		if(!valueMediaListMedia["MediaId"].isNull())
			mediaListObject.mediaId = valueMediaListMedia["MediaId"].asString();
		if(!valueMediaListMedia["PublishState"].isNull())
			mediaListObject.publishState = valueMediaListMedia["PublishState"].asString();
		if(!valueMediaListMedia["Description"].isNull())
			mediaListObject.description = valueMediaListMedia["Description"].asString();
		if(!valueMediaListMedia["Width"].isNull())
			mediaListObject.width = valueMediaListMedia["Width"].asString();
		if(!valueMediaListMedia["Size"].isNull())
			mediaListObject.size = valueMediaListMedia["Size"].asString();
		if(!valueMediaListMedia["CoverURL"].isNull())
			mediaListObject.coverURL = valueMediaListMedia["CoverURL"].asString();
		if(!valueMediaListMedia["Duration"].isNull())
			mediaListObject.duration = valueMediaListMedia["Duration"].asString();
		if(!valueMediaListMedia["Fps"].isNull())
			mediaListObject.fps = valueMediaListMedia["Fps"].asString();
		if(!valueMediaListMedia["Title"].isNull())
			mediaListObject.title = valueMediaListMedia["Title"].asString();
		if(!valueMediaListMedia["Format"].isNull())
			mediaListObject.format = valueMediaListMedia["Format"].asString();
		auto fileNode = value["File"];
		if(!fileNode["State"].isNull())
			mediaListObject.file.state = fileNode["State"].asString();
		if(!fileNode["URL"].isNull())
			mediaListObject.file.uRL = fileNode["URL"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
			mediaListObject.tags.push_back(value.asString());
		auto allRunIdList = value["RunIdList"]["RunId"];
		for (auto value : allRunIdList)
			mediaListObject.runIdList.push_back(value.asString());
		mediaList_.push_back(mediaListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<ListMediaResult::Media> ListMediaResult::getMediaList()const
{
	return mediaList_;
}

std::string ListMediaResult::getNextPageToken()const
{
	return nextPageToken_;
}

