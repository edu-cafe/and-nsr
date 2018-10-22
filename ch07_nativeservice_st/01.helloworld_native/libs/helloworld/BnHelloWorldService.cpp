#include <helloworld/BnHelloWorldService.h>
#include <binder/Parcel.h>

namespace android {
	
	//RPC �ڵ带 ó���ϴ� onTransact() �޼��� ������
	status_t BnHelloWorldService::onTransact(
				uint32_t code, 
				const Parcel& data, 
				Parcel* reply, 
				uint32_t flags)
	{
		switch(code) {
		//������ HW_HELLOWORLD RPC �ڵ�
		case HW_HELLOWORLD :
			//�ùٸ� ���� ��û���� Ȯ��
			CHECK_INTERFACE(IHelloWorldService, data, reply);
			const char *str;
			
			//���� ����� ������ ������ ���ڿ��� �о� ����
			str = data.readCString();
			
			//ǥ�� �����ġ�� ������ ���ڿ��� ����ϴ� �޼��� ȣ��
			reply->writeInt32(helloworld(str));
			return NO_ERROR;
			break;
		default :
			return BBinder::onTransact(code, data, reply, flags);
		}
	}

};	//namespace android
