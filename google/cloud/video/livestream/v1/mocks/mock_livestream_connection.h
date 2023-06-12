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
// source: google/cloud/video/livestream/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_MOCKS_MOCK_LIVESTREAM_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_MOCKS_MOCK_LIVESTREAM_CONNECTION_H

#include "google/cloud/video/livestream/v1/livestream_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace video_livestream_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `LivestreamServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `LivestreamServiceClient`. To do so,
 * construct an object of type `LivestreamServiceClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockLivestreamServiceConnection
    : public video_livestream_v1::LivestreamServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::livestream::v1::Channel>>,
              CreateChannel,
              (google::cloud::video::livestream::v1::CreateChannelRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::video::livestream::v1::Channel>, ListChannels,
      (google::cloud::video::livestream::v1::ListChannelsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::livestream::v1::Channel>, GetChannel,
      (google::cloud::video::livestream::v1::GetChannelRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>,
      DeleteChannel,
      (google::cloud::video::livestream::v1::DeleteChannelRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::video::livestream::v1::Channel>>,
              UpdateChannel,
              (google::cloud::video::livestream::v1::UpdateChannelRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::video::livestream::v1::ChannelOperationResponse>>,
      StartChannel,
      (google::cloud::video::livestream::v1::StartChannelRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::video::livestream::v1::ChannelOperationResponse>>,
      StopChannel,
      (google::cloud::video::livestream::v1::StopChannelRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::livestream::v1::Input>>,
      CreateInput,
      (google::cloud::video::livestream::v1::CreateInputRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::video::livestream::v1::Input>,
              ListInputs,
              (google::cloud::video::livestream::v1::ListInputsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::livestream::v1::Input>, GetInput,
      (google::cloud::video::livestream::v1::GetInputRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>,
      DeleteInput,
      (google::cloud::video::livestream::v1::DeleteInputRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::video::livestream::v1::Input>>,
      UpdateInput,
      (google::cloud::video::livestream::v1::UpdateInputRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::livestream::v1::Event>, CreateEvent,
      (google::cloud::video::livestream::v1::CreateEventRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::video::livestream::v1::Event>,
              ListEvents,
              (google::cloud::video::livestream::v1::ListEventsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::livestream::v1::Event>, GetEvent,
      (google::cloud::video::livestream::v1::GetEventRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteEvent,
      (google::cloud::video::livestream::v1::DeleteEventRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_MOCKS_MOCK_LIVESTREAM_CONNECTION_H
