// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: s7.proto
#ifndef GRPC_s7_2eproto__INCLUDED
#define GRPC_s7_2eproto__INCLUDED

#include "s7.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class SystemSnapSevenConfig final {
 public:
  static constexpr char const* service_full_name() {
    return "SystemSnapSevenConfig";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::SnapSevenConfigResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>> AsyncSendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>>(AsyncSendSystemSnapSevenConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>> PrepareAsyncSendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>>(PrepareAsyncSendSystemSnapSevenConfigRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>* AsyncSendSystemSnapSevenConfigRaw(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SnapSevenConfigResponse>* PrepareAsyncSendSystemSnapSevenConfigRaw(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::SnapSevenConfigResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>> AsyncSendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>>(AsyncSendSystemSnapSevenConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>> PrepareAsyncSendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>>(PrepareAsyncSendSystemSnapSevenConfigRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response, std::function<void(::grpc::Status)>) override;
      void SendSystemSnapSevenConfig(::grpc::ClientContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>* AsyncSendSystemSnapSevenConfigRaw(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::SnapSevenConfigResponse>* PrepareAsyncSendSystemSnapSevenConfigRaw(::grpc::ClientContext* context, const ::ConfigSnapSeven& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendSystemSnapSevenConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemSnapSevenConfig(::grpc::ServerContext* context, ::ConfigSnapSeven* request, ::grpc::ServerAsyncResponseWriter< ::SnapSevenConfigResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendSystemSnapSevenConfig<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::ConfigSnapSeven, ::SnapSevenConfigResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::ConfigSnapSeven* request, ::SnapSevenConfigResponse* response) { return this->SendSystemSnapSevenConfig(context, request, response); }));}
    void SetMessageAllocatorFor_SendSystemSnapSevenConfig(
        ::grpc::MessageAllocator< ::ConfigSnapSeven, ::SnapSevenConfigResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::ConfigSnapSeven, ::SnapSevenConfigResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendSystemSnapSevenConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SendSystemSnapSevenConfig<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemSnapSevenConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SendSystemSnapSevenConfig(context, request, response); }));
    }
    ~WithRawCallbackMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendSystemSnapSevenConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendSystemSnapSevenConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendSystemSnapSevenConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::ConfigSnapSeven, ::SnapSevenConfigResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::ConfigSnapSeven, ::SnapSevenConfigResponse>* streamer) {
                       return this->StreamedSendSystemSnapSevenConfig(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SendSystemSnapSevenConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendSystemSnapSevenConfig(::grpc::ServerContext* /*context*/, const ::ConfigSnapSeven* /*request*/, ::SnapSevenConfigResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendSystemSnapSevenConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ConfigSnapSeven,::SnapSevenConfigResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendSystemSnapSevenConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendSystemSnapSevenConfig<Service > StreamedService;
};


#endif  // GRPC_s7_2eproto__INCLUDED
