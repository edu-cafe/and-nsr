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
		
		//�۽ſ� ������ ���� �������̽� �̸� ����
		data.writeInterfaceToken(
			IHelloWorldService::getInterfaceDescriptor());
		
		//�۽ſ� �����Ϳ� ��� ���ڿ� ����
		data.writeCString(str);
		
		//BpBinder Ŭ������ transact() �޼��� ȣ��
		status_t status = remote()->transact(HW_HELLOWORLD, data, &reply);
		
		if(status != NO_ERROR) {
			ALOGE("print helloworld error: %s", strerror(-status));
		} else {
			//helloworld() �޼����� ȣ�� ����� �о� ����
			status = reply.readInt32();
		}
		return status;
	}
};
	
	//�������̽� ��ũ��
	IMPLEMENT_META_INTERFACE(HelloWorldService, "android.apps.IHelloWorldService");
	
};	//namespace android
