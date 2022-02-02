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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_SERIALIZATION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_SERIALIZATION_CLIENT_H

#include "google/cloud/datacatalog/policy_tag_manager_serialization_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Policy Tag Manager Serialization API service allows you to manipulate
/// your policy tags and taxonomies in a serialized format.
///
/// Taxonomy is a hierarchical group of policy tags.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class PolicyTagManagerSerializationClient {
 public:
  explicit PolicyTagManagerSerializationClient(
      std::shared_ptr<PolicyTagManagerSerializationConnection> connection,
      Options options = {});
  ~PolicyTagManagerSerializationClient();

  //@{
  // @name Copy and move support
  PolicyTagManagerSerializationClient(
      PolicyTagManagerSerializationClient const&) = default;
  PolicyTagManagerSerializationClient& operator=(
      PolicyTagManagerSerializationClient const&) = default;
  PolicyTagManagerSerializationClient(PolicyTagManagerSerializationClient&&) =
      default;
  PolicyTagManagerSerializationClient& operator=(
      PolicyTagManagerSerializationClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(PolicyTagManagerSerializationClient const& a,
                         PolicyTagManagerSerializationClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PolicyTagManagerSerializationClient const& a,
                         PolicyTagManagerSerializationClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Replaces (updates) a taxonomy and all its policy tags.
  ///
  /// The taxonomy and its entire hierarchy of policy tags must be
  /// represented literally by `SerializedTaxonomy` and the nested
  /// `SerializedPolicyTag` messages.
  ///
  /// This operation automatically does the following:
  ///
  /// - Deletes the existing policy tags that are missing from the
  ///   `SerializedPolicyTag`.
  /// - Creates policy tags that don't have resource names. They are considered
  ///   new.
  /// - Updates policy tags with valid resources names accordingly.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::ReplaceTaxonomyRequest,google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L132}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::Taxonomy,google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  /// [google.cloud.datacatalog.v1.ReplaceTaxonomyRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L132}
  /// [google.cloud.datacatalog.v1.Taxonomy]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanager.proto#L206}
  ///
  StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request,
      Options options = {});

  ///
  /// Creates new taxonomies (including their policy tags) in a given project
  /// by importing from inlined or cross-regional sources.
  ///
  /// For a cross-regional source, new taxonomies are created by copying
  /// from a source in another region.
  ///
  /// For an inlined source, taxonomies and policy tags are created in bulk
  /// using nested protocol buffer structures.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::ImportTaxonomiesRequest,google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L147}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::ImportTaxonomiesResponse,google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L186}
  ///
  /// [google.cloud.datacatalog.v1.ImportTaxonomiesRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L147}
  /// [google.cloud.datacatalog.v1.ImportTaxonomiesResponse]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L186}
  ///
  StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request,
      Options options = {});

  ///
  /// Exports taxonomies in the requested type and returns them,
  /// including their policy tags. The requested taxonomies must belong to the
  /// same project.
  ///
  /// This method generates `SerializedTaxonomy` protocol buffers with nested
  /// policy tags that can be used as input for `ImportTaxonomies` calls.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::datacatalog::v1::ExportTaxonomiesRequest,google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L193}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::datacatalog::v1::ExportTaxonomiesResponse,google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L220}
  ///
  /// [google.cloud.datacatalog.v1.ExportTaxonomiesRequest]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L193}
  /// [google.cloud.datacatalog.v1.ExportTaxonomiesResponse]:
  /// @googleapis_reference_link{google/cloud/datacatalog/v1/policytagmanagerserialization.proto#L220}
  ///
  StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<PolicyTagManagerSerializationConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_SERIALIZATION_CLIENT_H
