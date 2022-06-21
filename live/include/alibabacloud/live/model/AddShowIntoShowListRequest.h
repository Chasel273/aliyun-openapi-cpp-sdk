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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDSHOWINTOSHOWLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDSHOWINTOSHOWLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddShowIntoShowListRequest : public RpcServiceRequest
			{

			public:
				AddShowIntoShowListRequest();
				~AddShowIntoShowListRequest();

				int getLiveInputType()const;
				void setLiveInputType(int liveInputType);
				long getDuration()const;
				void setDuration(long duration);
				int getRepeatTimes()const;
				void setRepeatTimes(int repeatTimes);
				std::string getShowName()const;
				void setShowName(const std::string& showName);
				std::string getResourceId()const;
				void setResourceId(const std::string& resourceId);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getResourceUrl()const;
				void setResourceUrl(const std::string& resourceUrl);
				int getSpot()const;
				void setSpot(int spot);

            private:
				int liveInputType_;
				long duration_;
				int repeatTimes_;
				std::string showName_;
				std::string resourceId_;
				std::string casterId_;
				long ownerId_;
				std::string resourceType_;
				std::string resourceUrl_;
				int spot_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDSHOWINTOSHOWLISTREQUEST_H_