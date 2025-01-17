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

#ifndef ALIBABACLOUD_DBFS_DBFSCLIENT_H_
#define ALIBABACLOUD_DBFS_DBFSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DBFSExport.h"
#include "model/AddTagsBatchRequest.h"
#include "model/AddTagsBatchResult.h"
#include "model/AttachDbfsRequest.h"
#include "model/AttachDbfsResult.h"
#include "model/CreateDbfsRequest.h"
#include "model/CreateDbfsResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DeleteDbfsRequest.h"
#include "model/DeleteDbfsResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteTagsBatchRequest.h"
#include "model/DeleteTagsBatchResult.h"
#include "model/DescribeDbfsSpecificationsRequest.h"
#include "model/DescribeDbfsSpecificationsResult.h"
#include "model/DescribeInstanceTypesRequest.h"
#include "model/DescribeInstanceTypesResult.h"
#include "model/DetachDbfsRequest.h"
#include "model/DetachDbfsResult.h"
#include "model/GetDbfsRequest.h"
#include "model/GetDbfsResult.h"
#include "model/GetServiceLinkedRoleRequest.h"
#include "model/GetServiceLinkedRoleResult.h"
#include "model/ListDbfsRequest.h"
#include "model/ListDbfsResult.h"
#include "model/ListDbfsAttachableEcsInstancesRequest.h"
#include "model/ListDbfsAttachableEcsInstancesResult.h"
#include "model/ListDbfsAttachedEcsInstancesRequest.h"
#include "model/ListDbfsAttachedEcsInstancesResult.h"
#include "model/ListSnapshotRequest.h"
#include "model/ListSnapshotResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/RenameDbfsRequest.h"
#include "model/RenameDbfsResult.h"
#include "model/ResizeDbfsRequest.h"
#include "model/ResizeDbfsResult.h"
#include "model/TagDbfsRequest.h"
#include "model/TagDbfsResult.h"
#include "model/UpdateDbfsRequest.h"
#include "model/UpdateDbfsResult.h"


namespace AlibabaCloud
{
	namespace DBFS
	{
		class ALIBABACLOUD_DBFS_EXPORT DBFSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddTagsBatchResult> AddTagsBatchOutcome;
			typedef std::future<AddTagsBatchOutcome> AddTagsBatchOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::AddTagsBatchRequest&, const AddTagsBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsBatchAsyncHandler;
			typedef Outcome<Error, Model::AttachDbfsResult> AttachDbfsOutcome;
			typedef std::future<AttachDbfsOutcome> AttachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::AttachDbfsRequest&, const AttachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDbfsAsyncHandler;
			typedef Outcome<Error, Model::CreateDbfsResult> CreateDbfsOutcome;
			typedef std::future<CreateDbfsOutcome> CreateDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateDbfsRequest&, const CreateDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDbfsAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteDbfsResult> DeleteDbfsOutcome;
			typedef std::future<DeleteDbfsOutcome> DeleteDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteDbfsRequest&, const DeleteDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDbfsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagsBatchResult> DeleteTagsBatchOutcome;
			typedef std::future<DeleteTagsBatchOutcome> DeleteTagsBatchOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteTagsBatchRequest&, const DeleteTagsBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsBatchAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbfsSpecificationsResult> DescribeDbfsSpecificationsOutcome;
			typedef std::future<DescribeDbfsSpecificationsOutcome> DescribeDbfsSpecificationsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DescribeDbfsSpecificationsRequest&, const DescribeDbfsSpecificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbfsSpecificationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypesResult> DescribeInstanceTypesOutcome;
			typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DescribeInstanceTypesRequest&, const DescribeInstanceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
			typedef Outcome<Error, Model::DetachDbfsResult> DetachDbfsOutcome;
			typedef std::future<DetachDbfsOutcome> DetachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DetachDbfsRequest&, const DetachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDbfsAsyncHandler;
			typedef Outcome<Error, Model::GetDbfsResult> GetDbfsOutcome;
			typedef std::future<GetDbfsOutcome> GetDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetDbfsRequest&, const GetDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDbfsAsyncHandler;
			typedef Outcome<Error, Model::GetServiceLinkedRoleResult> GetServiceLinkedRoleOutcome;
			typedef std::future<GetServiceLinkedRoleOutcome> GetServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetServiceLinkedRoleRequest&, const GetServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::ListDbfsResult> ListDbfsOutcome;
			typedef std::future<ListDbfsOutcome> ListDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListDbfsRequest&, const ListDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDbfsAsyncHandler;
			typedef Outcome<Error, Model::ListDbfsAttachableEcsInstancesResult> ListDbfsAttachableEcsInstancesOutcome;
			typedef std::future<ListDbfsAttachableEcsInstancesOutcome> ListDbfsAttachableEcsInstancesOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListDbfsAttachableEcsInstancesRequest&, const ListDbfsAttachableEcsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDbfsAttachableEcsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListDbfsAttachedEcsInstancesResult> ListDbfsAttachedEcsInstancesOutcome;
			typedef std::future<ListDbfsAttachedEcsInstancesOutcome> ListDbfsAttachedEcsInstancesOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListDbfsAttachedEcsInstancesRequest&, const ListDbfsAttachedEcsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDbfsAttachedEcsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotResult> ListSnapshotOutcome;
			typedef std::future<ListSnapshotOutcome> ListSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListSnapshotRequest&, const ListSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::RenameDbfsResult> RenameDbfsOutcome;
			typedef std::future<RenameDbfsOutcome> RenameDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::RenameDbfsRequest&, const RenameDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenameDbfsAsyncHandler;
			typedef Outcome<Error, Model::ResizeDbfsResult> ResizeDbfsOutcome;
			typedef std::future<ResizeDbfsOutcome> ResizeDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ResizeDbfsRequest&, const ResizeDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDbfsAsyncHandler;
			typedef Outcome<Error, Model::TagDbfsResult> TagDbfsOutcome;
			typedef std::future<TagDbfsOutcome> TagDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::TagDbfsRequest&, const TagDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagDbfsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDbfsResult> UpdateDbfsOutcome;
			typedef std::future<UpdateDbfsOutcome> UpdateDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::UpdateDbfsRequest&, const UpdateDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDbfsAsyncHandler;

			DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DBFSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DBFSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DBFSClient();
			AddTagsBatchOutcome addTagsBatch(const Model::AddTagsBatchRequest &request)const;
			void addTagsBatchAsync(const Model::AddTagsBatchRequest& request, const AddTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsBatchOutcomeCallable addTagsBatchCallable(const Model::AddTagsBatchRequest& request) const;
			AttachDbfsOutcome attachDbfs(const Model::AttachDbfsRequest &request)const;
			void attachDbfsAsync(const Model::AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDbfsOutcomeCallable attachDbfsCallable(const Model::AttachDbfsRequest& request) const;
			CreateDbfsOutcome createDbfs(const Model::CreateDbfsRequest &request)const;
			void createDbfsAsync(const Model::CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDbfsOutcomeCallable createDbfsCallable(const Model::CreateDbfsRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DeleteDbfsOutcome deleteDbfs(const Model::DeleteDbfsRequest &request)const;
			void deleteDbfsAsync(const Model::DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDbfsOutcomeCallable deleteDbfsCallable(const Model::DeleteDbfsRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteTagsBatchOutcome deleteTagsBatch(const Model::DeleteTagsBatchRequest &request)const;
			void deleteTagsBatchAsync(const Model::DeleteTagsBatchRequest& request, const DeleteTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagsBatchOutcomeCallable deleteTagsBatchCallable(const Model::DeleteTagsBatchRequest& request) const;
			DescribeDbfsSpecificationsOutcome describeDbfsSpecifications(const Model::DescribeDbfsSpecificationsRequest &request)const;
			void describeDbfsSpecificationsAsync(const Model::DescribeDbfsSpecificationsRequest& request, const DescribeDbfsSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbfsSpecificationsOutcomeCallable describeDbfsSpecificationsCallable(const Model::DescribeDbfsSpecificationsRequest& request) const;
			DescribeInstanceTypesOutcome describeInstanceTypes(const Model::DescribeInstanceTypesRequest &request)const;
			void describeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypesOutcomeCallable describeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request) const;
			DetachDbfsOutcome detachDbfs(const Model::DetachDbfsRequest &request)const;
			void detachDbfsAsync(const Model::DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDbfsOutcomeCallable detachDbfsCallable(const Model::DetachDbfsRequest& request) const;
			GetDbfsOutcome getDbfs(const Model::GetDbfsRequest &request)const;
			void getDbfsAsync(const Model::GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDbfsOutcomeCallable getDbfsCallable(const Model::GetDbfsRequest& request) const;
			GetServiceLinkedRoleOutcome getServiceLinkedRole(const Model::GetServiceLinkedRoleRequest &request)const;
			void getServiceLinkedRoleAsync(const Model::GetServiceLinkedRoleRequest& request, const GetServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceLinkedRoleOutcomeCallable getServiceLinkedRoleCallable(const Model::GetServiceLinkedRoleRequest& request) const;
			ListDbfsOutcome listDbfs(const Model::ListDbfsRequest &request)const;
			void listDbfsAsync(const Model::ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDbfsOutcomeCallable listDbfsCallable(const Model::ListDbfsRequest& request) const;
			ListDbfsAttachableEcsInstancesOutcome listDbfsAttachableEcsInstances(const Model::ListDbfsAttachableEcsInstancesRequest &request)const;
			void listDbfsAttachableEcsInstancesAsync(const Model::ListDbfsAttachableEcsInstancesRequest& request, const ListDbfsAttachableEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDbfsAttachableEcsInstancesOutcomeCallable listDbfsAttachableEcsInstancesCallable(const Model::ListDbfsAttachableEcsInstancesRequest& request) const;
			ListDbfsAttachedEcsInstancesOutcome listDbfsAttachedEcsInstances(const Model::ListDbfsAttachedEcsInstancesRequest &request)const;
			void listDbfsAttachedEcsInstancesAsync(const Model::ListDbfsAttachedEcsInstancesRequest& request, const ListDbfsAttachedEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDbfsAttachedEcsInstancesOutcomeCallable listDbfsAttachedEcsInstancesCallable(const Model::ListDbfsAttachedEcsInstancesRequest& request) const;
			ListSnapshotOutcome listSnapshot(const Model::ListSnapshotRequest &request)const;
			void listSnapshotAsync(const Model::ListSnapshotRequest& request, const ListSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotOutcomeCallable listSnapshotCallable(const Model::ListSnapshotRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			RenameDbfsOutcome renameDbfs(const Model::RenameDbfsRequest &request)const;
			void renameDbfsAsync(const Model::RenameDbfsRequest& request, const RenameDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenameDbfsOutcomeCallable renameDbfsCallable(const Model::RenameDbfsRequest& request) const;
			ResizeDbfsOutcome resizeDbfs(const Model::ResizeDbfsRequest &request)const;
			void resizeDbfsAsync(const Model::ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDbfsOutcomeCallable resizeDbfsCallable(const Model::ResizeDbfsRequest& request) const;
			TagDbfsOutcome tagDbfs(const Model::TagDbfsRequest &request)const;
			void tagDbfsAsync(const Model::TagDbfsRequest& request, const TagDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagDbfsOutcomeCallable tagDbfsCallable(const Model::TagDbfsRequest& request) const;
			UpdateDbfsOutcome updateDbfs(const Model::UpdateDbfsRequest &request)const;
			void updateDbfsAsync(const Model::UpdateDbfsRequest& request, const UpdateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDbfsOutcomeCallable updateDbfsCallable(const Model::UpdateDbfsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DBFS_DBFSCLIENT_H_
