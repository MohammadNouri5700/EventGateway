// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: startup.proto

#include "startup.pb.h"
#include "startup.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* SystemStartupConfig_method_names[] = {
  "/SystemStartupConfig/SendSystemStartupConfig",
};

std::unique_ptr< SystemStartupConfig::Stub> SystemStartupConfig::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SystemStartupConfig::Stub> stub(new SystemStartupConfig::Stub(channel));
  return stub;
}

SystemStartupConfig::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SendSystemStartupConfig_(SystemStartupConfig_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SystemStartupConfig::Stub::SendSystemStartupConfig(::grpc::ClientContext* context, const ::StartupConfig& request, ::StartupResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SendSystemStartupConfig_, context, request, response);
}

void SystemStartupConfig::Stub::experimental_async::SendSystemStartupConfig(::grpc::ClientContext* context, const ::StartupConfig* request, ::StartupResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendSystemStartupConfig_, context, request, response, std::move(f));
}

void SystemStartupConfig::Stub::experimental_async::SendSystemStartupConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::StartupResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SendSystemStartupConfig_, context, request, response, std::move(f));
}

void SystemStartupConfig::Stub::experimental_async::SendSystemStartupConfig(::grpc::ClientContext* context, const ::StartupConfig* request, ::StartupResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendSystemStartupConfig_, context, request, response, reactor);
}

void SystemStartupConfig::Stub::experimental_async::SendSystemStartupConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::StartupResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SendSystemStartupConfig_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::StartupResponse>* SystemStartupConfig::Stub::AsyncSendSystemStartupConfigRaw(::grpc::ClientContext* context, const ::StartupConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::StartupResponse>::Create(channel_.get(), cq, rpcmethod_SendSystemStartupConfig_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::StartupResponse>* SystemStartupConfig::Stub::PrepareAsyncSendSystemStartupConfigRaw(::grpc::ClientContext* context, const ::StartupConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::StartupResponse>::Create(channel_.get(), cq, rpcmethod_SendSystemStartupConfig_, context, request, false);
}

SystemStartupConfig::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SystemStartupConfig_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SystemStartupConfig::Service, ::StartupConfig, ::StartupResponse>(
          std::mem_fn(&SystemStartupConfig::Service::SendSystemStartupConfig), this)));
}

SystemStartupConfig::Service::~Service() {
}

::grpc::Status SystemStartupConfig::Service::SendSystemStartupConfig(::grpc::ServerContext* context, const ::StartupConfig* request, ::StartupResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


