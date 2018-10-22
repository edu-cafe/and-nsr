#ifndef __BnHelloWorldService_H__
#define __BnHelloWorldService_H__

#include <binder/Parcel.h>

#include <helloworld/IHelloWorldService.h>

namespace android {
	class BnHelloWorldService : public BnInterface<IHelloWorldService>
	{
  	  public:
		//BBinder 클래스의 onTransact() 메서드 재정의
		virtual status_t onTransact(
				uint32_t code, 
				const Parcel& data, 
				Parcel* reply, 
				uint32_t flags=0);
	};
};	// namespace android

#endif
