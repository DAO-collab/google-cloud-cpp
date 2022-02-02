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

#include "google/cloud/datacatalog/policy_tag_manager_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PolicyTagManagerConnectionIdempotencyPolicy::
    ~PolicyTagManagerConnectionIdempotencyPolicy() = default;

namespace {
class DefaultPolicyTagManagerConnectionIdempotencyPolicy
    : public PolicyTagManagerConnectionIdempotencyPolicy {
 public:
  ~DefaultPolicyTagManagerConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultPolicyTagManagerConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateTaxonomy(
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteTaxonomy(
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateTaxonomy(
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListTaxonomies(
      google::cloud::datacatalog::v1::ListTaxonomiesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetTaxonomy(
      google::cloud::datacatalog::v1::GetTaxonomyRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreatePolicyTag(
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeletePolicyTag(
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdatePolicyTag(
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListPolicyTags(
      google::cloud::datacatalog::v1::ListPolicyTagsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetPolicyTag(
      google::cloud::datacatalog::v1::GetPolicyTagRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy>
MakeDefaultPolicyTagManagerConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultPolicyTagManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google
