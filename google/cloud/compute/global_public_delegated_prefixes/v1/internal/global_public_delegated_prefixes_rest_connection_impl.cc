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
// source:
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#include "google/cloud/compute/global_public_delegated_prefixes/v1/internal/global_public_delegated_prefixes_rest_connection_impl.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/internal/global_public_delegated_prefixes_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalPublicDelegatedPrefixesRestConnectionImpl::
    GlobalPublicDelegatedPrefixesRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_global_public_delegated_prefixes_v1_internal::
                            GlobalPublicDelegatedPrefixesRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          GlobalPublicDelegatedPrefixesConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalPublicDelegatedPrefixesRestConnectionImpl::
    DeleteGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            DeleteGlobalPublicDelegatedPrefixesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
                 DeleteGlobalPublicDelegatedPrefixesRequest const& request) {
        return stub->AsyncDeleteGlobalPublicDelegatedPrefixes(
            cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteGlobalPublicDelegatedPrefixes(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
GlobalPublicDelegatedPrefixesRestConnectionImpl::
    GetGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            GetGlobalPublicDelegatedPrefixesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGlobalPublicDelegatedPrefixes(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
                 GetGlobalPublicDelegatedPrefixesRequest const& request) {
        return stub_->GetGlobalPublicDelegatedPrefixes(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalPublicDelegatedPrefixesRestConnectionImpl::
    InsertGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            InsertGlobalPublicDelegatedPrefixesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
                 InsertGlobalPublicDelegatedPrefixesRequest const& request) {
        return stub->AsyncInsertGlobalPublicDelegatedPrefixes(
            cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->InsertGlobalPublicDelegatedPrefixes(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
GlobalPublicDelegatedPrefixesRestConnectionImpl::
    ListGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            ListGlobalPublicDelegatedPrefixesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<compute_global_public_delegated_prefixes_v1::
                          GlobalPublicDelegatedPrefixesRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListGlobalPublicDelegatedPrefixes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
              ListGlobalPublicDelegatedPrefixesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                google::cloud::cpp::compute::global_public_delegated_prefixes::
                    v1::ListGlobalPublicDelegatedPrefixesRequest const&
                        request) {
              return stub->ListGlobalPublicDelegatedPrefixes(rest_context,
                                                             request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::PublicDelegatedPrefixList r) {
        std::vector<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalPublicDelegatedPrefixesRestConnectionImpl::
    PatchGlobalPublicDelegatedPrefixes(
        google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
            PatchGlobalPublicDelegatedPrefixesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
                 PatchGlobalPublicDelegatedPrefixesRequest const& request) {
        return stub->AsyncPatchGlobalPublicDelegatedPrefixes(
            cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->PatchGlobalPublicDelegatedPrefixes(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
