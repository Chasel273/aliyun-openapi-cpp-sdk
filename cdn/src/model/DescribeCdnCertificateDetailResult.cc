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

#include <alibabacloud/cdn/model/DescribeCdnCertificateDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnCertificateDetailResult::DescribeCdnCertificateDetailResult() :
	ServiceResult()
{}

DescribeCdnCertificateDetailResult::DescribeCdnCertificateDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnCertificateDetailResult::~DescribeCdnCertificateDetailResult()
{}

void DescribeCdnCertificateDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Cert"].isNull())
		cert_ = value["Cert"].asString();
	if(!value["Key"].isNull())
		key_ = value["Key"].asString();
	if(!value["CertId"].isNull())
		certId_ = std::stol(value["CertId"].asString());
	if(!value["CertName"].isNull())
		certName_ = value["CertName"].asString();

}

long DescribeCdnCertificateDetailResult::getCertId()const
{
	return certId_;
}

std::string DescribeCdnCertificateDetailResult::getCert()const
{
	return cert_;
}

std::string DescribeCdnCertificateDetailResult::getCertName()const
{
	return certName_;
}

std::string DescribeCdnCertificateDetailResult::getKey()const
{
	return key_;
}

