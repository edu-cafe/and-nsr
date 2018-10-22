#ifndef __HelloWorldService_H__
#define __HelloWorldService_H__

#include <binder/Parcel.h>
#include <helloworld/BnHelloWorldService.h>
#include <utils/Log.h>

namespace android {
	class HelloWorldService : public BnHelloWorldService 
	{
	  public:
		//HelloWorldService 초기화, 시스템 서비스 등록
		static void instantiate();
		
		//서비스 인터페이스를 실질적으로 구현한 메서드
		virtual status_t helloworld(const char *str);
		
		//BnHelloWorldService()의 onTransact() 메서드 호출함
		virtual status_t onTransact(
				uint32_t code,
				const Parcel& data,
				Parcel* reply,
				uint32_t flags);
		
	  private:
		//new 연산자를 이용해 직접 생성할 수 없도록 private 영역에 생성자 선언
		HelloWorldService();
		virtual ~HelloWorldService();
	};

};	//namespace android

#endif
