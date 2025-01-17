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

#ifndef ALIBABACLOUD_IMAGEENHAN_MODEL_MAKESUPERRESOLUTIONIMAGEREQUEST_H_
#define ALIBABACLOUD_IMAGEENHAN_MODEL_MAKESUPERRESOLUTIONIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imageenhan/ImageenhanExport.h>

namespace AlibabaCloud
{
	namespace Imageenhan
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEENHAN_EXPORT MakeSuperResolutionImageRequest : public RpcServiceRequest
			{

			public:
				MakeSuperResolutionImageRequest();
				~MakeSuperResolutionImageRequest();

				long getUpscaleFactor()const;
				void setUpscaleFactor(long upscaleFactor);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getOutputFormat()const;
				void setOutputFormat(const std::string& outputFormat);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				long getOutputQuality()const;
				void setOutputQuality(long outputQuality);

            private:
				long upscaleFactor_;
				std::string mode_;
				std::string outputFormat_;
				std::string url_;
				long outputQuality_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEENHAN_MODEL_MAKESUPERRESOLUTIONIMAGEREQUEST_H_