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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/internal/job_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/job_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceConnectionImpl::JobServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::JobServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      JobServiceConnection::options())) {}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceConnectionImpl::CreateCustomJob(
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCustomJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateCustomJobRequest const&
                 request) { return stub_->CreateCustomJob(context, request); },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceConnectionImpl::GetCustomJob(
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCustomJob(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
        return stub_->GetCustomJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::CustomJob>
JobServiceConnectionImpl::ListCustomJobs(
    google::cloud::aiplatform::v1::ListCustomJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCustomJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::CustomJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::ListCustomJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListCustomJobsRequest const&
                       request) {
              return stub->ListCustomJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListCustomJobsResponse r) {
        std::vector<google::cloud::aiplatform::v1::CustomJob> result(
            r.custom_jobs().size());
        auto& messages = *r.mutable_custom_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteCustomJob(
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteCustomJobRequest const&
                 request) {
        return stub->AsyncDeleteCustomJob(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteCustomJob(request), polling_policy(),
      __func__);
}

Status JobServiceConnectionImpl::CancelCustomJob(
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CancelCustomJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CancelCustomJobRequest const&
                 request) { return stub_->CancelCustomJob(context, request); },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceConnectionImpl::CreateDataLabelingJob(
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateDataLabelingJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
                 request) {
        return stub_->CreateDataLabelingJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceConnectionImpl::GetDataLabelingJob(
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDataLabelingJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetDataLabelingJobRequest const&
                 request) {
        return stub_->GetDataLabelingJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceConnectionImpl::ListDataLabelingJobs(
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDataLabelingJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::DataLabelingJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::
                       ListDataLabelingJobsRequest const& request) {
              return stub->ListDataLabelingJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListDataLabelingJobsResponse r) {
        std::vector<google::cloud::aiplatform::v1::DataLabelingJob> result(
            r.data_labeling_jobs().size());
        auto& messages = *r.mutable_data_labeling_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteDataLabelingJob(
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
                 request) {
        return stub->AsyncDeleteDataLabelingJob(cq, std::move(context),
                                                request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteDataLabelingJob(request), polling_policy(),
      __func__);
}

Status JobServiceConnectionImpl::CancelDataLabelingJob(
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CancelDataLabelingJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
                 request) {
        return stub_->CancelDataLabelingJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceConnectionImpl::CreateHyperparameterTuningJob(
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateHyperparameterTuningJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 CreateHyperparameterTuningJobRequest const& request) {
        return stub_->CreateHyperparameterTuningJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceConnectionImpl::GetHyperparameterTuningJob(
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetHyperparameterTuningJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 GetHyperparameterTuningJobRequest const& request) {
        return stub_->GetHyperparameterTuningJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceConnectionImpl::ListHyperparameterTuningJobs(
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListHyperparameterTuningJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::HyperparameterTuningJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::aiplatform::v1::
                          ListHyperparameterTuningJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::
                       ListHyperparameterTuningJobsRequest const& request) {
              return stub->ListHyperparameterTuningJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse
             r) {
        std::vector<google::cloud::aiplatform::v1::HyperparameterTuningJob>
            result(r.hyperparameter_tuning_jobs().size());
        auto& messages = *r.mutable_hyperparameter_tuning_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteHyperparameterTuningJob(
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::
                 DeleteHyperparameterTuningJobRequest const& request) {
        return stub->AsyncDeleteHyperparameterTuningJob(cq, std::move(context),
                                                        request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteHyperparameterTuningJob(request),
      polling_policy(), __func__);
}

Status JobServiceConnectionImpl::CancelHyperparameterTuningJob(
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CancelHyperparameterTuningJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 CancelHyperparameterTuningJobRequest const& request) {
        return stub_->CancelHyperparameterTuningJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
JobServiceConnectionImpl::CreateNasJob(
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateNasJob(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
        return stub_->CreateNasJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
JobServiceConnectionImpl::GetNasJob(
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetNasJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
        return stub_->GetNasJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::NasJob>
JobServiceConnectionImpl::ListNasJobs(
    google::cloud::aiplatform::v1::ListNasJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListNasJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::NasJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::ListNasJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListNasJobsRequest const&
                       request) { return stub->ListNasJobs(context, request); },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListNasJobsResponse r) {
        std::vector<google::cloud::aiplatform::v1::NasJob> result(
            r.nas_jobs().size());
        auto& messages = *r.mutable_nas_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteNasJob(
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
        return stub->AsyncDeleteNasJob(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteNasJob(request), polling_policy(), __func__);
}

Status JobServiceConnectionImpl::CancelNasJob(
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CancelNasJob(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
        return stub_->CancelNasJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceConnectionImpl::GetNasTrialDetail(
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetNasTrialDetail(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetNasTrialDetailRequest const&
                 request) {
        return stub_->GetNasTrialDetail(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceConnectionImpl::ListNasTrialDetails(
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListNasTrialDetails(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::NasTrialDetail>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const&
                    request) {
              return stub->ListNasTrialDetails(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListNasTrialDetailsResponse r) {
        std::vector<google::cloud::aiplatform::v1::NasTrialDetail> result(
            r.nas_trial_details().size());
        auto& messages = *r.mutable_nas_trial_details();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceConnectionImpl::CreateBatchPredictionJob(
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateBatchPredictionJob(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
              request) {
        return stub_->CreateBatchPredictionJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceConnectionImpl::GetBatchPredictionJob(
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetBatchPredictionJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
                 request) {
        return stub_->GetBatchPredictionJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceConnectionImpl::ListBatchPredictionJobs(
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListBatchPredictionJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::BatchPredictionJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::
                       ListBatchPredictionJobsRequest const& request) {
              return stub->ListBatchPredictionJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse r) {
        std::vector<google::cloud::aiplatform::v1::BatchPredictionJob> result(
            r.batch_prediction_jobs().size());
        auto& messages = *r.mutable_batch_prediction_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteBatchPredictionJob(
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
              request) {
        return stub->AsyncDeleteBatchPredictionJob(cq, std::move(context),
                                                   request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteBatchPredictionJob(request), polling_policy(),
      __func__);
}

Status JobServiceConnectionImpl::CancelBatchPredictionJob(
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CancelBatchPredictionJob(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
              request) {
        return stub_->CancelBatchPredictionJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceConnectionImpl::CreateModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateModelDeploymentMonitoringJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 CreateModelDeploymentMonitoringJobRequest const& request) {
        return stub_->CreateModelDeploymentMonitoringJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::ModelMonitoringStatsAnomalies>
JobServiceConnectionImpl::SearchModelDeploymentMonitoringStatsAnomalies(
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->SearchModelDeploymentMonitoringStatsAnomalies(
          request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::aiplatform::v1::ModelMonitoringStatsAnomalies>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::aiplatform::v1::
              SearchModelDeploymentMonitoringStatsAnomaliesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::
                    SearchModelDeploymentMonitoringStatsAnomaliesRequest const&
                        request) {
              return stub->SearchModelDeploymentMonitoringStatsAnomalies(
                  context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse r) {
        std::vector<
            google::cloud::aiplatform::v1::ModelMonitoringStatsAnomalies>
            result(r.monitoring_stats().size());
        auto& messages = *r.mutable_monitoring_stats();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceConnectionImpl::GetModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetModelDeploymentMonitoringJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 GetModelDeploymentMonitoringJobRequest const& request) {
        return stub_->GetModelDeploymentMonitoringJob(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceConnectionImpl::ListModelDeploymentMonitoringJobs(
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<aiplatform_v1::JobServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListModelDeploymentMonitoringJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::aiplatform::v1::
                          ListModelDeploymentMonitoringJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::
                    ListModelDeploymentMonitoringJobsRequest const& request) {
              return stub->ListModelDeploymentMonitoringJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::
             ListModelDeploymentMonitoringJobsResponse r) {
        std::vector<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
            result(r.model_deployment_monitoring_jobs().size());
        auto& messages = *r.mutable_model_deployment_monitoring_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>>
JobServiceConnectionImpl::UpdateModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::
                 UpdateModelDeploymentMonitoringJobRequest const& request) {
        return stub->AsyncUpdateModelDeploymentMonitoringJob(
            cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateModelDeploymentMonitoringJob(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
JobServiceConnectionImpl::DeleteModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::
                 DeleteModelDeploymentMonitoringJobRequest const& request) {
        return stub->AsyncDeleteModelDeploymentMonitoringJob(
            cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteModelDeploymentMonitoringJob(request),
      polling_policy(), __func__);
}

Status JobServiceConnectionImpl::PauseModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->PauseModelDeploymentMonitoringJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 PauseModelDeploymentMonitoringJobRequest const& request) {
        return stub_->PauseModelDeploymentMonitoringJob(context, request);
      },
      request, __func__);
}

Status JobServiceConnectionImpl::ResumeModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ResumeModelDeploymentMonitoringJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 ResumeModelDeploymentMonitoringJobRequest const& request) {
        return stub_->ResumeModelDeploymentMonitoringJob(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
