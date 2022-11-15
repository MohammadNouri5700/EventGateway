// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: wifi.proto
#ifndef GRPC_wifi_2eproto__INCLUDED
#define GRPC_wifi_2eproto__INCLUDED

#include "wifi.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

class SystemCommand final {
 public:
  static constexpr char const* service_full_name() {
    return "SystemCommand";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::CommandResponce* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>> AsyncSendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>>(AsyncSendSystemCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>> PrepareAsyncSendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>>(PrepareAsyncSendSystemCommandRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SendSystemCommand(::grpc::ClientContext* context, const ::Command* request, ::CommandResponce* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendSystemCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::CommandResponce* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendSystemCommand(::grpc::ClientContext* context, const ::Command* request, ::CommandResponce* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void SendSystemCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::CommandResponce* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>* AsyncSendSystemCommandRaw(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::CommandResponce>* PrepareAsyncSendSystemCommandRaw(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::CommandResponce* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::CommandResponce>> AsyncSendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::CommandResponce>>(AsyncSendSystemCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::CommandResponce>> PrepareAsyncSendSystemCommand(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::CommandResponce>>(PrepareAsyncSendSystemCommandRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendSystemCommand(::grpc::ClientContext* context, const ::Command* request, ::CommandResponce* response, std::function<void(::grpc::Status)>) override;
      void SendSystemCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::CommandResponce* response, std::function<void(::grpc::Status)>) override;
      void SendSystemCommand(::grpc::ClientContext* context, const ::Command* request, ::CommandResponce* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void SendSystemCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::CommandResponce* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::CommandResponce>* AsyncSendSystemCommandRaw(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::CommandResponce>* PrepareAsyncSendSystemCommandRaw(::grpc::ClientContext* context, const ::Command& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendSystemCommand_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendSystemCommand(::grpc::ServerContext* context, const ::Command* request, ::CommandResponce* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendSystemCommand() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemCommand(::grpc::ServerContext* context, ::Command* request, ::grpc::ServerAsyncResponseWriter< ::CommandResponce>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendSystemCommand<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_SendSystemCommand() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::Command, ::CommandResponce>(
          [this](::grpc::ServerContext* context,
                 const ::Command* request,
                 ::CommandResponce* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SendSystemCommand(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_SendSystemCommand(
        ::grpc::experimental::MessageAllocator< ::Command, ::CommandResponce>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::Command, ::CommandResponce>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SendSystemCommand<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendSystemCommand() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendSystemCommand() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemCommand(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_SendSystemCommand() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SendSystemCommand(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendSystemCommand(::grpc::ServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendSystemCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendSystemCommand() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::Command, ::CommandResponce>(std::bind(&WithStreamedUnaryMethod_SendSystemCommand<BaseClass>::StreamedSendSystemCommand, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendSystemCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendSystemCommand(::grpc::ServerContext* /*context*/, const ::Command* /*request*/, ::CommandResponce* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendSystemCommand(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Command,::CommandResponce>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendSystemCommand<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendSystemCommand<Service > StreamedService;
};

class SystemWifiConfig final {
 public:
  static constexpr char const* service_full_name() {
    return "SystemWifiConfig";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::ConfigWifi* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>> AsyncSendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>>(AsyncSendSystemWifiConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>> PrepareAsyncSendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>>(PrepareAsyncSendSystemWifiConfigRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi* request, ::ConfigWifi* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendSystemWifiConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigWifi* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi* request, ::ConfigWifi* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void SendSystemWifiConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigWifi* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>* AsyncSendSystemWifiConfigRaw(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ConfigWifi>* PrepareAsyncSendSystemWifiConfigRaw(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::ConfigWifi* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigWifi>> AsyncSendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigWifi>>(AsyncSendSystemWifiConfigRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigWifi>> PrepareAsyncSendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ConfigWifi>>(PrepareAsyncSendSystemWifiConfigRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi* request, ::ConfigWifi* response, std::function<void(::grpc::Status)>) override;
      void SendSystemWifiConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigWifi* response, std::function<void(::grpc::Status)>) override;
      void SendSystemWifiConfig(::grpc::ClientContext* context, const ::ConfigWifi* request, ::ConfigWifi* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void SendSystemWifiConfig(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ConfigWifi* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ConfigWifi>* AsyncSendSystemWifiConfigRaw(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ConfigWifi>* PrepareAsyncSendSystemWifiConfigRaw(::grpc::ClientContext* context, const ::ConfigWifi& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendSystemWifiConfig_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* context, const ::ConfigWifi* request, ::ConfigWifi* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendSystemWifiConfig() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemWifiConfig(::grpc::ServerContext* context, ::ConfigWifi* request, ::grpc::ServerAsyncResponseWriter< ::ConfigWifi>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendSystemWifiConfig<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_SendSystemWifiConfig() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::ConfigWifi, ::ConfigWifi>(
          [this](::grpc::ServerContext* context,
                 const ::ConfigWifi* request,
                 ::ConfigWifi* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->SendSystemWifiConfig(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_SendSystemWifiConfig(
        ::grpc::experimental::MessageAllocator< ::ConfigWifi, ::ConfigWifi>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::ConfigWifi, ::ConfigWifi>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_SendSystemWifiConfig<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendSystemWifiConfig() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendSystemWifiConfig() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSystemWifiConfig(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_SendSystemWifiConfig() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->SendSystemWifiConfig(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendSystemWifiConfig : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendSystemWifiConfig() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ConfigWifi, ::ConfigWifi>(std::bind(&WithStreamedUnaryMethod_SendSystemWifiConfig<BaseClass>::StreamedSendSystemWifiConfig, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendSystemWifiConfig() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendSystemWifiConfig(::grpc::ServerContext* /*context*/, const ::ConfigWifi* /*request*/, ::ConfigWifi* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendSystemWifiConfig(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ConfigWifi,::ConfigWifi>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendSystemWifiConfig<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendSystemWifiConfig<Service > StreamedService;
};


#endif  // GRPC_wifi_2eproto__INCLUDED
