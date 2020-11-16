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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeNetworkInterfacesResult::DescribeNetworkInterfacesResult() :
	ServiceResult()
{}

DescribeNetworkInterfacesResult::DescribeNetworkInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkInterfacesResult::~DescribeNetworkInterfacesResult()
{}

void DescribeNetworkInterfacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkInterfaceSetsNode = value["NetworkInterfaceSets"]["NetworkInterfaceSet"];
	for (auto valueNetworkInterfaceSetsNetworkInterfaceSet : allNetworkInterfaceSetsNode)
	{
		NetworkInterfaceSet networkInterfaceSetsObject;
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceId"].isNull())
			networkInterfaceSetsObject.networkInterfaceId = valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Status"].isNull())
			networkInterfaceSetsObject.status = valueNetworkInterfaceSetsNetworkInterfaceSet["Status"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Type"].isNull())
			networkInterfaceSetsObject.type = valueNetworkInterfaceSetsNetworkInterfaceSet["Type"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["VpcId"].isNull())
			networkInterfaceSetsObject.vpcId = valueNetworkInterfaceSetsNetworkInterfaceSet["VpcId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["VSwitchId"].isNull())
			networkInterfaceSetsObject.vSwitchId = valueNetworkInterfaceSetsNetworkInterfaceSet["VSwitchId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["ZoneId"].isNull())
			networkInterfaceSetsObject.zoneId = valueNetworkInterfaceSetsNetworkInterfaceSet["ZoneId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["PrivateIpAddress"].isNull())
			networkInterfaceSetsObject.privateIpAddress = valueNetworkInterfaceSetsNetworkInterfaceSet["PrivateIpAddress"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["MacAddress"].isNull())
			networkInterfaceSetsObject.macAddress = valueNetworkInterfaceSetsNetworkInterfaceSet["MacAddress"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceName"].isNull())
			networkInterfaceSetsObject.networkInterfaceName = valueNetworkInterfaceSetsNetworkInterfaceSet["NetworkInterfaceName"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["Description"].isNull())
			networkInterfaceSetsObject.description = valueNetworkInterfaceSetsNetworkInterfaceSet["Description"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceId"].isNull())
			networkInterfaceSetsObject.instanceId = valueNetworkInterfaceSetsNetworkInterfaceSet["InstanceId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["CreationTime"].isNull())
			networkInterfaceSetsObject.creationTime = valueNetworkInterfaceSetsNetworkInterfaceSet["CreationTime"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["ResourceGroupId"].isNull())
			networkInterfaceSetsObject.resourceGroupId = valueNetworkInterfaceSetsNetworkInterfaceSet["ResourceGroupId"].asString();
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["ServiceID"].isNull())
			networkInterfaceSetsObject.serviceID = std::stol(valueNetworkInterfaceSetsNetworkInterfaceSet["ServiceID"].asString());
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["ServiceManaged"].isNull())
			networkInterfaceSetsObject.serviceManaged = valueNetworkInterfaceSetsNetworkInterfaceSet["ServiceManaged"].asString() == "true";
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["QueueNumber"].isNull())
			networkInterfaceSetsObject.queueNumber = std::stoi(valueNetworkInterfaceSetsNetworkInterfaceSet["QueueNumber"].asString());
		if(!valueNetworkInterfaceSetsNetworkInterfaceSet["OwnerId"].isNull())
			networkInterfaceSetsObject.ownerId = valueNetworkInterfaceSetsNetworkInterfaceSet["OwnerId"].asString();
		auto allPrivateIpSetsNode = valueNetworkInterfaceSetsNetworkInterfaceSet["PrivateIpSets"]["PrivateIpSet"];
		for (auto valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet : allPrivateIpSetsNode)
		{
			NetworkInterfaceSet::PrivateIpSet privateIpSetsObject;
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["PrivateIpAddress"].isNull())
				privateIpSetsObject.privateIpAddress = valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["PrivateIpAddress"].asString();
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["Primary"].isNull())
				privateIpSetsObject.primary = valueNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSetsPrivateIpSet["Primary"].asString() == "true";
			auto associatedPublicIp1Node = value["AssociatedPublicIp"];
			if(!associatedPublicIp1Node["PublicIpAddress"].isNull())
				privateIpSetsObject.associatedPublicIp1.publicIpAddress = associatedPublicIp1Node["PublicIpAddress"].asString();
			if(!associatedPublicIp1Node["AllocationId"].isNull())
				privateIpSetsObject.associatedPublicIp1.allocationId = associatedPublicIp1Node["AllocationId"].asString();
			networkInterfaceSetsObject.privateIpSets.push_back(privateIpSetsObject);
		}
		auto allIpv6SetsNode = valueNetworkInterfaceSetsNetworkInterfaceSet["Ipv6Sets"]["Ipv6Set"];
		for (auto valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set : allIpv6SetsNode)
		{
			NetworkInterfaceSet::Ipv6Set ipv6SetsObject;
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set["Ipv6Address"].isNull())
				ipv6SetsObject.ipv6Address = valueNetworkInterfaceSetsNetworkInterfaceSetIpv6SetsIpv6Set["Ipv6Address"].asString();
			networkInterfaceSetsObject.ipv6Sets.push_back(ipv6SetsObject);
		}
		auto allTagsNode = valueNetworkInterfaceSetsNetworkInterfaceSet["Tags"]["Tag"];
		for (auto valueNetworkInterfaceSetsNetworkInterfaceSetTagsTag : allTagsNode)
		{
			NetworkInterfaceSet::Tag tagsObject;
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueNetworkInterfaceSetsNetworkInterfaceSetTagsTag["TagKey"].asString();
			if(!valueNetworkInterfaceSetsNetworkInterfaceSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueNetworkInterfaceSetsNetworkInterfaceSetTagsTag["TagValue"].asString();
			networkInterfaceSetsObject.tags.push_back(tagsObject);
		}
		auto associatedPublicIpNode = value["AssociatedPublicIp"];
		if(!associatedPublicIpNode["PublicIpAddress"].isNull())
			networkInterfaceSetsObject.associatedPublicIp.publicIpAddress = associatedPublicIpNode["PublicIpAddress"].asString();
		if(!associatedPublicIpNode["AllocationId"].isNull())
			networkInterfaceSetsObject.associatedPublicIp.allocationId = associatedPublicIpNode["AllocationId"].asString();
		auto attachmentNode = value["Attachment"];
		if(!attachmentNode["InstanceId"].isNull())
			networkInterfaceSetsObject.attachment.instanceId = attachmentNode["InstanceId"].asString();
		if(!attachmentNode["TrunkNetworkInterfaceId"].isNull())
			networkInterfaceSetsObject.attachment.trunkNetworkInterfaceId = attachmentNode["TrunkNetworkInterfaceId"].asString();
		if(!attachmentNode["DeviceIndex"].isNull())
			networkInterfaceSetsObject.attachment.deviceIndex = std::stoi(attachmentNode["DeviceIndex"].asString());
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			networkInterfaceSetsObject.securityGroupIds.push_back(value.asString());
		networkInterfaceSets_.push_back(networkInterfaceSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int DescribeNetworkInterfacesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNetworkInterfacesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeNetworkInterfacesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeNetworkInterfacesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNetworkInterfacesResult::NetworkInterfaceSet> DescribeNetworkInterfacesResult::getNetworkInterfaceSets()const
{
	return networkInterfaceSets_;
}

