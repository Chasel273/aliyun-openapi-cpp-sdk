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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYBUCKETCACHESRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYBUCKETCACHESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeGatewayBucketCachesResult : public ServiceResult
			{
			public:
				struct BucketCache
				{
					std::string category;
					std::string shareName;
					std::string cacheMode;
					std::string gatewayId;
					std::string mountPoint;
					std::string type;
					std::string bucketName;
					std::string vpcId;
					std::string vpcCidr;
					std::string cacheStats;
					std::string gatewayName;
					std::string regionId;
					std::string protocol;
					std::string location;
				};


				DescribeGatewayBucketCachesResult();
				explicit DescribeGatewayBucketCachesResult(const std::string &payload);
				~DescribeGatewayBucketCachesResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<BucketCache> getBucketCaches()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<BucketCache> bucketCaches_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEGATEWAYBUCKETCACHESRESULT_H_