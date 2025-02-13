// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/match_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MATCH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MATCH_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/internal/match_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/match_stub.h"
#include "google/cloud/aiplatform/v1/match_connection.h"
#include "google/cloud/aiplatform/v1/match_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/match_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MatchServiceConnectionImpl
    : public aiplatform_v1::MatchServiceConnection {
 public:
  ~MatchServiceConnectionImpl() override = default;

  MatchServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::MatchServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::aiplatform::v1::FindNeighborsResponse> FindNeighbors(
      google::cloud::aiplatform::v1::FindNeighborsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ReadIndexDatapointsResponse>
  ReadIndexDatapoints(
      google::cloud::aiplatform::v1::ReadIndexDatapointsRequest const& request)
      override;

 private:
  std::unique_ptr<aiplatform_v1::MatchServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<aiplatform_v1::MatchServiceRetryPolicyOption>()) {
      return options.get<aiplatform_v1::MatchServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<aiplatform_v1::MatchServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<aiplatform_v1::MatchServiceBackoffPolicyOption>()) {
      return options.get<aiplatform_v1::MatchServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<aiplatform_v1::MatchServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<aiplatform_v1::MatchServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            aiplatform_v1::MatchServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<aiplatform_v1::MatchServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<aiplatform_v1::MatchServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::MatchServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MATCH_CONNECTION_IMPL_H
