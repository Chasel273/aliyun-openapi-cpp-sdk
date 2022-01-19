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

#ifndef ALIBABACLOUD_MSE_MODEL_QUERYBUSINESSLOCATIONSRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_QUERYBUSINESSLOCATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT QueryBusinessLocationsResult : public ServiceResult
			{
			public:
				struct LocationData
				{
					std::string districtShowName;
					std::string description;
					std::string enName;
					std::string districtId;
					std::string showName;
					std::string districtCnName;
					std::string name;
					std::string cnName;
					std::string type;
					std::string districtEnName;
					std::string enDescription;
					int ordering;
					int districtOrdering;
				};


				QueryBusinessLocationsResult();
				explicit QueryBusinessLocationsResult(const std::string &payload);
				~QueryBusinessLocationsResult();
				std::string getMessage()const;
				std::vector<LocationData> getData()const;
				std::string getErrorCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<LocationData> data_;
				std::string errorCode_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_QUERYBUSINESSLOCATIONSRESULT_H_