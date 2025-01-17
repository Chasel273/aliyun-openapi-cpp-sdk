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

#ifndef ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTRESULT_H_
#define ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dytnsapi/DytnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dytnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYTNSAPI_EXPORT DescribeEmptyNumberDetectResult : public ServiceResult
			{
			public:
				struct DataList
				{
					std::string status;
					std::string number;
				};


				DescribeEmptyNumberDetectResult();
				explicit DescribeEmptyNumberDetectResult(const std::string &payload);
				~DescribeEmptyNumberDetectResult();
				std::string getMessage()const;
				std::vector<DataList> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataList> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYTNSAPI_MODEL_DESCRIBEEMPTYNUMBERDETECTRESULT_H_