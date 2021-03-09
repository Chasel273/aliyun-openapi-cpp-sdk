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

#include <alibabacloud/ccc/model/GetJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetJobResult::GetJobResult() :
	ServiceResult()
{}

GetJobResult::GetJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobResult::~GetJobResult()
{}

void GetJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["GroupId"].isNull())
		job_.groupId = jobNode["GroupId"].asString();
	if(!jobNode["ScenarioId"].isNull())
		job_.scenarioId = jobNode["ScenarioId"].asString();
	if(!jobNode["StrategyId"].isNull())
		job_.strategyId = jobNode["StrategyId"].asString();
	if(!jobNode["Priority"].isNull())
		job_.priority = std::stoi(jobNode["Priority"].asString());
	if(!jobNode["SystemPriority"].isNull())
		job_.systemPriority = std::stoi(jobNode["SystemPriority"].asString());
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["ReferenceId"].isNull())
		job_.referenceId = jobNode["ReferenceId"].asString();
	if(!jobNode["FailureReason"].isNull())
		job_.failureReason = jobNode["FailureReason"].asString();
	auto allContactsNode = jobNode["Contacts"]["Contact"];
	for (auto jobNodeContactsContact : allContactsNode)
	{
		Job::Contact contactObject;
		if(!jobNodeContactsContact["ContactId"].isNull())
			contactObject.contactId = jobNodeContactsContact["ContactId"].asString();
		if(!jobNodeContactsContact["ContactName"].isNull())
			contactObject.contactName = jobNodeContactsContact["ContactName"].asString();
		if(!jobNodeContactsContact["Honorific"].isNull())
			contactObject.honorific = jobNodeContactsContact["Honorific"].asString();
		if(!jobNodeContactsContact["Role"].isNull())
			contactObject.role = jobNodeContactsContact["Role"].asString();
		if(!jobNodeContactsContact["PhoneNumber"].isNull())
			contactObject.phoneNumber = jobNodeContactsContact["PhoneNumber"].asString();
		if(!jobNodeContactsContact["State"].isNull())
			contactObject.state = jobNodeContactsContact["State"].asString();
		if(!jobNodeContactsContact["ReferenceId"].isNull())
			contactObject.referenceId = jobNodeContactsContact["ReferenceId"].asString();
		job_.contacts.push_back(contactObject);
	}
	auto allExtrasNode = jobNode["Extras"]["KeyValuePair"];
	for (auto jobNodeExtrasKeyValuePair : allExtrasNode)
	{
		Job::KeyValuePair keyValuePairObject;
		if(!jobNodeExtrasKeyValuePair["Key"].isNull())
			keyValuePairObject.key = jobNodeExtrasKeyValuePair["Key"].asString();
		if(!jobNodeExtrasKeyValuePair["Value"].isNull())
			keyValuePairObject.value = jobNodeExtrasKeyValuePair["Value"].asString();
		job_.extras.push_back(keyValuePairObject);
	}
	auto allTasksNode = jobNode["Tasks"]["Task"];
	for (auto jobNodeTasksTask : allTasksNode)
	{
		Job::Task taskObject;
		if(!jobNodeTasksTask["TaskId"].isNull())
			taskObject.taskId = jobNodeTasksTask["TaskId"].asString();
		if(!jobNodeTasksTask["JobId"].isNull())
			taskObject.jobId = jobNodeTasksTask["JobId"].asString();
		if(!jobNodeTasksTask["ScenarioId"].isNull())
			taskObject.scenarioId = jobNodeTasksTask["ScenarioId"].asString();
		if(!jobNodeTasksTask["ChatbotId"].isNull())
			taskObject.chatbotId = jobNodeTasksTask["ChatbotId"].asString();
		if(!jobNodeTasksTask["PlanedTime"].isNull())
			taskObject.planedTime = std::stol(jobNodeTasksTask["PlanedTime"].asString());
		if(!jobNodeTasksTask["ActualTime"].isNull())
			taskObject.actualTime = std::stol(jobNodeTasksTask["ActualTime"].asString());
		if(!jobNodeTasksTask["CallingNumber"].isNull())
			taskObject.callingNumber = jobNodeTasksTask["CallingNumber"].asString();
		if(!jobNodeTasksTask["CalledNumber"].isNull())
			taskObject.calledNumber = jobNodeTasksTask["CalledNumber"].asString();
		if(!jobNodeTasksTask["CallId"].isNull())
			taskObject.callId = jobNodeTasksTask["CallId"].asString();
		if(!jobNodeTasksTask["Status"].isNull())
			taskObject.status = jobNodeTasksTask["Status"].asString();
		if(!jobNodeTasksTask["Brief"].isNull())
			taskObject.brief = jobNodeTasksTask["Brief"].asString();
		if(!jobNodeTasksTask["Duration"].isNull())
			taskObject.duration = std::stoi(jobNodeTasksTask["Duration"].asString());
		auto allConversationNode = jobNodeTasksTask["Conversation"]["ConversationDetail"];
		for (auto jobNodeTasksTaskConversationConversationDetail : allConversationNode)
		{
			Job::Task::ConversationDetail conversationObject;
			if(!jobNodeTasksTaskConversationConversationDetail["Timestamp"].isNull())
				conversationObject.timestamp = std::stol(jobNodeTasksTaskConversationConversationDetail["Timestamp"].asString());
			if(!jobNodeTasksTaskConversationConversationDetail["Speaker"].isNull())
				conversationObject.speaker = jobNodeTasksTaskConversationConversationDetail["Speaker"].asString();
			if(!jobNodeTasksTaskConversationConversationDetail["Script"].isNull())
				conversationObject.script = jobNodeTasksTaskConversationConversationDetail["Script"].asString();
			auto allSummary1Node = jobNodeTasksTaskConversationConversationDetail["Summary"]["SummaryItem"];
			for (auto jobNodeTasksTaskConversationConversationDetailSummarySummaryItem : allSummary1Node)
			{
				Job::Task::ConversationDetail::SummaryItem summary1Object;
				if(!jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["Category"].isNull())
					summary1Object.category = jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["Category"].asString();
				if(!jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["SummaryName"].isNull())
					summary1Object.summaryName = jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["SummaryName"].asString();
				if(!jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["Content"].isNull())
					summary1Object.content = jobNodeTasksTaskConversationConversationDetailSummarySummaryItem["Content"].asString();
				conversationObject.summary1.push_back(summary1Object);
			}
			taskObject.conversation.push_back(conversationObject);
		}
		auto contact2Node = value["Contact"];
		if(!contact2Node["ContactId"].isNull())
			taskObject.contact2.contactId = contact2Node["ContactId"].asString();
		if(!contact2Node["ContactName"].isNull())
			taskObject.contact2.contactName = contact2Node["ContactName"].asString();
		if(!contact2Node["Honorific"].isNull())
			taskObject.contact2.honorific = contact2Node["Honorific"].asString();
		if(!contact2Node["Role"].isNull())
			taskObject.contact2.role = contact2Node["Role"].asString();
		if(!contact2Node["PhoneNumber"].isNull())
			taskObject.contact2.phoneNumber = contact2Node["PhoneNumber"].asString();
		if(!contact2Node["State"].isNull())
			taskObject.contact2.state = contact2Node["State"].asString();
		if(!contact2Node["ReferenceId"].isNull())
			taskObject.contact2.referenceId = contact2Node["ReferenceId"].asString();
		job_.tasks.push_back(taskObject);
	}
	auto allSummaryNode = jobNode["Summary"]["SummaryItem"];
	for (auto jobNodeSummarySummaryItem : allSummaryNode)
	{
		Job::SummaryItem3 summaryItem3Object;
		if(!jobNodeSummarySummaryItem["Category"].isNull())
			summaryItem3Object.category = jobNodeSummarySummaryItem["Category"].asString();
		if(!jobNodeSummarySummaryItem["SummaryName"].isNull())
			summaryItem3Object.summaryName = jobNodeSummarySummaryItem["SummaryName"].asString();
		if(!jobNodeSummarySummaryItem["Content"].isNull())
			summaryItem3Object.content = jobNodeSummarySummaryItem["Content"].asString();
		job_.summary.push_back(summaryItem3Object);
	}
		auto allCallingNumbers = jobNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			job_.callingNumbers.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetJobResult::getMessage()const
{
	return message_;
}

int GetJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetJobResult::Job GetJobResult::getJob()const
{
	return job_;
}

std::string GetJobResult::getCode()const
{
	return code_;
}

bool GetJobResult::getSuccess()const
{
	return success_;
}

