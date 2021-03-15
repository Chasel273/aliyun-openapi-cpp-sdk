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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeAlertingMetricRuleResourcesRequest : public RpcServiceRequest
			{

			public:
				DescribeAlertingMetricRuleResourcesRequest();
				~DescribeAlertingMetricRuleResourcesRequest();

				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				int getPage()const;
				void setPage(int page);
				std::string getRuleId()const;
				void setRuleId(const std::string& ruleId);

            private:
				std::string groupId_;
				int pageSize_;
				std::string _namespace_;
				int page_;
				std::string ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESREQUEST_H_