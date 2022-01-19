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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSLBRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSLBRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT ListGatewaySlbResult : public ServiceResult
			{
			public:
				struct Sources
				{
					std::string slbId;
					std::string slbPort;
					std::string statusDesc;
					std::string type;
					std::string gmtCreate;
					std::string gatewaySlbMode;
					std::string slbIp;
					std::string gatewaySlbStatus;
					std::string id;
					std::string gatewayId;
				};


				ListGatewaySlbResult();
				explicit ListGatewaySlbResult(const std::string &payload);
				~ListGatewaySlbResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<Sources> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<Sources> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTGATEWAYSLBRESULT_H_