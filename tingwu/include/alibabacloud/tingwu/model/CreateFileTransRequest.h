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

#ifndef ALIBABACLOUD_TINGWU_MODEL_CREATEFILETRANSREQUEST_H_
#define ALIBABACLOUD_TINGWU_MODEL_CREATEFILETRANSREQUEST_H_

#include <alibabacloud/tingwu/TingwuExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Tingwu {
namespace Model {
class ALIBABACLOUD_TINGWU_EXPORT CreateFileTransRequest : public RoaServiceRequest {
public:
	CreateFileTransRequest();
	~CreateFileTransRequest();
	std::string getBody() const;
	void setBody(const std::string &body);

private:
	std::string body_;
};
} // namespace Model
} // namespace Tingwu
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TINGWU_MODEL_CREATEFILETRANSREQUEST_H_
