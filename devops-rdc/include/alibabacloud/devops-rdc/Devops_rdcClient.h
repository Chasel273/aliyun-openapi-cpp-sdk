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

#ifndef ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_
#define ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Devops_rdcExport.h"
#include "model/BatchInsertMembersRequest.h"
#include "model/BatchInsertMembersResult.h"
#include "model/CancelPipelineRequest.h"
#include "model/CancelPipelineResult.h"
#include "model/CheckAliyunAccountExistsRequest.h"
#include "model/CheckAliyunAccountExistsResult.h"
#include "model/CreateCredentialRequest.h"
#include "model/CreateCredentialResult.h"
#include "model/CreateDevopsOrganizationRequest.h"
#include "model/CreateDevopsOrganizationResult.h"
#include "model/CreateDevopsProjectRequest.h"
#include "model/CreateDevopsProjectResult.h"
#include "model/CreateDevopsProjectSprintRequest.h"
#include "model/CreateDevopsProjectSprintResult.h"
#include "model/CreateDevopsProjectTaskRequest.h"
#include "model/CreateDevopsProjectTaskResult.h"
#include "model/CreatePipelineRequest.h"
#include "model/CreatePipelineResult.h"
#include "model/CreateServiceConnectionRequest.h"
#include "model/CreateServiceConnectionResult.h"
#include "model/DeleteDevopsOrganizationMembersRequest.h"
#include "model/DeleteDevopsOrganizationMembersResult.h"
#include "model/DeleteDevopsProjectRequest.h"
#include "model/DeleteDevopsProjectResult.h"
#include "model/DeleteDevopsProjectMembersRequest.h"
#include "model/DeleteDevopsProjectMembersResult.h"
#include "model/DeleteDevopsProjectSprintRequest.h"
#include "model/DeleteDevopsProjectSprintResult.h"
#include "model/DeleteDevopsProjectTaskRequest.h"
#include "model/DeleteDevopsProjectTaskResult.h"
#include "model/ExecutePipelineRequest.h"
#include "model/ExecutePipelineResult.h"
#include "model/GetDevopsOrganizationMembersRequest.h"
#include "model/GetDevopsOrganizationMembersResult.h"
#include "model/GetDevopsProjectInfoRequest.h"
#include "model/GetDevopsProjectInfoResult.h"
#include "model/GetDevopsProjectMembersRequest.h"
#include "model/GetDevopsProjectMembersResult.h"
#include "model/GetDevopsProjectSprintInfoRequest.h"
#include "model/GetDevopsProjectSprintInfoResult.h"
#include "model/GetDevopsProjectTaskInfoRequest.h"
#include "model/GetDevopsProjectTaskInfoResult.h"
#include "model/GetPipelineInstanceBuildNumberStatusRequest.h"
#include "model/GetPipelineInstanceBuildNumberStatusResult.h"
#include "model/GetPipelineInstanceGroupStatusRequest.h"
#include "model/GetPipelineInstanceGroupStatusResult.h"
#include "model/GetPipelineInstanceInfoRequest.h"
#include "model/GetPipelineInstanceInfoResult.h"
#include "model/GetPipelineInstanceStatusRequest.h"
#include "model/GetPipelineInstanceStatusResult.h"
#include "model/GetPipelineLogRequest.h"
#include "model/GetPipelineLogResult.h"
#include "model/GetPipleineLatestInstanceStatusRequest.h"
#include "model/GetPipleineLatestInstanceStatusResult.h"
#include "model/GetUserByAliyunUidRequest.h"
#include "model/GetUserByAliyunUidResult.h"
#include "model/InsertDevopsUserRequest.h"
#include "model/InsertDevopsUserResult.h"
#include "model/InsertProjectMembersRequest.h"
#include "model/InsertProjectMembersResult.h"
#include "model/ListCredentialsRequest.h"
#include "model/ListCredentialsResult.h"
#include "model/ListDevopsProjectSprintsRequest.h"
#include "model/ListDevopsProjectSprintsResult.h"
#include "model/ListDevopsProjectTaskFlowRequest.h"
#include "model/ListDevopsProjectTaskFlowResult.h"
#include "model/ListDevopsProjectTaskFlowStatusRequest.h"
#include "model/ListDevopsProjectTaskFlowStatusResult.h"
#include "model/ListDevopsProjectTasksRequest.h"
#include "model/ListDevopsProjectTasksResult.h"
#include "model/ListDevopsScenarioFieldConfigRequest.h"
#include "model/ListDevopsScenarioFieldConfigResult.h"
#include "model/ListPipelinesRequest.h"
#include "model/ListPipelinesResult.h"
#include "model/ListServiceConnectionsRequest.h"
#include "model/ListServiceConnectionsResult.h"
#include "model/UpdateDevopsProjectRequest.h"
#include "model/UpdateDevopsProjectResult.h"
#include "model/UpdateDevopsProjectSprintRequest.h"
#include "model/UpdateDevopsProjectSprintResult.h"
#include "model/UpdateDevopsProjectTaskRequest.h"
#include "model/UpdateDevopsProjectTaskResult.h"


namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		class ALIBABACLOUD_DEVOPS_RDC_EXPORT Devops_rdcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchInsertMembersResult> BatchInsertMembersOutcome;
			typedef std::future<BatchInsertMembersOutcome> BatchInsertMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::BatchInsertMembersRequest&, const BatchInsertMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchInsertMembersAsyncHandler;
			typedef Outcome<Error, Model::CancelPipelineResult> CancelPipelineOutcome;
			typedef std::future<CancelPipelineOutcome> CancelPipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CancelPipelineRequest&, const CancelPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPipelineAsyncHandler;
			typedef Outcome<Error, Model::CheckAliyunAccountExistsResult> CheckAliyunAccountExistsOutcome;
			typedef std::future<CheckAliyunAccountExistsOutcome> CheckAliyunAccountExistsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CheckAliyunAccountExistsRequest&, const CheckAliyunAccountExistsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAliyunAccountExistsAsyncHandler;
			typedef Outcome<Error, Model::CreateCredentialResult> CreateCredentialOutcome;
			typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateCredentialRequest&, const CreateCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
			typedef Outcome<Error, Model::CreateDevopsOrganizationResult> CreateDevopsOrganizationOutcome;
			typedef std::future<CreateDevopsOrganizationOutcome> CreateDevopsOrganizationOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateDevopsOrganizationRequest&, const CreateDevopsOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevopsOrganizationAsyncHandler;
			typedef Outcome<Error, Model::CreateDevopsProjectResult> CreateDevopsProjectOutcome;
			typedef std::future<CreateDevopsProjectOutcome> CreateDevopsProjectOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateDevopsProjectRequest&, const CreateDevopsProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevopsProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateDevopsProjectSprintResult> CreateDevopsProjectSprintOutcome;
			typedef std::future<CreateDevopsProjectSprintOutcome> CreateDevopsProjectSprintOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateDevopsProjectSprintRequest&, const CreateDevopsProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevopsProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::CreateDevopsProjectTaskResult> CreateDevopsProjectTaskOutcome;
			typedef std::future<CreateDevopsProjectTaskOutcome> CreateDevopsProjectTaskOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateDevopsProjectTaskRequest&, const CreateDevopsProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevopsProjectTaskAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelineResult> CreatePipelineOutcome;
			typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreatePipelineRequest&, const CreatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelineAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceConnectionResult> CreateServiceConnectionOutcome;
			typedef std::future<CreateServiceConnectionOutcome> CreateServiceConnectionOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateServiceConnectionRequest&, const CreateServiceConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevopsOrganizationMembersResult> DeleteDevopsOrganizationMembersOutcome;
			typedef std::future<DeleteDevopsOrganizationMembersOutcome> DeleteDevopsOrganizationMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::DeleteDevopsOrganizationMembersRequest&, const DeleteDevopsOrganizationMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevopsOrganizationMembersAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevopsProjectResult> DeleteDevopsProjectOutcome;
			typedef std::future<DeleteDevopsProjectOutcome> DeleteDevopsProjectOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::DeleteDevopsProjectRequest&, const DeleteDevopsProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevopsProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevopsProjectMembersResult> DeleteDevopsProjectMembersOutcome;
			typedef std::future<DeleteDevopsProjectMembersOutcome> DeleteDevopsProjectMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::DeleteDevopsProjectMembersRequest&, const DeleteDevopsProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevopsProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevopsProjectSprintResult> DeleteDevopsProjectSprintOutcome;
			typedef std::future<DeleteDevopsProjectSprintOutcome> DeleteDevopsProjectSprintOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::DeleteDevopsProjectSprintRequest&, const DeleteDevopsProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevopsProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevopsProjectTaskResult> DeleteDevopsProjectTaskOutcome;
			typedef std::future<DeleteDevopsProjectTaskOutcome> DeleteDevopsProjectTaskOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::DeleteDevopsProjectTaskRequest&, const DeleteDevopsProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevopsProjectTaskAsyncHandler;
			typedef Outcome<Error, Model::ExecutePipelineResult> ExecutePipelineOutcome;
			typedef std::future<ExecutePipelineOutcome> ExecutePipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ExecutePipelineRequest&, const ExecutePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecutePipelineAsyncHandler;
			typedef Outcome<Error, Model::GetDevopsOrganizationMembersResult> GetDevopsOrganizationMembersOutcome;
			typedef std::future<GetDevopsOrganizationMembersOutcome> GetDevopsOrganizationMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetDevopsOrganizationMembersRequest&, const GetDevopsOrganizationMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDevopsOrganizationMembersAsyncHandler;
			typedef Outcome<Error, Model::GetDevopsProjectInfoResult> GetDevopsProjectInfoOutcome;
			typedef std::future<GetDevopsProjectInfoOutcome> GetDevopsProjectInfoOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetDevopsProjectInfoRequest&, const GetDevopsProjectInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDevopsProjectInfoAsyncHandler;
			typedef Outcome<Error, Model::GetDevopsProjectMembersResult> GetDevopsProjectMembersOutcome;
			typedef std::future<GetDevopsProjectMembersOutcome> GetDevopsProjectMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetDevopsProjectMembersRequest&, const GetDevopsProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDevopsProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::GetDevopsProjectSprintInfoResult> GetDevopsProjectSprintInfoOutcome;
			typedef std::future<GetDevopsProjectSprintInfoOutcome> GetDevopsProjectSprintInfoOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetDevopsProjectSprintInfoRequest&, const GetDevopsProjectSprintInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDevopsProjectSprintInfoAsyncHandler;
			typedef Outcome<Error, Model::GetDevopsProjectTaskInfoResult> GetDevopsProjectTaskInfoOutcome;
			typedef std::future<GetDevopsProjectTaskInfoOutcome> GetDevopsProjectTaskInfoOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetDevopsProjectTaskInfoRequest&, const GetDevopsProjectTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDevopsProjectTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceBuildNumberStatusResult> GetPipelineInstanceBuildNumberStatusOutcome;
			typedef std::future<GetPipelineInstanceBuildNumberStatusOutcome> GetPipelineInstanceBuildNumberStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceBuildNumberStatusRequest&, const GetPipelineInstanceBuildNumberStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceBuildNumberStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceGroupStatusResult> GetPipelineInstanceGroupStatusOutcome;
			typedef std::future<GetPipelineInstanceGroupStatusOutcome> GetPipelineInstanceGroupStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceGroupStatusRequest&, const GetPipelineInstanceGroupStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceGroupStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceInfoResult> GetPipelineInstanceInfoOutcome;
			typedef std::future<GetPipelineInstanceInfoOutcome> GetPipelineInstanceInfoOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceInfoRequest&, const GetPipelineInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceStatusResult> GetPipelineInstanceStatusOutcome;
			typedef std::future<GetPipelineInstanceStatusOutcome> GetPipelineInstanceStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceStatusRequest&, const GetPipelineInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineLogResult> GetPipelineLogOutcome;
			typedef std::future<GetPipelineLogOutcome> GetPipelineLogOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineLogRequest&, const GetPipelineLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineLogAsyncHandler;
			typedef Outcome<Error, Model::GetPipleineLatestInstanceStatusResult> GetPipleineLatestInstanceStatusOutcome;
			typedef std::future<GetPipleineLatestInstanceStatusOutcome> GetPipleineLatestInstanceStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipleineLatestInstanceStatusRequest&, const GetPipleineLatestInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipleineLatestInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetUserByAliyunUidResult> GetUserByAliyunUidOutcome;
			typedef std::future<GetUserByAliyunUidOutcome> GetUserByAliyunUidOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetUserByAliyunUidRequest&, const GetUserByAliyunUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserByAliyunUidAsyncHandler;
			typedef Outcome<Error, Model::InsertDevopsUserResult> InsertDevopsUserOutcome;
			typedef std::future<InsertDevopsUserOutcome> InsertDevopsUserOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::InsertDevopsUserRequest&, const InsertDevopsUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertDevopsUserAsyncHandler;
			typedef Outcome<Error, Model::InsertProjectMembersResult> InsertProjectMembersOutcome;
			typedef std::future<InsertProjectMembersOutcome> InsertProjectMembersOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::InsertProjectMembersRequest&, const InsertProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::ListCredentialsResult> ListCredentialsOutcome;
			typedef std::future<ListCredentialsOutcome> ListCredentialsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListCredentialsRequest&, const ListCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCredentialsAsyncHandler;
			typedef Outcome<Error, Model::ListDevopsProjectSprintsResult> ListDevopsProjectSprintsOutcome;
			typedef std::future<ListDevopsProjectSprintsOutcome> ListDevopsProjectSprintsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListDevopsProjectSprintsRequest&, const ListDevopsProjectSprintsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevopsProjectSprintsAsyncHandler;
			typedef Outcome<Error, Model::ListDevopsProjectTaskFlowResult> ListDevopsProjectTaskFlowOutcome;
			typedef std::future<ListDevopsProjectTaskFlowOutcome> ListDevopsProjectTaskFlowOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListDevopsProjectTaskFlowRequest&, const ListDevopsProjectTaskFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevopsProjectTaskFlowAsyncHandler;
			typedef Outcome<Error, Model::ListDevopsProjectTaskFlowStatusResult> ListDevopsProjectTaskFlowStatusOutcome;
			typedef std::future<ListDevopsProjectTaskFlowStatusOutcome> ListDevopsProjectTaskFlowStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListDevopsProjectTaskFlowStatusRequest&, const ListDevopsProjectTaskFlowStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevopsProjectTaskFlowStatusAsyncHandler;
			typedef Outcome<Error, Model::ListDevopsProjectTasksResult> ListDevopsProjectTasksOutcome;
			typedef std::future<ListDevopsProjectTasksOutcome> ListDevopsProjectTasksOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListDevopsProjectTasksRequest&, const ListDevopsProjectTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevopsProjectTasksAsyncHandler;
			typedef Outcome<Error, Model::ListDevopsScenarioFieldConfigResult> ListDevopsScenarioFieldConfigOutcome;
			typedef std::future<ListDevopsScenarioFieldConfigOutcome> ListDevopsScenarioFieldConfigOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListDevopsScenarioFieldConfigRequest&, const ListDevopsScenarioFieldConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevopsScenarioFieldConfigAsyncHandler;
			typedef Outcome<Error, Model::ListPipelinesResult> ListPipelinesOutcome;
			typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListPipelinesRequest&, const ListPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceConnectionsResult> ListServiceConnectionsOutcome;
			typedef std::future<ListServiceConnectionsOutcome> ListServiceConnectionsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListServiceConnectionsRequest&, const ListServiceConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceConnectionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDevopsProjectResult> UpdateDevopsProjectOutcome;
			typedef std::future<UpdateDevopsProjectOutcome> UpdateDevopsProjectOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::UpdateDevopsProjectRequest&, const UpdateDevopsProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevopsProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateDevopsProjectSprintResult> UpdateDevopsProjectSprintOutcome;
			typedef std::future<UpdateDevopsProjectSprintOutcome> UpdateDevopsProjectSprintOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::UpdateDevopsProjectSprintRequest&, const UpdateDevopsProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevopsProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::UpdateDevopsProjectTaskResult> UpdateDevopsProjectTaskOutcome;
			typedef std::future<UpdateDevopsProjectTaskOutcome> UpdateDevopsProjectTaskOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::UpdateDevopsProjectTaskRequest&, const UpdateDevopsProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevopsProjectTaskAsyncHandler;

			Devops_rdcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Devops_rdcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Devops_rdcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Devops_rdcClient();
			BatchInsertMembersOutcome batchInsertMembers(const Model::BatchInsertMembersRequest &request)const;
			void batchInsertMembersAsync(const Model::BatchInsertMembersRequest& request, const BatchInsertMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchInsertMembersOutcomeCallable batchInsertMembersCallable(const Model::BatchInsertMembersRequest& request) const;
			CancelPipelineOutcome cancelPipeline(const Model::CancelPipelineRequest &request)const;
			void cancelPipelineAsync(const Model::CancelPipelineRequest& request, const CancelPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPipelineOutcomeCallable cancelPipelineCallable(const Model::CancelPipelineRequest& request) const;
			CheckAliyunAccountExistsOutcome checkAliyunAccountExists(const Model::CheckAliyunAccountExistsRequest &request)const;
			void checkAliyunAccountExistsAsync(const Model::CheckAliyunAccountExistsRequest& request, const CheckAliyunAccountExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAliyunAccountExistsOutcomeCallable checkAliyunAccountExistsCallable(const Model::CheckAliyunAccountExistsRequest& request) const;
			CreateCredentialOutcome createCredential(const Model::CreateCredentialRequest &request)const;
			void createCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCredentialOutcomeCallable createCredentialCallable(const Model::CreateCredentialRequest& request) const;
			CreateDevopsOrganizationOutcome createDevopsOrganization(const Model::CreateDevopsOrganizationRequest &request)const;
			void createDevopsOrganizationAsync(const Model::CreateDevopsOrganizationRequest& request, const CreateDevopsOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDevopsOrganizationOutcomeCallable createDevopsOrganizationCallable(const Model::CreateDevopsOrganizationRequest& request) const;
			CreateDevopsProjectOutcome createDevopsProject(const Model::CreateDevopsProjectRequest &request)const;
			void createDevopsProjectAsync(const Model::CreateDevopsProjectRequest& request, const CreateDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDevopsProjectOutcomeCallable createDevopsProjectCallable(const Model::CreateDevopsProjectRequest& request) const;
			CreateDevopsProjectSprintOutcome createDevopsProjectSprint(const Model::CreateDevopsProjectSprintRequest &request)const;
			void createDevopsProjectSprintAsync(const Model::CreateDevopsProjectSprintRequest& request, const CreateDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDevopsProjectSprintOutcomeCallable createDevopsProjectSprintCallable(const Model::CreateDevopsProjectSprintRequest& request) const;
			CreateDevopsProjectTaskOutcome createDevopsProjectTask(const Model::CreateDevopsProjectTaskRequest &request)const;
			void createDevopsProjectTaskAsync(const Model::CreateDevopsProjectTaskRequest& request, const CreateDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDevopsProjectTaskOutcomeCallable createDevopsProjectTaskCallable(const Model::CreateDevopsProjectTaskRequest& request) const;
			CreatePipelineOutcome createPipeline(const Model::CreatePipelineRequest &request)const;
			void createPipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelineOutcomeCallable createPipelineCallable(const Model::CreatePipelineRequest& request) const;
			CreateServiceConnectionOutcome createServiceConnection(const Model::CreateServiceConnectionRequest &request)const;
			void createServiceConnectionAsync(const Model::CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceConnectionOutcomeCallable createServiceConnectionCallable(const Model::CreateServiceConnectionRequest& request) const;
			DeleteDevopsOrganizationMembersOutcome deleteDevopsOrganizationMembers(const Model::DeleteDevopsOrganizationMembersRequest &request)const;
			void deleteDevopsOrganizationMembersAsync(const Model::DeleteDevopsOrganizationMembersRequest& request, const DeleteDevopsOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevopsOrganizationMembersOutcomeCallable deleteDevopsOrganizationMembersCallable(const Model::DeleteDevopsOrganizationMembersRequest& request) const;
			DeleteDevopsProjectOutcome deleteDevopsProject(const Model::DeleteDevopsProjectRequest &request)const;
			void deleteDevopsProjectAsync(const Model::DeleteDevopsProjectRequest& request, const DeleteDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevopsProjectOutcomeCallable deleteDevopsProjectCallable(const Model::DeleteDevopsProjectRequest& request) const;
			DeleteDevopsProjectMembersOutcome deleteDevopsProjectMembers(const Model::DeleteDevopsProjectMembersRequest &request)const;
			void deleteDevopsProjectMembersAsync(const Model::DeleteDevopsProjectMembersRequest& request, const DeleteDevopsProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevopsProjectMembersOutcomeCallable deleteDevopsProjectMembersCallable(const Model::DeleteDevopsProjectMembersRequest& request) const;
			DeleteDevopsProjectSprintOutcome deleteDevopsProjectSprint(const Model::DeleteDevopsProjectSprintRequest &request)const;
			void deleteDevopsProjectSprintAsync(const Model::DeleteDevopsProjectSprintRequest& request, const DeleteDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevopsProjectSprintOutcomeCallable deleteDevopsProjectSprintCallable(const Model::DeleteDevopsProjectSprintRequest& request) const;
			DeleteDevopsProjectTaskOutcome deleteDevopsProjectTask(const Model::DeleteDevopsProjectTaskRequest &request)const;
			void deleteDevopsProjectTaskAsync(const Model::DeleteDevopsProjectTaskRequest& request, const DeleteDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevopsProjectTaskOutcomeCallable deleteDevopsProjectTaskCallable(const Model::DeleteDevopsProjectTaskRequest& request) const;
			ExecutePipelineOutcome executePipeline(const Model::ExecutePipelineRequest &request)const;
			void executePipelineAsync(const Model::ExecutePipelineRequest& request, const ExecutePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecutePipelineOutcomeCallable executePipelineCallable(const Model::ExecutePipelineRequest& request) const;
			GetDevopsOrganizationMembersOutcome getDevopsOrganizationMembers(const Model::GetDevopsOrganizationMembersRequest &request)const;
			void getDevopsOrganizationMembersAsync(const Model::GetDevopsOrganizationMembersRequest& request, const GetDevopsOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDevopsOrganizationMembersOutcomeCallable getDevopsOrganizationMembersCallable(const Model::GetDevopsOrganizationMembersRequest& request) const;
			GetDevopsProjectInfoOutcome getDevopsProjectInfo(const Model::GetDevopsProjectInfoRequest &request)const;
			void getDevopsProjectInfoAsync(const Model::GetDevopsProjectInfoRequest& request, const GetDevopsProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDevopsProjectInfoOutcomeCallable getDevopsProjectInfoCallable(const Model::GetDevopsProjectInfoRequest& request) const;
			GetDevopsProjectMembersOutcome getDevopsProjectMembers(const Model::GetDevopsProjectMembersRequest &request)const;
			void getDevopsProjectMembersAsync(const Model::GetDevopsProjectMembersRequest& request, const GetDevopsProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDevopsProjectMembersOutcomeCallable getDevopsProjectMembersCallable(const Model::GetDevopsProjectMembersRequest& request) const;
			GetDevopsProjectSprintInfoOutcome getDevopsProjectSprintInfo(const Model::GetDevopsProjectSprintInfoRequest &request)const;
			void getDevopsProjectSprintInfoAsync(const Model::GetDevopsProjectSprintInfoRequest& request, const GetDevopsProjectSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDevopsProjectSprintInfoOutcomeCallable getDevopsProjectSprintInfoCallable(const Model::GetDevopsProjectSprintInfoRequest& request) const;
			GetDevopsProjectTaskInfoOutcome getDevopsProjectTaskInfo(const Model::GetDevopsProjectTaskInfoRequest &request)const;
			void getDevopsProjectTaskInfoAsync(const Model::GetDevopsProjectTaskInfoRequest& request, const GetDevopsProjectTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDevopsProjectTaskInfoOutcomeCallable getDevopsProjectTaskInfoCallable(const Model::GetDevopsProjectTaskInfoRequest& request) const;
			GetPipelineInstanceBuildNumberStatusOutcome getPipelineInstanceBuildNumberStatus(const Model::GetPipelineInstanceBuildNumberStatusRequest &request)const;
			void getPipelineInstanceBuildNumberStatusAsync(const Model::GetPipelineInstanceBuildNumberStatusRequest& request, const GetPipelineInstanceBuildNumberStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceBuildNumberStatusOutcomeCallable getPipelineInstanceBuildNumberStatusCallable(const Model::GetPipelineInstanceBuildNumberStatusRequest& request) const;
			GetPipelineInstanceGroupStatusOutcome getPipelineInstanceGroupStatus(const Model::GetPipelineInstanceGroupStatusRequest &request)const;
			void getPipelineInstanceGroupStatusAsync(const Model::GetPipelineInstanceGroupStatusRequest& request, const GetPipelineInstanceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceGroupStatusOutcomeCallable getPipelineInstanceGroupStatusCallable(const Model::GetPipelineInstanceGroupStatusRequest& request) const;
			GetPipelineInstanceInfoOutcome getPipelineInstanceInfo(const Model::GetPipelineInstanceInfoRequest &request)const;
			void getPipelineInstanceInfoAsync(const Model::GetPipelineInstanceInfoRequest& request, const GetPipelineInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceInfoOutcomeCallable getPipelineInstanceInfoCallable(const Model::GetPipelineInstanceInfoRequest& request) const;
			GetPipelineInstanceStatusOutcome getPipelineInstanceStatus(const Model::GetPipelineInstanceStatusRequest &request)const;
			void getPipelineInstanceStatusAsync(const Model::GetPipelineInstanceStatusRequest& request, const GetPipelineInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceStatusOutcomeCallable getPipelineInstanceStatusCallable(const Model::GetPipelineInstanceStatusRequest& request) const;
			GetPipelineLogOutcome getPipelineLog(const Model::GetPipelineLogRequest &request)const;
			void getPipelineLogAsync(const Model::GetPipelineLogRequest& request, const GetPipelineLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineLogOutcomeCallable getPipelineLogCallable(const Model::GetPipelineLogRequest& request) const;
			GetPipleineLatestInstanceStatusOutcome getPipleineLatestInstanceStatus(const Model::GetPipleineLatestInstanceStatusRequest &request)const;
			void getPipleineLatestInstanceStatusAsync(const Model::GetPipleineLatestInstanceStatusRequest& request, const GetPipleineLatestInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipleineLatestInstanceStatusOutcomeCallable getPipleineLatestInstanceStatusCallable(const Model::GetPipleineLatestInstanceStatusRequest& request) const;
			GetUserByAliyunUidOutcome getUserByAliyunUid(const Model::GetUserByAliyunUidRequest &request)const;
			void getUserByAliyunUidAsync(const Model::GetUserByAliyunUidRequest& request, const GetUserByAliyunUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserByAliyunUidOutcomeCallable getUserByAliyunUidCallable(const Model::GetUserByAliyunUidRequest& request) const;
			InsertDevopsUserOutcome insertDevopsUser(const Model::InsertDevopsUserRequest &request)const;
			void insertDevopsUserAsync(const Model::InsertDevopsUserRequest& request, const InsertDevopsUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertDevopsUserOutcomeCallable insertDevopsUserCallable(const Model::InsertDevopsUserRequest& request) const;
			InsertProjectMembersOutcome insertProjectMembers(const Model::InsertProjectMembersRequest &request)const;
			void insertProjectMembersAsync(const Model::InsertProjectMembersRequest& request, const InsertProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertProjectMembersOutcomeCallable insertProjectMembersCallable(const Model::InsertProjectMembersRequest& request) const;
			ListCredentialsOutcome listCredentials(const Model::ListCredentialsRequest &request)const;
			void listCredentialsAsync(const Model::ListCredentialsRequest& request, const ListCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCredentialsOutcomeCallable listCredentialsCallable(const Model::ListCredentialsRequest& request) const;
			ListDevopsProjectSprintsOutcome listDevopsProjectSprints(const Model::ListDevopsProjectSprintsRequest &request)const;
			void listDevopsProjectSprintsAsync(const Model::ListDevopsProjectSprintsRequest& request, const ListDevopsProjectSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevopsProjectSprintsOutcomeCallable listDevopsProjectSprintsCallable(const Model::ListDevopsProjectSprintsRequest& request) const;
			ListDevopsProjectTaskFlowOutcome listDevopsProjectTaskFlow(const Model::ListDevopsProjectTaskFlowRequest &request)const;
			void listDevopsProjectTaskFlowAsync(const Model::ListDevopsProjectTaskFlowRequest& request, const ListDevopsProjectTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevopsProjectTaskFlowOutcomeCallable listDevopsProjectTaskFlowCallable(const Model::ListDevopsProjectTaskFlowRequest& request) const;
			ListDevopsProjectTaskFlowStatusOutcome listDevopsProjectTaskFlowStatus(const Model::ListDevopsProjectTaskFlowStatusRequest &request)const;
			void listDevopsProjectTaskFlowStatusAsync(const Model::ListDevopsProjectTaskFlowStatusRequest& request, const ListDevopsProjectTaskFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevopsProjectTaskFlowStatusOutcomeCallable listDevopsProjectTaskFlowStatusCallable(const Model::ListDevopsProjectTaskFlowStatusRequest& request) const;
			ListDevopsProjectTasksOutcome listDevopsProjectTasks(const Model::ListDevopsProjectTasksRequest &request)const;
			void listDevopsProjectTasksAsync(const Model::ListDevopsProjectTasksRequest& request, const ListDevopsProjectTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevopsProjectTasksOutcomeCallable listDevopsProjectTasksCallable(const Model::ListDevopsProjectTasksRequest& request) const;
			ListDevopsScenarioFieldConfigOutcome listDevopsScenarioFieldConfig(const Model::ListDevopsScenarioFieldConfigRequest &request)const;
			void listDevopsScenarioFieldConfigAsync(const Model::ListDevopsScenarioFieldConfigRequest& request, const ListDevopsScenarioFieldConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevopsScenarioFieldConfigOutcomeCallable listDevopsScenarioFieldConfigCallable(const Model::ListDevopsScenarioFieldConfigRequest& request) const;
			ListPipelinesOutcome listPipelines(const Model::ListPipelinesRequest &request)const;
			void listPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelinesOutcomeCallable listPipelinesCallable(const Model::ListPipelinesRequest& request) const;
			ListServiceConnectionsOutcome listServiceConnections(const Model::ListServiceConnectionsRequest &request)const;
			void listServiceConnectionsAsync(const Model::ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceConnectionsOutcomeCallable listServiceConnectionsCallable(const Model::ListServiceConnectionsRequest& request) const;
			UpdateDevopsProjectOutcome updateDevopsProject(const Model::UpdateDevopsProjectRequest &request)const;
			void updateDevopsProjectAsync(const Model::UpdateDevopsProjectRequest& request, const UpdateDevopsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDevopsProjectOutcomeCallable updateDevopsProjectCallable(const Model::UpdateDevopsProjectRequest& request) const;
			UpdateDevopsProjectSprintOutcome updateDevopsProjectSprint(const Model::UpdateDevopsProjectSprintRequest &request)const;
			void updateDevopsProjectSprintAsync(const Model::UpdateDevopsProjectSprintRequest& request, const UpdateDevopsProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDevopsProjectSprintOutcomeCallable updateDevopsProjectSprintCallable(const Model::UpdateDevopsProjectSprintRequest& request) const;
			UpdateDevopsProjectTaskOutcome updateDevopsProjectTask(const Model::UpdateDevopsProjectTaskRequest &request)const;
			void updateDevopsProjectTaskAsync(const Model::UpdateDevopsProjectTaskRequest& request, const UpdateDevopsProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDevopsProjectTaskOutcomeCallable updateDevopsProjectTaskCallable(const Model::UpdateDevopsProjectTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_