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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/v1/policytagmanager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerStub {
 public:
  virtual ~PolicyTagManagerStub() = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request) = 0;

  virtual Status DeleteTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
  ListTaxonomies(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ListTaxonomiesRequest const& request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const&
          request) = 0;

  virtual Status DeletePolicyTag(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
  ListPolicyTags(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ListPolicyTagsRequest const& request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;
};

class DefaultPolicyTagManagerStub : public PolicyTagManagerStub {
 public:
  explicit DefaultPolicyTagManagerStub(
      std::unique_ptr<
          google::cloud::datacatalog::v1::PolicyTagManager::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request)
      override;

  Status DeleteTaxonomy(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
  ListTaxonomies(grpc::ClientContext& client_context,
                 google::cloud::datacatalog::v1::ListTaxonomiesRequest const&
                     request) override;

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request)
      override;

  Status DeletePolicyTag(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
  ListPolicyTags(grpc::ClientContext& client_context,
                 google::cloud::datacatalog::v1::ListPolicyTagsRequest const&
                     request) override;

  StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::datacatalog::v1::PolicyTagManager::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_STUB_H
