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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_MOCKS_MOCK_ANALYTICS_HUB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_MOCKS_MOCK_ANALYTICS_HUB_CONNECTION_H

#include "google/cloud/bigquery/analyticshub/v1/analytics_hub_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AnalyticsHubServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AnalyticsHubServiceClient`. To do
 * so, construct an object of type `AnalyticsHubServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAnalyticsHubServiceConnection
    : public bigquery_analyticshub_v1::AnalyticsHubServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>,
      ListDataExchanges,
      (google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::analyticshub::v1::DataExchange>,
      ListOrgDataExchanges,
      (google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>,
      GetDataExchange,
      (google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>,
              CreateDataExchange,
              (google::cloud::bigquery::analyticshub::v1::
                   CreateDataExchangeRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>,
              UpdateDataExchange,
              (google::cloud::bigquery::analyticshub::v1::
                   UpdateDataExchangeRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteDataExchange,
              (google::cloud::bigquery::analyticshub::v1::
                   DeleteDataExchangeRequest const& request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::analyticshub::v1::Listing>,
      ListListings,
      (google::cloud::bigquery::analyticshub::v1::ListListingsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>, GetListing,
      (google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>,
      CreateListing,
      (google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>,
      UpdateListing,
      (google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteListing,
      (google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>,
      SubscribeListing,
      (google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_MOCKS_MOCK_ANALYTICS_HUB_CONNECTION_H
