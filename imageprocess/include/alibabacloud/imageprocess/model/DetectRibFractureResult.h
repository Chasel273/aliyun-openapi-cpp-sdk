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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTRIBFRACTURERESULT_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTRIBFRACTURERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT DetectRibFractureResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DetectionsItem
					{
						float fractureConfidence;
						std::string fractureCategory;
						std::vector<std::string> coordinateImage;
						std::vector<std::string> coordinates;
						std::string fractureLocation;
						long fractureSegment;
						int fractureId;
					};
					std::vector<std::string> origin;
					std::vector<std::string> spacing;
					std::vector<DetectionsItem> detections;
					std::string resultURL;
				};


				DetectRibFractureResult();
				explicit DetectRibFractureResult(const std::string &payload);
				~DetectRibFractureResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_DETECTRIBFRACTURERESULT_H_