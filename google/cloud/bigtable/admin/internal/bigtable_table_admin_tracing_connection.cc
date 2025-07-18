// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableTableAdminTracingConnection::BigtableTableAdminTracingConnection(
    std::shared_ptr<bigtable_admin::BigtableTableAdminConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingConnection::CreateTable(
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTable(request));
}

StreamRange<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingConnection::ListTables(
    google::bigtable::admin::v2::ListTablesRequest request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::ListTables");
  internal::OTelScope scope(span);
  auto sr = child_->ListTables(std::move(request));
  return internal::MakeTracedStreamRange<google::bigtable::admin::v2::Table>(
      std::move(span), std::move(sr));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingConnection::GetTable(
    google::bigtable::admin::v2::GetTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GetTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTable(request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::UpdateTable(
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateTable(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::UpdateTable(
    NoAwaitTag,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateTable");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateTable(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::UpdateTable(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateTable(operation));
}

Status BigtableTableAdminTracingConnection::DeleteTable(
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::DeleteTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTable(request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::UndeleteTable(
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UndeleteTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeleteTable(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::UndeleteTable(
    NoAwaitTag,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UndeleteTable");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UndeleteTable(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::UndeleteTable(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UndeleteTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeleteTable(operation));
}

future<StatusOr<google::bigtable::admin::v2::AuthorizedView>>
BigtableTableAdminTracingConnection::CreateAuthorizedView(
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateAuthorizedView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAuthorizedView(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::CreateAuthorizedView(
    NoAwaitTag,
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateAuthorizedView");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateAuthorizedView(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::AuthorizedView>>
BigtableTableAdminTracingConnection::CreateAuthorizedView(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateAuthorizedView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAuthorizedView(operation));
}

StreamRange<google::bigtable::admin::v2::AuthorizedView>
BigtableTableAdminTracingConnection::ListAuthorizedViews(
    google::bigtable::admin::v2::ListAuthorizedViewsRequest request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::ListAuthorizedViews");
  internal::OTelScope scope(span);
  auto sr = child_->ListAuthorizedViews(std::move(request));
  return internal::MakeTracedStreamRange<
      google::bigtable::admin::v2::AuthorizedView>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::bigtable::admin::v2::AuthorizedView>
BigtableTableAdminTracingConnection::GetAuthorizedView(
    google::bigtable::admin::v2::GetAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GetAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAuthorizedView(request));
}

future<StatusOr<google::bigtable::admin::v2::AuthorizedView>>
BigtableTableAdminTracingConnection::UpdateAuthorizedView(
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateAuthorizedView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAuthorizedView(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::UpdateAuthorizedView(
    NoAwaitTag,
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateAuthorizedView");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateAuthorizedView(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::AuthorizedView>>
BigtableTableAdminTracingConnection::UpdateAuthorizedView(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateAuthorizedView");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAuthorizedView(operation));
}

Status BigtableTableAdminTracingConnection::DeleteAuthorizedView(
    google::bigtable::admin::v2::DeleteAuthorizedViewRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::DeleteAuthorizedView");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAuthorizedView(request));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingConnection::ModifyColumnFamilies(
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::ModifyColumnFamilies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModifyColumnFamilies(request));
}

Status BigtableTableAdminTracingConnection::DropRowRange(
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::DropRowRange");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DropRowRange(request));
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminTracingConnection::GenerateConsistencyToken(
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GenerateConsistencyToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateConsistencyToken(request));
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminTracingConnection::CheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CheckConsistency");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CheckConsistency(request));
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminTracingConnection::CreateBackup(
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::CreateBackup(
    NoAwaitTag,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateBackup");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateBackup(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminTracingConnection::CreateBackup(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(operation));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingConnection::GetBackup(
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackup(request));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingConnection::UpdateBackup(
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBackup(request));
}

Status BigtableTableAdminTracingConnection::DeleteBackup(
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBackup(request));
}

StreamRange<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingConnection::ListBackups(
    google::bigtable::admin::v2::ListBackupsRequest request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::ListBackups");
  internal::OTelScope scope(span);
  auto sr = child_->ListBackups(std::move(request));
  return internal::MakeTracedStreamRange<google::bigtable::admin::v2::Backup>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::RestoreTable(
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::RestoreTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreTable(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::RestoreTable(
    NoAwaitTag,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::RestoreTable");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->RestoreTable(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminTracingConnection::RestoreTable(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::RestoreTable");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreTable(operation));
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminTracingConnection::CopyBackup(
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CopyBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CopyBackup(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::CopyBackup(
    NoAwaitTag, google::bigtable::admin::v2::CopyBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CopyBackup");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CopyBackup(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminTracingConnection::CopyBackup(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CopyBackup");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CopyBackup(operation));
}

StatusOr<google::iam::v1::Policy>
BigtableTableAdminTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
BigtableTableAdminTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::bigtable::admin::v2::SchemaBundle>>
BigtableTableAdminTracingConnection::CreateSchemaBundle(
    google::bigtable::admin::v2::CreateSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateSchemaBundle");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateSchemaBundle(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::CreateSchemaBundle(
    NoAwaitTag,
    google::bigtable::admin::v2::CreateSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateSchemaBundle");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateSchemaBundle(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::SchemaBundle>>
BigtableTableAdminTracingConnection::CreateSchemaBundle(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::CreateSchemaBundle");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateSchemaBundle(operation));
}

future<StatusOr<google::bigtable::admin::v2::SchemaBundle>>
BigtableTableAdminTracingConnection::UpdateSchemaBundle(
    google::bigtable::admin::v2::UpdateSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateSchemaBundle");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateSchemaBundle(request));
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminTracingConnection::UpdateSchemaBundle(
    NoAwaitTag,
    google::bigtable::admin::v2::UpdateSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateSchemaBundle");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateSchemaBundle(NoAwaitTag{}, request));
}

future<StatusOr<google::bigtable::admin::v2::SchemaBundle>>
BigtableTableAdminTracingConnection::UpdateSchemaBundle(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::UpdateSchemaBundle");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateSchemaBundle(operation));
}

StatusOr<google::bigtable::admin::v2::SchemaBundle>
BigtableTableAdminTracingConnection::GetSchemaBundle(
    google::bigtable::admin::v2::GetSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::GetSchemaBundle");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSchemaBundle(request));
}

StreamRange<google::bigtable::admin::v2::SchemaBundle>
BigtableTableAdminTracingConnection::ListSchemaBundles(
    google::bigtable::admin::v2::ListSchemaBundlesRequest request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::ListSchemaBundles");
  internal::OTelScope scope(span);
  auto sr = child_->ListSchemaBundles(std::move(request));
  return internal::MakeTracedStreamRange<
      google::bigtable::admin::v2::SchemaBundle>(std::move(span),
                                                 std::move(sr));
}

Status BigtableTableAdminTracingConnection::DeleteSchemaBundle(
    google::bigtable::admin::v2::DeleteSchemaBundleRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::DeleteSchemaBundle");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteSchemaBundle(request));
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminTracingConnection::AsyncCheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpan(
      "bigtable_admin::BigtableTableAdminConnection::AsyncCheckConsistency");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AsyncCheckConsistency(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<bigtable_admin::BigtableTableAdminConnection>
MakeBigtableTableAdminTracingConnection(
    std::shared_ptr<bigtable_admin::BigtableTableAdminConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<BigtableTableAdminTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
