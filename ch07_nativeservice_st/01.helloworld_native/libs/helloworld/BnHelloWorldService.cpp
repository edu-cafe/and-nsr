#include <helloworld/BnHelloWorldService.h>
#include <binder/Parcel.h>

namespace android {
	
	//RPC 코드를 처리하는 onTransact() 메서드 재정의
	status_t BnHelloWorldService::onTransact(
				uint32_t code, 
				const Parcel& data, 
				Parcel* reply, 
				uint32_t flags)
	{
		switch(code) {
		//수신한 HW_HELLOWORLD RPC 코드
		case HW_HELLOWORLD :
			//올바른 서비스 요청인지 확인
			CHECK_INTERFACE(IHelloWorldService, data, reply);
			const char *str;
			
			//서비스 사용자 측에서 보내온 문자열을 읽어 들임
			str = data.readCString();
			
			//표준 출력장치에 수신한 문자열을 출력하는 메서드 호출
			reply->writeInt32(helloworld(str));
			return NO_ERROR;
			break;
		default :
			return BBinder::onTransact(code, data, reply, flags);
		}
	}

};	//namespace android
