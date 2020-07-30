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

#include <alibabacloud/cloudauth/CloudauthClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

namespace
{
	const std::string SERVICE_NAME = "Cloudauth";
}

CloudauthClient::CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::CloudauthClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudauth");
}

CloudauthClient::~CloudauthClient()
{}

CloudauthClient::CompareFaceVerifyOutcome CloudauthClient::compareFaceVerify(const CompareFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFaceVerifyOutcome(CompareFaceVerifyResult(outcome.result()));
	else
		return CompareFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::compareFaceVerifyAsync(const CompareFaceVerifyRequest& request, const CompareFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CompareFaceVerifyOutcomeCallable CloudauthClient::compareFaceVerifyCallable(const CompareFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->compareFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CompareFacesOutcome CloudauthClient::compareFaces(const CompareFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompareFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompareFacesOutcome(CompareFacesResult(outcome.result()));
	else
		return CompareFacesOutcome(outcome.error());
}

void CloudauthClient::compareFacesAsync(const CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compareFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CompareFacesOutcomeCallable CloudauthClient::compareFacesCallable(const CompareFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompareFacesOutcome()>>(
			[this, request]()
			{
			return this->compareFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::ContrastFaceVerifyOutcome CloudauthClient::contrastFaceVerify(const ContrastFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContrastFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContrastFaceVerifyOutcome(ContrastFaceVerifyResult(outcome.result()));
	else
		return ContrastFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::contrastFaceVerifyAsync(const ContrastFaceVerifyRequest& request, const ContrastFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, contrastFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::ContrastFaceVerifyOutcomeCallable CloudauthClient::contrastFaceVerifyCallable(const ContrastFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContrastFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->contrastFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateAuthKeyOutcome CloudauthClient::createAuthKey(const CreateAuthKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAuthKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAuthKeyOutcome(CreateAuthKeyResult(outcome.result()));
	else
		return CreateAuthKeyOutcome(outcome.error());
}

void CloudauthClient::createAuthKeyAsync(const CreateAuthKeyRequest& request, const CreateAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAuthKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateAuthKeyOutcomeCallable CloudauthClient::createAuthKeyCallable(const CreateAuthKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAuthKeyOutcome()>>(
			[this, request]()
			{
			return this->createAuthKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateRPSDKOutcome CloudauthClient::createRPSDK(const CreateRPSDKRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRPSDKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRPSDKOutcome(CreateRPSDKResult(outcome.result()));
	else
		return CreateRPSDKOutcome(outcome.error());
}

void CloudauthClient::createRPSDKAsync(const CreateRPSDKRequest& request, const CreateRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRPSDK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateRPSDKOutcomeCallable CloudauthClient::createRPSDKCallable(const CreateRPSDKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRPSDKOutcome()>>(
			[this, request]()
			{
			return this->createRPSDK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateVerifySDKOutcome CloudauthClient::createVerifySDK(const CreateVerifySDKRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVerifySDKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVerifySDKOutcome(CreateVerifySDKResult(outcome.result()));
	else
		return CreateVerifySDKOutcome(outcome.error());
}

void CloudauthClient::createVerifySDKAsync(const CreateVerifySDKRequest& request, const CreateVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVerifySDK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateVerifySDKOutcomeCallable CloudauthClient::createVerifySDKCallable(const CreateVerifySDKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVerifySDKOutcome()>>(
			[this, request]()
			{
			return this->createVerifySDK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::CreateVerifySettingOutcome CloudauthClient::createVerifySetting(const CreateVerifySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVerifySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVerifySettingOutcome(CreateVerifySettingResult(outcome.result()));
	else
		return CreateVerifySettingOutcome(outcome.error());
}

void CloudauthClient::createVerifySettingAsync(const CreateVerifySettingRequest& request, const CreateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVerifySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::CreateVerifySettingOutcomeCallable CloudauthClient::createVerifySettingCallable(const CreateVerifySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVerifySettingOutcome()>>(
			[this, request]()
			{
			return this->createVerifySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeAppInfoOutcome CloudauthClient::describeAppInfo(const DescribeAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppInfoOutcome(DescribeAppInfoResult(outcome.result()));
	else
		return DescribeAppInfoOutcome(outcome.error());
}

void CloudauthClient::describeAppInfoAsync(const DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeAppInfoOutcomeCallable CloudauthClient::describeAppInfoCallable(const DescribeAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeDeviceInfoOutcome CloudauthClient::describeDeviceInfo(const DescribeDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceInfoOutcome(DescribeDeviceInfoResult(outcome.result()));
	else
		return DescribeDeviceInfoOutcome(outcome.error());
}

void CloudauthClient::describeDeviceInfoAsync(const DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeDeviceInfoOutcomeCallable CloudauthClient::describeDeviceInfoCallable(const DescribeDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeFaceUsageOutcome CloudauthClient::describeFaceUsage(const DescribeFaceUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFaceUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFaceUsageOutcome(DescribeFaceUsageResult(outcome.result()));
	else
		return DescribeFaceUsageOutcome(outcome.error());
}

void CloudauthClient::describeFaceUsageAsync(const DescribeFaceUsageRequest& request, const DescribeFaceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFaceUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeFaceUsageOutcomeCallable CloudauthClient::describeFaceUsageCallable(const DescribeFaceUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFaceUsageOutcome()>>(
			[this, request]()
			{
			return this->describeFaceUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeFaceVerifyOutcome CloudauthClient::describeFaceVerify(const DescribeFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFaceVerifyOutcome(DescribeFaceVerifyResult(outcome.result()));
	else
		return DescribeFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::describeFaceVerifyAsync(const DescribeFaceVerifyRequest& request, const DescribeFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeFaceVerifyOutcomeCallable CloudauthClient::describeFaceVerifyCallable(const DescribeFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->describeFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeOssUploadTokenOutcome CloudauthClient::describeOssUploadToken(const DescribeOssUploadTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssUploadTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssUploadTokenOutcome(DescribeOssUploadTokenResult(outcome.result()));
	else
		return DescribeOssUploadTokenOutcome(outcome.error());
}

void CloudauthClient::describeOssUploadTokenAsync(const DescribeOssUploadTokenRequest& request, const DescribeOssUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssUploadToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeOssUploadTokenOutcomeCallable CloudauthClient::describeOssUploadTokenCallable(const DescribeOssUploadTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssUploadTokenOutcome()>>(
			[this, request]()
			{
			return this->describeOssUploadToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeRPSDKOutcome CloudauthClient::describeRPSDK(const DescribeRPSDKRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRPSDKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRPSDKOutcome(DescribeRPSDKResult(outcome.result()));
	else
		return DescribeRPSDKOutcome(outcome.error());
}

void CloudauthClient::describeRPSDKAsync(const DescribeRPSDKRequest& request, const DescribeRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRPSDK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeRPSDKOutcomeCallable CloudauthClient::describeRPSDKCallable(const DescribeRPSDKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRPSDKOutcome()>>(
			[this, request]()
			{
			return this->describeRPSDK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeSdkUrlOutcome CloudauthClient::describeSdkUrl(const DescribeSdkUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSdkUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSdkUrlOutcome(DescribeSdkUrlResult(outcome.result()));
	else
		return DescribeSdkUrlOutcome(outcome.error());
}

void CloudauthClient::describeSdkUrlAsync(const DescribeSdkUrlRequest& request, const DescribeSdkUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSdkUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeSdkUrlOutcomeCallable CloudauthClient::describeSdkUrlCallable(const DescribeSdkUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSdkUrlOutcome()>>(
			[this, request]()
			{
			return this->describeSdkUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeSmartVerifyOutcome CloudauthClient::describeSmartVerify(const DescribeSmartVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSmartVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSmartVerifyOutcome(DescribeSmartVerifyResult(outcome.result()));
	else
		return DescribeSmartVerifyOutcome(outcome.error());
}

void CloudauthClient::describeSmartVerifyAsync(const DescribeSmartVerifyRequest& request, const DescribeSmartVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSmartVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeSmartVerifyOutcomeCallable CloudauthClient::describeSmartVerifyCallable(const DescribeSmartVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSmartVerifyOutcome()>>(
			[this, request]()
			{
			return this->describeSmartVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeUpdatePackageResultOutcome CloudauthClient::describeUpdatePackageResult(const DescribeUpdatePackageResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpdatePackageResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpdatePackageResultOutcome(DescribeUpdatePackageResultResult(outcome.result()));
	else
		return DescribeUpdatePackageResultOutcome(outcome.error());
}

void CloudauthClient::describeUpdatePackageResultAsync(const DescribeUpdatePackageResultRequest& request, const DescribeUpdatePackageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpdatePackageResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeUpdatePackageResultOutcomeCallable CloudauthClient::describeUpdatePackageResultCallable(const DescribeUpdatePackageResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpdatePackageResultOutcome()>>(
			[this, request]()
			{
			return this->describeUpdatePackageResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeUploadInfoOutcome CloudauthClient::describeUploadInfo(const DescribeUploadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUploadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUploadInfoOutcome(DescribeUploadInfoResult(outcome.result()));
	else
		return DescribeUploadInfoOutcome(outcome.error());
}

void CloudauthClient::describeUploadInfoAsync(const DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUploadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeUploadInfoOutcomeCallable CloudauthClient::describeUploadInfoCallable(const DescribeUploadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUploadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeUploadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeUserStatusOutcome CloudauthClient::describeUserStatus(const DescribeUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserStatusOutcome(DescribeUserStatusResult(outcome.result()));
	else
		return DescribeUserStatusOutcome(outcome.error());
}

void CloudauthClient::describeUserStatusAsync(const DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeUserStatusOutcomeCallable CloudauthClient::describeUserStatusCallable(const DescribeUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyRecordsOutcome CloudauthClient::describeVerifyRecords(const DescribeVerifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyRecordsOutcome(DescribeVerifyRecordsResult(outcome.result()));
	else
		return DescribeVerifyRecordsOutcome(outcome.error());
}

void CloudauthClient::describeVerifyRecordsAsync(const DescribeVerifyRecordsRequest& request, const DescribeVerifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyRecordsOutcomeCallable CloudauthClient::describeVerifyRecordsCallable(const DescribeVerifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyResultOutcome CloudauthClient::describeVerifyResult(const DescribeVerifyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyResultOutcome(DescribeVerifyResultResult(outcome.result()));
	else
		return DescribeVerifyResultOutcome(outcome.error());
}

void CloudauthClient::describeVerifyResultAsync(const DescribeVerifyResultRequest& request, const DescribeVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyResultOutcomeCallable CloudauthClient::describeVerifyResultCallable(const DescribeVerifyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyResultOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifySDKOutcome CloudauthClient::describeVerifySDK(const DescribeVerifySDKRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifySDKOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifySDKOutcome(DescribeVerifySDKResult(outcome.result()));
	else
		return DescribeVerifySDKOutcome(outcome.error());
}

void CloudauthClient::describeVerifySDKAsync(const DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifySDK(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifySDKOutcomeCallable CloudauthClient::describeVerifySDKCallable(const DescribeVerifySDKRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifySDKOutcome()>>(
			[this, request]()
			{
			return this->describeVerifySDK(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifySettingOutcome CloudauthClient::describeVerifySetting(const DescribeVerifySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifySettingOutcome(DescribeVerifySettingResult(outcome.result()));
	else
		return DescribeVerifySettingOutcome(outcome.error());
}

void CloudauthClient::describeVerifySettingAsync(const DescribeVerifySettingRequest& request, const DescribeVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifySettingOutcomeCallable CloudauthClient::describeVerifySettingCallable(const DescribeVerifySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifySettingOutcome()>>(
			[this, request]()
			{
			return this->describeVerifySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyTokenOutcome CloudauthClient::describeVerifyToken(const DescribeVerifyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyTokenOutcome(DescribeVerifyTokenResult(outcome.result()));
	else
		return DescribeVerifyTokenOutcome(outcome.error());
}

void CloudauthClient::describeVerifyTokenAsync(const DescribeVerifyTokenRequest& request, const DescribeVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyTokenOutcomeCallable CloudauthClient::describeVerifyTokenCallable(const DescribeVerifyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyTokenOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DescribeVerifyUsageOutcome CloudauthClient::describeVerifyUsage(const DescribeVerifyUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifyUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifyUsageOutcome(DescribeVerifyUsageResult(outcome.result()));
	else
		return DescribeVerifyUsageOutcome(outcome.error());
}

void CloudauthClient::describeVerifyUsageAsync(const DescribeVerifyUsageRequest& request, const DescribeVerifyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DescribeVerifyUsageOutcomeCallable CloudauthClient::describeVerifyUsageCallable(const DescribeVerifyUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifyUsageOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::DetectFaceAttributesOutcome CloudauthClient::detectFaceAttributes(const DetectFaceAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectFaceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectFaceAttributesOutcome(DetectFaceAttributesResult(outcome.result()));
	else
		return DetectFaceAttributesOutcome(outcome.error());
}

void CloudauthClient::detectFaceAttributesAsync(const DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectFaceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::DetectFaceAttributesOutcomeCallable CloudauthClient::detectFaceAttributesCallable(const DetectFaceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectFaceAttributesOutcome()>>(
			[this, request]()
			{
			return this->detectFaceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::GetMaterialsOutcome CloudauthClient::getMaterials(const GetMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMaterialsOutcome(GetMaterialsResult(outcome.result()));
	else
		return GetMaterialsOutcome(outcome.error());
}

void CloudauthClient::getMaterialsAsync(const GetMaterialsRequest& request, const GetMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetMaterialsOutcomeCallable CloudauthClient::getMaterialsCallable(const GetMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMaterialsOutcome()>>(
			[this, request]()
			{
			return this->getMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::GetStatusOutcome CloudauthClient::getStatus(const GetStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatusOutcome(GetStatusResult(outcome.result()));
	else
		return GetStatusOutcome(outcome.error());
}

void CloudauthClient::getStatusAsync(const GetStatusRequest& request, const GetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetStatusOutcomeCallable CloudauthClient::getStatusCallable(const GetStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatusOutcome()>>(
			[this, request]()
			{
			return this->getStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::GetVerifyTokenOutcome CloudauthClient::getVerifyToken(const GetVerifyTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVerifyTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVerifyTokenOutcome(GetVerifyTokenResult(outcome.result()));
	else
		return GetVerifyTokenOutcome(outcome.error());
}

void CloudauthClient::getVerifyTokenAsync(const GetVerifyTokenRequest& request, const GetVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVerifyToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::GetVerifyTokenOutcomeCallable CloudauthClient::getVerifyTokenCallable(const GetVerifyTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVerifyTokenOutcome()>>(
			[this, request]()
			{
			return this->getVerifyToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::InitDeviceOutcome CloudauthClient::initDevice(const InitDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitDeviceOutcome(InitDeviceResult(outcome.result()));
	else
		return InitDeviceOutcome(outcome.error());
}

void CloudauthClient::initDeviceAsync(const InitDeviceRequest& request, const InitDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::InitDeviceOutcomeCallable CloudauthClient::initDeviceCallable(const InitDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitDeviceOutcome()>>(
			[this, request]()
			{
			return this->initDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::InitFaceVerifyOutcome CloudauthClient::initFaceVerify(const InitFaceVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitFaceVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitFaceVerifyOutcome(InitFaceVerifyResult(outcome.result()));
	else
		return InitFaceVerifyOutcome(outcome.error());
}

void CloudauthClient::initFaceVerifyAsync(const InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initFaceVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::InitFaceVerifyOutcomeCallable CloudauthClient::initFaceVerifyCallable(const InitFaceVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitFaceVerifyOutcome()>>(
			[this, request]()
			{
			return this->initFaceVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::InitSmartVerifyOutcome CloudauthClient::initSmartVerify(const InitSmartVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitSmartVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitSmartVerifyOutcome(InitSmartVerifyResult(outcome.result()));
	else
		return InitSmartVerifyOutcome(outcome.error());
}

void CloudauthClient::initSmartVerifyAsync(const InitSmartVerifyRequest& request, const InitSmartVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initSmartVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::InitSmartVerifyOutcomeCallable CloudauthClient::initSmartVerifyCallable(const InitSmartVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitSmartVerifyOutcome()>>(
			[this, request]()
			{
			return this->initSmartVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::ModifyDeviceInfoOutcome CloudauthClient::modifyDeviceInfo(const ModifyDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceInfoOutcome(ModifyDeviceInfoResult(outcome.result()));
	else
		return ModifyDeviceInfoOutcome(outcome.error());
}

void CloudauthClient::modifyDeviceInfoAsync(const ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::ModifyDeviceInfoOutcomeCallable CloudauthClient::modifyDeviceInfoCallable(const ModifyDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::SubmitMaterialsOutcome CloudauthClient::submitMaterials(const SubmitMaterialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitMaterialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitMaterialsOutcome(SubmitMaterialsResult(outcome.result()));
	else
		return SubmitMaterialsOutcome(outcome.error());
}

void CloudauthClient::submitMaterialsAsync(const SubmitMaterialsRequest& request, const SubmitMaterialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitMaterials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::SubmitMaterialsOutcomeCallable CloudauthClient::submitMaterialsCallable(const SubmitMaterialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitMaterialsOutcome()>>(
			[this, request]()
			{
			return this->submitMaterials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::SubmitVerificationOutcome CloudauthClient::submitVerification(const SubmitVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitVerificationOutcome(SubmitVerificationResult(outcome.result()));
	else
		return SubmitVerificationOutcome(outcome.error());
}

void CloudauthClient::submitVerificationAsync(const SubmitVerificationRequest& request, const SubmitVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::SubmitVerificationOutcomeCallable CloudauthClient::submitVerificationCallable(const SubmitVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitVerificationOutcome()>>(
			[this, request]()
			{
			return this->submitVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::UpdateAppPackageOutcome CloudauthClient::updateAppPackage(const UpdateAppPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppPackageOutcome(UpdateAppPackageResult(outcome.result()));
	else
		return UpdateAppPackageOutcome(outcome.error());
}

void CloudauthClient::updateAppPackageAsync(const UpdateAppPackageRequest& request, const UpdateAppPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::UpdateAppPackageOutcomeCallable CloudauthClient::updateAppPackageCallable(const UpdateAppPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppPackageOutcome()>>(
			[this, request]()
			{
			return this->updateAppPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::UpdateVerifySettingOutcome CloudauthClient::updateVerifySetting(const UpdateVerifySettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVerifySettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVerifySettingOutcome(UpdateVerifySettingResult(outcome.result()));
	else
		return UpdateVerifySettingOutcome(outcome.error());
}

void CloudauthClient::updateVerifySettingAsync(const UpdateVerifySettingRequest& request, const UpdateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVerifySetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::UpdateVerifySettingOutcomeCallable CloudauthClient::updateVerifySettingCallable(const UpdateVerifySettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVerifySettingOutcome()>>(
			[this, request]()
			{
			return this->updateVerifySetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VerifyDeviceOutcome CloudauthClient::verifyDevice(const VerifyDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyDeviceOutcome(VerifyDeviceResult(outcome.result()));
	else
		return VerifyDeviceOutcome(outcome.error());
}

void CloudauthClient::verifyDeviceAsync(const VerifyDeviceRequest& request, const VerifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VerifyDeviceOutcomeCallable CloudauthClient::verifyDeviceCallable(const VerifyDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyDeviceOutcome()>>(
			[this, request]()
			{
			return this->verifyDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudauthClient::VerifyMaterialOutcome CloudauthClient::verifyMaterial(const VerifyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyMaterialOutcome(VerifyMaterialResult(outcome.result()));
	else
		return VerifyMaterialOutcome(outcome.error());
}

void CloudauthClient::verifyMaterialAsync(const VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudauthClient::VerifyMaterialOutcomeCallable CloudauthClient::verifyMaterialCallable(const VerifyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyMaterialOutcome()>>(
			[this, request]()
			{
			return this->verifyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

