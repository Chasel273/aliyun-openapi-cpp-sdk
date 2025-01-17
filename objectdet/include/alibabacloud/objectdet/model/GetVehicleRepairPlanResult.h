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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_GETVEHICLEREPAIRPLANRESULT_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_GETVEHICLEREPAIRPLANRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/objectdet/ObjectdetExport.h>

namespace AlibabaCloud
{
	namespace Objectdet
	{
		namespace Model
		{
			class ALIBABACLOUD_OBJECTDET_EXPORT GetVehicleRepairPlanResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RepairItems
					{
						bool partNameMatch;
						std::string partsStdCode;
						std::string outStandardPartsName;
						std::string repairType;
						std::string relationType;
						std::string repairFee;
						std::string partsStdName;
						std::string garageType;
						std::string outStandardPartsId;
						std::string repairTypeName;
						bool oeMatch;
					};
					std::string frameNo;
					std::vector<RepairItems> repairParts;
				};


				GetVehicleRepairPlanResult();
				explicit GetVehicleRepairPlanResult(const std::string &payload);
				~GetVehicleRepairPlanResult();
				int getHttpCode()const;
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpCode_;
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_GETVEHICLEREPAIRPLANRESULT_H_