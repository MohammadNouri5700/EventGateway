// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: mqttpod.proto
#ifndef GRPC_mqttpod_2eproto__INCLUDED
#define GRPC_mqttpod_2eproto__INCLUDED

#include "mqttpod.pb.h"

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

class MqttPodNodeConfig final {
 public:
  static constexpr char const* service_full_name() {
    return "MqttPodNodeConfig";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::PodResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>> AsyncSendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>>(AsyncSendMqttPodNodeConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>> PrepareAsyncSendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>>(PrepareAsyncSendMqttPodNodeConfigRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode* request, ::PodResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode* request, ::PodResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>* AsyncSendMqttPodNodeConfigRaw(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::PodResponse>* PrepareAsyncSendMqttPodNodeConfigRaw(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::PodResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::PodResponse>> AsyncSendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::PodResponse>>(AsyncSendMqttPodNodeConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::PodResponse>> PrepareAsyncSendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::PodResponse>>(PrepareAsyncSendMqttPodNodeConfigRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode* request, ::PodResponse* response, std::function<void(::grpc::Status)>) override;
      void SendMqttPodNodeConfig(::grpc::ClientContext* context, const ::MqttPodNode* request, ::PodResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::PodResponse>* AsyncSendMqttPodNodeConfigRaw(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::PodResponse>* PrepareAsyncSendMqttPodNodeConfigRaw(::grpc::ClientContext* context, const ::MqttPodNode& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendMqttPodNodeConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* context, const ::MqttPodNode* request, ::PodResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendMqttPodNodeConfig(::grpc::ServerContext* context, ::MqttPodNode* request, ::grpc::ServerAsyncResponseWriter< ::PodResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendMqttPodNodeConfig<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::MqttPodNode, ::PodResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::MqttPodNode* request, ::PodResponse* response) { return this->SendMqttPodNodeConfig(context, request, response); }));}
    void SetMessageAllocatorFor_SendMqttPodNodeConfig(
        ::grpc::MessageAllocator< ::MqttPodNode, ::PodResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::MqttPodNode, ::PodResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendMqttPodNodeConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SendMqttPodNodeConfig<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendMqttPodNodeConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SendMqttPodNodeConfig(context, request, response); }));
    }
    ~WithRawCallbackMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendMqttPodNodeConfig(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendMqttPodNodeConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendMqttPodNodeConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::MqttPodNode, ::PodResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::MqttPodNode, ::PodResponse>* streamer) {
                       return this->StreamedSendMqttPodNodeConfig(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SendMqttPodNodeConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendMqttPodNodeConfig(::grpc::ServerContext* /*context*/, const ::MqttPodNode* /*request*/, ::PodResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendMqttPodNodeConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::MqttPodNode,::PodResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendMqttPodNodeConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendMqttPodNodeConfig<Service > StreamedService;
};


#endif  // GRPC_mqttpod_2eproto__INCLUDED
