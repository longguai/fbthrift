/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service1.h"

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service1.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace test_cpp2 { namespace cpp_reflection {

std::unique_ptr<apache::thrift::AsyncProcessor> service1SvIf::getProcessor() {
  return folly::make_unique<service1AsyncProcessor>(this);
}

void service1SvIf::method1() {
  throw apache::thrift::TApplicationException("Function method1 is unimplemented");
}

folly::Future<folly::Unit> service1SvIf::future_method1() {
  return apache::thrift::detail::si::future([&] { return method1(); });
}

void service1SvIf::async_tm_method1(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method1(); });
}

void service1SvIf::method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  throw apache::thrift::TApplicationException("Function method2 is unimplemented");
}

folly::Future<folly::Unit> service1SvIf::future_method2(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) {
  return apache::thrift::detail::si::future([&] { return method2(x, std::move(y), z); });
}

void service1SvIf::async_tm_method2(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method2(x, std::move(y), z); });
}

int32_t service1SvIf::method3() {
  throw apache::thrift::TApplicationException("Function method3 is unimplemented");
}

folly::Future<int32_t> service1SvIf::future_method3() {
  return apache::thrift::detail::si::future([&] { return method3(); });
}

void service1SvIf::async_tm_method3(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method3(); });
}

int32_t service1SvIf::method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  throw apache::thrift::TApplicationException("Function method4 is unimplemented");
}

folly::Future<int32_t> service1SvIf::future_method4(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) {
  return apache::thrift::detail::si::future([&] { return method4(i, std::move(j), k); });
}

void service1SvIf::async_tm_method4(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method4(i, std::move(j), k); });
}

void service1SvIf::method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {
  throw apache::thrift::TApplicationException("Function method5 is unimplemented");
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::future_method5() {
  return apache::thrift::detail::si::future_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct2& _return) { method5(_return); });
}

void service1SvIf::async_tm_method5(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method5(); });
}

void service1SvIf::method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {
  throw apache::thrift::TApplicationException("Function method6 is unimplemented");
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::future_method6(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) {
  return apache::thrift::detail::si::future_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct2& _return) { method6(_return, l, std::move(m), n); });
}

void service1SvIf::async_tm_method6(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_method6(l, std::move(m), n); });
}

void service1SvNull::method1() {}

void service1SvNull::method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {}

int32_t service1SvNull::method3() {
  return 0;
}

int32_t service1SvNull::method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  return 0;
}

void service1SvNull::method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {}

void service1SvNull::method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {}

const char* service1AsyncProcessor::getServiceName() {
  return "service1";
}

folly::Optional<std::string> service1AsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void service1AsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool service1AsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> service1AsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> service1AsyncProcessor::cacheKeyMap_ {};
const service1AsyncProcessor::BinaryProtocolProcessMap& service1AsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

service1AsyncProcessor::BinaryProtocolProcessMap service1AsyncProcessor::binaryProcessMap_ {
  {"method1", &service1AsyncProcessor::_processInThread_method1<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method2", &service1AsyncProcessor::_processInThread_method2<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method3", &service1AsyncProcessor::_processInThread_method3<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method4", &service1AsyncProcessor::_processInThread_method4<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method5", &service1AsyncProcessor::_processInThread_method5<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method6", &service1AsyncProcessor::_processInThread_method6<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}
};
const service1AsyncProcessor::CompactProtocolProcessMap& service1AsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

service1AsyncProcessor::CompactProtocolProcessMap service1AsyncProcessor::compactProcessMap_ {
  {"method1", &service1AsyncProcessor::_processInThread_method1<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method2", &service1AsyncProcessor::_processInThread_method2<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method3", &service1AsyncProcessor::_processInThread_method3<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method4", &service1AsyncProcessor::_processInThread_method4<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method5", &service1AsyncProcessor::_processInThread_method5<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method6", &service1AsyncProcessor::_processInThread_method6<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift