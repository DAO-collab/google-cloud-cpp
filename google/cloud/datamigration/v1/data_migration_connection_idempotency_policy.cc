// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/v1/data_migration_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DataMigrationServiceConnectionIdempotencyPolicy::
    ~DataMigrationServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
DataMigrationServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DataMigrationServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::ListMigrationJobs(
    google::cloud::clouddms::v1::ListMigrationJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::GetMigrationJob(
    google::cloud::clouddms::v1::GetMigrationJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::CreateMigrationJob(
    google::cloud::clouddms::v1::CreateMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::UpdateMigrationJob(
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::DeleteMigrationJob(
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::StartMigrationJob(
    google::cloud::clouddms::v1::StartMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::StopMigrationJob(
    google::cloud::clouddms::v1::StopMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::ResumeMigrationJob(
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::PromoteMigrationJob(
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::VerifyMigrationJob(
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::RestartMigrationJob(
    google::cloud::clouddms::v1::RestartMigrationJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::GenerateSshScript(
    google::cloud::clouddms::v1::GenerateSshScriptRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::ListConnectionProfiles(
    google::cloud::clouddms::v1::ListConnectionProfilesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::GetConnectionProfile(
    google::cloud::clouddms::v1::GetConnectionProfileRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::CreateConnectionProfile(
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::UpdateConnectionProfile(
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::DeleteConnectionProfile(
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::CreatePrivateConnection(
    google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::GetPrivateConnection(
    google::cloud::clouddms::v1::GetPrivateConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::ListPrivateConnections(
    google::cloud::clouddms::v1::ListPrivateConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::DeletePrivateConnection(
    google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::GetConversionWorkspace(
    google::cloud::clouddms::v1::GetConversionWorkspaceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::ListConversionWorkspaces(
    google::cloud::clouddms::v1::ListConversionWorkspacesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::CreateConversionWorkspace(
    google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::UpdateConversionWorkspace(
    google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::DeleteConversionWorkspace(
    google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::SeedConversionWorkspace(
    google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::ImportMappingRules(
    google::cloud::clouddms::v1::ImportMappingRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::ConvertConversionWorkspace(
    google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::CommitConversionWorkspace(
    google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::RollbackConversionWorkspace(
    google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::ApplyConversionWorkspace(
    google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::DescribeDatabaseEntities(
    google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DataMigrationServiceConnectionIdempotencyPolicy::SearchBackgroundJobs(
    google::cloud::clouddms::v1::SearchBackgroundJobsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::
    DescribeConversionWorkspaceRevisions(
        google::cloud::clouddms::v1::
            DescribeConversionWorkspaceRevisionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DataMigrationServiceConnectionIdempotencyPolicy::FetchStaticIps(
    google::cloud::clouddms::v1::FetchStaticIpsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
MakeDefaultDataMigrationServiceConnectionIdempotencyPolicy() {
  return std::make_unique<DataMigrationServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google
