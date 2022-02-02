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

#include "google/cloud/datacatalog/internal/policy_tag_manager_serialization_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/v1/policytagmanagerserialization.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PolicyTagManagerSerializationMetadata::PolicyTagManagerSerializationMetadata(
    std::shared_ptr<PolicyTagManagerSerializationStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationMetadata::ReplaceTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ReplaceTaxonomy(context, request);
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationMetadata::ImportTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ImportTaxonomies(context, request);
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationMetadata::ExportTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ExportTaxonomies(context, request);
}

void PolicyTagManagerSerializationMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void PolicyTagManagerSerializationMetadata::SetMetadata(
    grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google
