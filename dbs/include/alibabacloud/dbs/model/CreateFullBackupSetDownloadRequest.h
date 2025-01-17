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

#ifndef ALIBABACLOUD_DBS_MODEL_CREATEFULLBACKUPSETDOWNLOADREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CREATEFULLBACKUPSETDOWNLOADREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT CreateFullBackupSetDownloadRequest : public RpcServiceRequest {
public:
	CreateFullBackupSetDownloadRequest();
	~CreateFullBackupSetDownloadRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBackupSetId() const;
	void setBackupSetId(const std::string &backupSetId);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getBackupSetDataFormat() const;
	void setBackupSetDataFormat(const std::string &backupSetDataFormat);

private:
	std::string clientToken_;
	std::string backupSetId_;
	std::string ownerId_;
	std::string backupSetDataFormat_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CREATEFULLBACKUPSETDOWNLOADREQUEST_H_
