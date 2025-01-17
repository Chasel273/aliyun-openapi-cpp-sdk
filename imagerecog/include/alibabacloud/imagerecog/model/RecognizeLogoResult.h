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

#ifndef ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZELOGORESULT_H_
#define ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZELOGORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imagerecog/ImagerecogExport.h>

namespace AlibabaCloud
{
	namespace Imagerecog
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGERECOG_EXPORT RecognizeLogoResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Element
					{
						struct Result
						{
							struct LogoData
							{
								std::string type;
								float w;
								float h;
								float x;
								float y;
								std::string name;
							};
							std::string suggestion;
							std::vector<Result::LogoData> logosData;
							float rate;
							std::string label;
						};
						std::string taskId;
						std::vector<Element::Result> results;
						std::string imageURL;
					};
					std::vector<Element> elements;
				};


				RecognizeLogoResult();
				explicit RecognizeLogoResult(const std::string &payload);
				~RecognizeLogoResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGERECOG_MODEL_RECOGNIZELOGORESULT_H_