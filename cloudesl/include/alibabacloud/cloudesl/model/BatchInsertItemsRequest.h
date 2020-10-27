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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT BatchInsertItemsRequest : public RpcServiceRequest
			{
			public:
				struct ItemInfo
				{
					int memberPrice;
					int actionPrice;
					std::string productionPlace;
					bool beSourceCode;
					std::string storeId;
					std::string brandName;
					std::string promotionStart;
					std::string sourceCode;
					long itemId;
					std::string extraAttribute;
					std::string companyId;
					std::string priceUnit;
					std::string rank;
					std::string itemBarCode;
					bool bePromotion;
					std::string promotionEnd;
					std::string itemTitle;
					int originalPrice;
					std::string itemShortTitle;
					std::string customizeFeatureC;
					std::string itemQrCode;
					std::string customizeFeatureD;
					std::string promotionReason;
					std::string customizeFeatureE;
					std::string customizeFeatureF;
					std::string forestSecondId;
					std::string customizeFeatureG;
					std::string customizeFeatureH;
					std::string customizeFeatureI;
					std::string customizeFeatureJ;
					std::string optionGroups;
					std::string modelNumber;
					std::string saleSpec;
					std::string customizeFeatureA;
					std::string customizeFeatureB;
					int suggestPrice;
					std::string forestFirstId;
					std::string categoryName;
					std::string energyEfficiency;
					std::string skuId;
					std::string promotionText;
				};

			public:
				BatchInsertItemsRequest();
				~BatchInsertItemsRequest();

				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::vector<ItemInfo> getItemInfo()const;
				void setItemInfo(const std::vector<ItemInfo>& itemInfo);

            private:
				std::string storeId_;
				std::vector<ItemInfo> itemInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_