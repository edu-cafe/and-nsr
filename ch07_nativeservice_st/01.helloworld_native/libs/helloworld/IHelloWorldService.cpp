#include <binder/Parcel.h>
#include <helloworld/IHelloWorldService.h>

namespace android {
	
class BpHelloWorldService: public BpInterface<IHelloWorldService>
{
  public:
	BpHelloWorldService(const sp<IBinder>& impl)  
		: BpInterface<IHelloWorldService>(impl)
	{}
	
	virtual status_t helloworld(const char *str) {
		Parcel data, reply;
		
		//송신용 데이터 서비스 인터페이스 이름 저장
		data.writeInterfaceToken(
			IHelloWorldService::getInterfaceDescriptor());
		
		//송신용 데이터에 출력 문자열 저장
		data.writeCString(str);
		
		//BpBinder 클래스의 transact() 메서드 호출
		status_t status = remote()->transact(HW_HELLOWORLD, data, &reply);
		
		if(status != NO_ERROR) {
			ALOGE("print helloworld error: %s", strerror(-status));
		} else {
			//helloworld() 메서드의 호출 결과를 읽어 들임
			status = reply.readInt32();
		}
		return status;
	}
};
	
	//인터페이스 매크로
	IMPLEMENT_META_INTERFACE(HelloWorldService, "android.apps.IHelloWorldService");
	
};	//namespace android
