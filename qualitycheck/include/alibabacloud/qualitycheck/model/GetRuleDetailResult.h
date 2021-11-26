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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_GETRULEDETAILRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_GETRULEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT GetRuleDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ConditionBasicInfo
					{
						struct CheckRange
						{
							struct Anchor
							{
								int hitTime;
								std::string anchorCid;
								std::string location;
							};
							struct Range
							{
								int to;
								int from;
							};
							std::string role;
							Anchor anchor;
							Range range;
							bool absolute;
						};
						struct OperatorBasicInfo
						{
							struct Param
							{
								std::string notRegex;
								std::vector<std::string> operKeyWords;
								std::vector<std::string> similarlySentences;
								bool differentRole;
								std::vector<std::string> excludes;
								std::vector<std::string> antModelInfo;
								int maxEmotionChangeValue;
								int target;
								std::string regex;
								std::string targetRole;
								int hitTime;
								float threshold;
								int velocityInMint;
								std::string beginType;
								float similarity_threshold;
								int minWordSize;
								bool average;
								std::vector<std::string> pvalues;
								int from;
								std::string phrase;
								int delayTime;
								bool keywordExtension;
								std::string compareOperator;
								int score;
								int checkType;
								std::vector<std::string> references;
								bool contextChatMatch;
								bool fromEnd;
								int keywordMatchSize;
								bool inSentence;
								int interval;
							};
							std::string type;
							std::string operName;
							Param param;
							std::string oid;
						};
						std::vector<ConditionBasicInfo::OperatorBasicInfo> operators;
						std::string operLambda;
						std::string conditionInfoCid;
						CheckRange checkRange;
					};
					struct RuleBasicInfo
					{
						struct BusinessCategoryBasicInfo
						{
							std::string businessName;
							int serviceType;
							int bid;
						};
						std::vector<RuleBasicInfo::BusinessCategoryBasicInfo> businessCategories;
						std::string ruleLambda;
						std::vector<std::string> triggers;
						std::string rid;
					};
					int pageSize;
					int pageNumber;
					int count;
					std::vector<RuleBasicInfo> rules;
					std::vector<ConditionBasicInfo> conditions;
				};


				GetRuleDetailResult();
				explicit GetRuleDetailResult(const std::string &payload);
				~GetRuleDetailResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_GETRULEDETAILRESULT_H_