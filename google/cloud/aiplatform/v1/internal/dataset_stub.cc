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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/internal/dataset_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/dataset_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceStub::~DatasetServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateDatasetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateDatasetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDataset(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DefaultDatasetServiceStub::GetDataset(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  google::cloud::aiplatform::v1::Dataset response;
  auto status = grpc_stub_->GetDataset(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DefaultDatasetServiceStub::UpdateDataset(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  google::cloud::aiplatform::v1::Dataset response;
  auto status = grpc_stub_->UpdateDataset(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
DefaultDatasetServiceStub::ListDatasets(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
  google::cloud::aiplatform::v1::ListDatasetsResponse response;
  auto status = grpc_stub_->ListDatasets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteDatasetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteDatasetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDataset(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::ImportDataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::ImportDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportData(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::ExportDataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::ExportDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportData(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
DefaultDatasetServiceStub::ListDataItems(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
  google::cloud::aiplatform::v1::ListDataItemsResponse response;
  auto status = grpc_stub_->ListDataItems(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
DefaultDatasetServiceStub::SearchDataItems(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) {
  google::cloud::aiplatform::v1::SearchDataItemsResponse response;
  auto status =
      grpc_stub_->SearchDataItems(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
DefaultDatasetServiceStub::ListSavedQueries(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListSavedQueriesRequest const& request) {
  google::cloud::aiplatform::v1::ListSavedQueriesResponse response;
  auto status =
      grpc_stub_->ListSavedQueries(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncDeleteSavedQuery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteSavedQueryRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSavedQuery(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DefaultDatasetServiceStub::GetAnnotationSpec(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  google::cloud::aiplatform::v1::AnnotationSpec response;
  auto status =
      grpc_stub_->GetAnnotationSpec(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
DefaultDatasetServiceStub::ListAnnotations(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) {
  google::cloud::aiplatform::v1::ListAnnotationsResponse response;
  auto status =
      grpc_stub_->ListAnnotations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDatasetServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDatasetServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
