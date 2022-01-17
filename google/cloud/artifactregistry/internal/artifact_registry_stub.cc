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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/internal/artifact_registry_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/devtools/artifactregistry/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryStub::~ArtifactRegistryStub() = default;

StatusOr<google::devtools::artifactregistry::v1::ListDockerImagesResponse>
DefaultArtifactRegistryStub::ListDockerImages(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListDockerImagesResponse response;
  auto status =
      grpc_stub_->ListDockerImages(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::ListRepositoriesResponse>
DefaultArtifactRegistryStub::ListRepositories(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
        request) {
  google::devtools::artifactregistry::v1::ListRepositoriesResponse response;
  auto status =
      grpc_stub_->ListRepositories(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
DefaultArtifactRegistryStub::GetRepository(
    grpc::ClientContext& client_context,
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  google::devtools::artifactregistry::v1::Repository response;
  auto status = grpc_stub_->GetRepository(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_internal
}  // namespace cloud
}  // namespace google
