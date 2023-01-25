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
// source: google/pubsub/v1/schema.proto

#include "google/cloud/pubsub/internal/schema_tracing_stub.h"

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SchemaServiceTracingStub::SchemaServiceTracingStub(
    std::shared_ptr<SchemaServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::pubsub::v1::Schema> SchemaServiceTracingStub::CreateSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::CreateSchemaRequest const& request) {
  return child_->CreateSchema(context, request);
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceTracingStub::GetSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSchemaRequest const& request) {
  return child_->GetSchema(context, request);
}

StatusOr<google::pubsub::v1::ListSchemasResponse>
SchemaServiceTracingStub::ListSchemas(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSchemasRequest const& request) {
  return child_->ListSchemas(context, request);
}

StatusOr<google::pubsub::v1::ListSchemaRevisionsResponse>
SchemaServiceTracingStub::ListSchemaRevisions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSchemaRevisionsRequest const& request) {
  return child_->ListSchemaRevisions(context, request);
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceTracingStub::CommitSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::CommitSchemaRequest const& request) {
  return child_->CommitSchema(context, request);
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceTracingStub::RollbackSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::RollbackSchemaRequest const& request) {
  return child_->RollbackSchema(context, request);
}

StatusOr<google::pubsub::v1::Schema>
SchemaServiceTracingStub::DeleteSchemaRevision(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSchemaRevisionRequest const& request) {
  return child_->DeleteSchemaRevision(context, request);
}

Status SchemaServiceTracingStub::DeleteSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSchemaRequest const& request) {
  return child_->DeleteSchema(context, request);
}

StatusOr<google::pubsub::v1::ValidateSchemaResponse>
SchemaServiceTracingStub::ValidateSchema(
    grpc::ClientContext& context,
    google::pubsub::v1::ValidateSchemaRequest const& request) {
  return child_->ValidateSchema(context, request);
}

StatusOr<google::pubsub::v1::ValidateMessageResponse>
SchemaServiceTracingStub::ValidateMessage(
    grpc::ClientContext& context,
    google::pubsub::v1::ValidateMessageRequest const& request) {
  return child_->ValidateMessage(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
