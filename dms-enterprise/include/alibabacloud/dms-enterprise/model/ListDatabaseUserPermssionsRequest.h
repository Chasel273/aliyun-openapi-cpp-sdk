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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATABASEUSERPERMSSIONSREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATABASEUSERPERMSSIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListDatabaseUserPermssionsRequest : public RpcServiceRequest
			{

			public:
				ListDatabaseUserPermssionsRequest();
				~ListDatabaseUserPermssionsRequest();

				long getTid()const;
				void setTid(long tid);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getPermType()const;
				void setPermType(const std::string& permType);
				std::string getDbId()const;
				void setDbId(const std::string& dbId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				bool getLogic()const;
				void setLogic(bool logic);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				long tid_;
				int pageNumber_;
				std::string permType_;
				std::string dbId_;
				int pageSize_;
				bool logic_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTDATABASEUSERPERMSSIONSREQUEST_H_