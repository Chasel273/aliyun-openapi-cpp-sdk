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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEDOWNLOADDATAJOBRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEDOWNLOADDATAJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT CreateDownloadDataJobResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct QuerySetting
					{
						struct SelectedHeadersItem
						{
							std::string geoClass;
							std::string dimDateClass;
							std::string alias;
							std::string timeClass;
							std::string fieldName;
							std::string fieldType;
						};
						struct AstExprItem
						{
							std::string expr;
							std::string exprType;
						};
						std::vector<AstExprItem> astExpr;
						std::vector<SelectedHeadersItem> selectedHeaders;
					};
					struct HeaderItem
					{
						std::string geoClass;
						std::string dimDateClass;
						std::string alias;
						std::string typeClass;
						std::string timeClass;
						std::string dataPrecision;
						std::string fieldName;
						std::string fieldType;
					};
					int status;
					bool asyncExecute;
					long endTime;
					int pageSize;
					std::string csvUrl;
					long beginTime;
					std::string csvFileName;
					std::string datasetId;
					long totalCount;
					std::vector<HeaderItem> header;
					std::string longJobId;
					std::string resultDataInString;
					int pageNo;
					QuerySetting querySetting;
					int previewSize;
				};


				CreateDownloadDataJobResult();
				explicit CreateDownloadDataJobResult(const std::string &payload);
				~CreateDownloadDataJobResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEDOWNLOADDATAJOBRESULT_H_