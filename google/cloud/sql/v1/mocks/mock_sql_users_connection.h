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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_USERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_USERS_CONNECTION_H

#include "google/cloud/sql/v1/sql_users_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace sql_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SqlUsersServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SqlUsersServiceClient`. To do so,
 * construct an object of type `SqlUsersServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSqlUsersServiceConnection : public sql_v1::SqlUsersServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, Delete,
              (google::cloud::sql::v1::SqlUsersDeleteRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, Insert,
              (google::cloud::sql::v1::SqlUsersInsertRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::UsersListResponse>, List,
              (google::cloud::sql::v1::SqlUsersListRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, Update,
              (google::cloud::sql::v1::SqlUsersUpdateRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_USERS_CONNECTION_H
