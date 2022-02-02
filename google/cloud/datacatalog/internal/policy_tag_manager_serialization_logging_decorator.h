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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_LOGGING_DECORATOR_H

#include "google/cloud/datacatalog/internal/policy_tag_manager_serialization_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerSerializationLogging
    : public PolicyTagManagerSerializationStub {
 public:
  ~PolicyTagManagerSerializationLogging() override = default;
  PolicyTagManagerSerializationLogging(
      std::shared_ptr<PolicyTagManagerSerializationStub> child,
      TracingOptions tracing_options, std::set<std::string> components);

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request)
      override;

 private:
  std::shared_ptr<PolicyTagManagerSerializationStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // PolicyTagManagerSerializationLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_LOGGING_DECORATOR_H
