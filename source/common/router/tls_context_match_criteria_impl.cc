#include "common/router/tls_context_match_criteria_impl.h"

#include "envoy/api/v2/route/route.pb.h"

namespace Envoy {
namespace Router {

TlsContextMatchCriteriaImpl::TlsContextMatchCriteriaImpl(
    const ::envoy::api::v2::route::RouteMatch_TlsContextMatchOptions& options) {
  if (options.has_presented()) {
    presented_ = options.presented().value();
  }

  if (options.has_validated()) {
    validated_ = options.validated().value();
  }
}

} // namespace Router
} // namespace Envoy
