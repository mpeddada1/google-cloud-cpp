// Copyright 2024 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_HANDLE_REDIRECT_ERROR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_HANDLE_REDIRECT_ERROR_H

#include "google/cloud/status.h"
#include "google/cloud/version.h"
#include <google/rpc/status.pb.h>
#include <google/storage/v2/storage.pb.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

void EnsureFirstMessageAppendObjectSpec(
    google::storage::v2::BidiWriteObjectRequest& request,
    google::rpc::Status const& rpc_status);

google::rpc::Status ExtractGrpcStatus(Status const& status);

void ApplyRedirectErrors(google::storage::v2::BidiReadObjectSpec& spec,
                         google::rpc::Status const& rpc_status);

void ApplyWriteRedirectErrors(google::storage::v2::AppendObjectSpec& spec,
                              google::rpc::Status const& rpc_status);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_ASYNC_HANDLE_REDIRECT_ERROR_H
