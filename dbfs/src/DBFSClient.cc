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

#include <alibabacloud/dbfs/DBFSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

namespace
{
	const std::string SERVICE_NAME = "DBFS";
}

DBFSClient::DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dbfs");
}

DBFSClient::DBFSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dbfs");
}

DBFSClient::DBFSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dbfs");
}

DBFSClient::~DBFSClient()
{}

DBFSClient::AddTagsBatchOutcome DBFSClient::addTagsBatch(const AddTagsBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsBatchOutcome(AddTagsBatchResult(outcome.result()));
	else
		return AddTagsBatchOutcome(outcome.error());
}

void DBFSClient::addTagsBatchAsync(const AddTagsBatchRequest& request, const AddTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagsBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::AddTagsBatchOutcomeCallable DBFSClient::addTagsBatchCallable(const AddTagsBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsBatchOutcome()>>(
			[this, request]()
			{
			return this->addTagsBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::AttachDbfsOutcome DBFSClient::attachDbfs(const AttachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDbfsOutcome(AttachDbfsResult(outcome.result()));
	else
		return AttachDbfsOutcome(outcome.error());
}

void DBFSClient::attachDbfsAsync(const AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::AttachDbfsOutcomeCallable DBFSClient::attachDbfsCallable(const AttachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDbfsOutcome()>>(
			[this, request]()
			{
			return this->attachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateDbfsOutcome DBFSClient::createDbfs(const CreateDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDbfsOutcome(CreateDbfsResult(outcome.result()));
	else
		return CreateDbfsOutcome(outcome.error());
}

void DBFSClient::createDbfsAsync(const CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateDbfsOutcomeCallable DBFSClient::createDbfsCallable(const CreateDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDbfsOutcome()>>(
			[this, request]()
			{
			return this->createDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateServiceLinkedRoleOutcome DBFSClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void DBFSClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateServiceLinkedRoleOutcomeCallable DBFSClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::CreateSnapshotOutcome DBFSClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void DBFSClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::CreateSnapshotOutcomeCallable DBFSClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteDbfsOutcome DBFSClient::deleteDbfs(const DeleteDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDbfsOutcome(DeleteDbfsResult(outcome.result()));
	else
		return DeleteDbfsOutcome(outcome.error());
}

void DBFSClient::deleteDbfsAsync(const DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteDbfsOutcomeCallable DBFSClient::deleteDbfsCallable(const DeleteDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDbfsOutcome()>>(
			[this, request]()
			{
			return this->deleteDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteSnapshotOutcome DBFSClient::deleteSnapshot(const DeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotOutcome(DeleteSnapshotResult(outcome.result()));
	else
		return DeleteSnapshotOutcome(outcome.error());
}

void DBFSClient::deleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteSnapshotOutcomeCallable DBFSClient::deleteSnapshotCallable(const DeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DeleteTagsBatchOutcome DBFSClient::deleteTagsBatch(const DeleteTagsBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagsBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagsBatchOutcome(DeleteTagsBatchResult(outcome.result()));
	else
		return DeleteTagsBatchOutcome(outcome.error());
}

void DBFSClient::deleteTagsBatchAsync(const DeleteTagsBatchRequest& request, const DeleteTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagsBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DeleteTagsBatchOutcomeCallable DBFSClient::deleteTagsBatchCallable(const DeleteTagsBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagsBatchOutcome()>>(
			[this, request]()
			{
			return this->deleteTagsBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DescribeDbfsSpecificationsOutcome DBFSClient::describeDbfsSpecifications(const DescribeDbfsSpecificationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDbfsSpecificationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDbfsSpecificationsOutcome(DescribeDbfsSpecificationsResult(outcome.result()));
	else
		return DescribeDbfsSpecificationsOutcome(outcome.error());
}

void DBFSClient::describeDbfsSpecificationsAsync(const DescribeDbfsSpecificationsRequest& request, const DescribeDbfsSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDbfsSpecifications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DescribeDbfsSpecificationsOutcomeCallable DBFSClient::describeDbfsSpecificationsCallable(const DescribeDbfsSpecificationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDbfsSpecificationsOutcome()>>(
			[this, request]()
			{
			return this->describeDbfsSpecifications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DescribeInstanceTypesOutcome DBFSClient::describeInstanceTypes(const DescribeInstanceTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTypesOutcome(DescribeInstanceTypesResult(outcome.result()));
	else
		return DescribeInstanceTypesOutcome(outcome.error());
}

void DBFSClient::describeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DescribeInstanceTypesOutcomeCallable DBFSClient::describeInstanceTypesCallable(const DescribeInstanceTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTypesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::DetachDbfsOutcome DBFSClient::detachDbfs(const DetachDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachDbfsOutcome(DetachDbfsResult(outcome.result()));
	else
		return DetachDbfsOutcome(outcome.error());
}

void DBFSClient::detachDbfsAsync(const DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::DetachDbfsOutcomeCallable DBFSClient::detachDbfsCallable(const DetachDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachDbfsOutcome()>>(
			[this, request]()
			{
			return this->detachDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetDbfsOutcome DBFSClient::getDbfs(const GetDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDbfsOutcome(GetDbfsResult(outcome.result()));
	else
		return GetDbfsOutcome(outcome.error());
}

void DBFSClient::getDbfsAsync(const GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetDbfsOutcomeCallable DBFSClient::getDbfsCallable(const GetDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDbfsOutcome()>>(
			[this, request]()
			{
			return this->getDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::GetServiceLinkedRoleOutcome DBFSClient::getServiceLinkedRole(const GetServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceLinkedRoleOutcome(GetServiceLinkedRoleResult(outcome.result()));
	else
		return GetServiceLinkedRoleOutcome(outcome.error());
}

void DBFSClient::getServiceLinkedRoleAsync(const GetServiceLinkedRoleRequest& request, const GetServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::GetServiceLinkedRoleOutcomeCallable DBFSClient::getServiceLinkedRoleCallable(const GetServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->getServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListDbfsOutcome DBFSClient::listDbfs(const ListDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDbfsOutcome(ListDbfsResult(outcome.result()));
	else
		return ListDbfsOutcome(outcome.error());
}

void DBFSClient::listDbfsAsync(const ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListDbfsOutcomeCallable DBFSClient::listDbfsCallable(const ListDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDbfsOutcome()>>(
			[this, request]()
			{
			return this->listDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListDbfsAttachableEcsInstancesOutcome DBFSClient::listDbfsAttachableEcsInstances(const ListDbfsAttachableEcsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDbfsAttachableEcsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDbfsAttachableEcsInstancesOutcome(ListDbfsAttachableEcsInstancesResult(outcome.result()));
	else
		return ListDbfsAttachableEcsInstancesOutcome(outcome.error());
}

void DBFSClient::listDbfsAttachableEcsInstancesAsync(const ListDbfsAttachableEcsInstancesRequest& request, const ListDbfsAttachableEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDbfsAttachableEcsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListDbfsAttachableEcsInstancesOutcomeCallable DBFSClient::listDbfsAttachableEcsInstancesCallable(const ListDbfsAttachableEcsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDbfsAttachableEcsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listDbfsAttachableEcsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListDbfsAttachedEcsInstancesOutcome DBFSClient::listDbfsAttachedEcsInstances(const ListDbfsAttachedEcsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDbfsAttachedEcsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDbfsAttachedEcsInstancesOutcome(ListDbfsAttachedEcsInstancesResult(outcome.result()));
	else
		return ListDbfsAttachedEcsInstancesOutcome(outcome.error());
}

void DBFSClient::listDbfsAttachedEcsInstancesAsync(const ListDbfsAttachedEcsInstancesRequest& request, const ListDbfsAttachedEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDbfsAttachedEcsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListDbfsAttachedEcsInstancesOutcomeCallable DBFSClient::listDbfsAttachedEcsInstancesCallable(const ListDbfsAttachedEcsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDbfsAttachedEcsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listDbfsAttachedEcsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListSnapshotOutcome DBFSClient::listSnapshot(const ListSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotOutcome(ListSnapshotResult(outcome.result()));
	else
		return ListSnapshotOutcome(outcome.error());
}

void DBFSClient::listSnapshotAsync(const ListSnapshotRequest& request, const ListSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListSnapshotOutcomeCallable DBFSClient::listSnapshotCallable(const ListSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotOutcome()>>(
			[this, request]()
			{
			return this->listSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListTagKeysOutcome DBFSClient::listTagKeys(const ListTagKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagKeysOutcome(ListTagKeysResult(outcome.result()));
	else
		return ListTagKeysOutcome(outcome.error());
}

void DBFSClient::listTagKeysAsync(const ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListTagKeysOutcomeCallable DBFSClient::listTagKeysCallable(const ListTagKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagKeysOutcome()>>(
			[this, request]()
			{
			return this->listTagKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ListTagValuesOutcome DBFSClient::listTagValues(const ListTagValuesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagValuesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagValuesOutcome(ListTagValuesResult(outcome.result()));
	else
		return ListTagValuesOutcome(outcome.error());
}

void DBFSClient::listTagValuesAsync(const ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagValues(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ListTagValuesOutcomeCallable DBFSClient::listTagValuesCallable(const ListTagValuesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagValuesOutcome()>>(
			[this, request]()
			{
			return this->listTagValues(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::RenameDbfsOutcome DBFSClient::renameDbfs(const RenameDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenameDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenameDbfsOutcome(RenameDbfsResult(outcome.result()));
	else
		return RenameDbfsOutcome(outcome.error());
}

void DBFSClient::renameDbfsAsync(const RenameDbfsRequest& request, const RenameDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renameDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::RenameDbfsOutcomeCallable DBFSClient::renameDbfsCallable(const RenameDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenameDbfsOutcome()>>(
			[this, request]()
			{
			return this->renameDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::ResizeDbfsOutcome DBFSClient::resizeDbfs(const ResizeDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResizeDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResizeDbfsOutcome(ResizeDbfsResult(outcome.result()));
	else
		return ResizeDbfsOutcome(outcome.error());
}

void DBFSClient::resizeDbfsAsync(const ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resizeDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::ResizeDbfsOutcomeCallable DBFSClient::resizeDbfsCallable(const ResizeDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResizeDbfsOutcome()>>(
			[this, request]()
			{
			return this->resizeDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::TagDbfsOutcome DBFSClient::tagDbfs(const TagDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagDbfsOutcome(TagDbfsResult(outcome.result()));
	else
		return TagDbfsOutcome(outcome.error());
}

void DBFSClient::tagDbfsAsync(const TagDbfsRequest& request, const TagDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::TagDbfsOutcomeCallable DBFSClient::tagDbfsCallable(const TagDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagDbfsOutcome()>>(
			[this, request]()
			{
			return this->tagDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DBFSClient::UpdateDbfsOutcome DBFSClient::updateDbfs(const UpdateDbfsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDbfsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDbfsOutcome(UpdateDbfsResult(outcome.result()));
	else
		return UpdateDbfsOutcome(outcome.error());
}

void DBFSClient::updateDbfsAsync(const UpdateDbfsRequest& request, const UpdateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDbfs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DBFSClient::UpdateDbfsOutcomeCallable DBFSClient::updateDbfsCallable(const UpdateDbfsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDbfsOutcome()>>(
			[this, request]()
			{
			return this->updateDbfs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

