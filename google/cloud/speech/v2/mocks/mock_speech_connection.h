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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_MOCKS_MOCK_SPEECH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_MOCKS_MOCK_SPEECH_CONNECTION_H

#include "google/cloud/speech/v2/speech_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace speech_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SpeechConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SpeechClient`. To do so,
 * construct an object of type `SpeechClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSpeechConnection : public speech_v2::SpeechConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::Recognizer>>, CreateRecognizer,
      (google::cloud::speech::v2::CreateRecognizerRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::speech::v2::Recognizer>,
              ListRecognizers,
              (google::cloud::speech::v2::ListRecognizersRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::Recognizer>, GetRecognizer,
              (google::cloud::speech::v2::GetRecognizerRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::Recognizer>>, UpdateRecognizer,
      (google::cloud::speech::v2::UpdateRecognizerRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::Recognizer>>, DeleteRecognizer,
      (google::cloud::speech::v2::DeleteRecognizerRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::Recognizer>>,
      UndeleteRecognizer,
      (google::cloud::speech::v2::UndeleteRecognizerRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::RecognizeResponse>, Recognize,
              (google::cloud::speech::v2::RecognizeRequest const& request),
              (override));

  MOCK_METHOD((std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
                   google::cloud::speech::v2::StreamingRecognizeRequest,
                   google::cloud::speech::v2::StreamingRecognizeResponse>>),
              AsyncStreamingRecognize, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>,
      BatchRecognize,
      (google::cloud::speech::v2::BatchRecognizeRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::Config>, GetConfig,
              (google::cloud::speech::v2::GetConfigRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::Config>, UpdateConfig,
              (google::cloud::speech::v2::UpdateConfigRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::CustomClass>>,
      CreateCustomClass,
      (google::cloud::speech::v2::CreateCustomClassRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::speech::v2::CustomClass>,
              ListCustomClasses,
              (google::cloud::speech::v2::ListCustomClassesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::CustomClass>, GetCustomClass,
              (google::cloud::speech::v2::GetCustomClassRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::CustomClass>>,
      UpdateCustomClass,
      (google::cloud::speech::v2::UpdateCustomClassRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::CustomClass>>,
      DeleteCustomClass,
      (google::cloud::speech::v2::DeleteCustomClassRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::CustomClass>>,
      UndeleteCustomClass,
      (google::cloud::speech::v2::UndeleteCustomClassRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::PhraseSet>>, CreatePhraseSet,
      (google::cloud::speech::v2::CreatePhraseSetRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::speech::v2::PhraseSet>, ListPhraseSets,
              (google::cloud::speech::v2::ListPhraseSetsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::speech::v2::PhraseSet>, GetPhraseSet,
              (google::cloud::speech::v2::GetPhraseSetRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::PhraseSet>>, UpdatePhraseSet,
      (google::cloud::speech::v2::UpdatePhraseSetRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::PhraseSet>>, DeletePhraseSet,
      (google::cloud::speech::v2::DeletePhraseSetRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::speech::v2::PhraseSet>>, UndeletePhraseSet,
      (google::cloud::speech::v2::UndeletePhraseSetRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_MOCKS_MOCK_SPEECH_CONNECTION_H
