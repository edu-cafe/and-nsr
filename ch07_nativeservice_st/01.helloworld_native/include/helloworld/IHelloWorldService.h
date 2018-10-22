#ifndef __IHelloWorldService_H__
#define __IHelloWorldService_H__

#include <binder/IInterface.h>

namespace android {
	
	//HelloWorldService에서 사용할 RPC 코드 정의
	enum {
		HW_HELLOWORLD = IBinder::FIRST_CALL_TRANSACTION,
	};

	//서비스 인터페이스인 IHelloWorldService 클래스 정의
	class IHelloWorldService : public IInterface {
 	  public:
  		//서비스 인터페이스 매크로
		DECLARE_META_INTERFACE(HelloWorldService);
		
		//서비스 함수
		virtual status_t helloworld(const char *str)=0;
	};
};	//namespace android

#endif
