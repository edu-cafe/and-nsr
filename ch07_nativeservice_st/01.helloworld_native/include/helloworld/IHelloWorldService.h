#ifndef __IHelloWorldService_H__
#define __IHelloWorldService_H__

#include <binder/IInterface.h>

namespace android {
	
	//HelloWorldService���� ����� RPC �ڵ� ����
	enum {
		HW_HELLOWORLD = IBinder::FIRST_CALL_TRANSACTION,
	};

	//���� �������̽��� IHelloWorldService Ŭ���� ����
	class IHelloWorldService : public IInterface {
 	  public:
  		//���� �������̽� ��ũ��
		DECLARE_META_INTERFACE(HelloWorldService);
		
		//���� �Լ�
		virtual status_t helloworld(const char *str)=0;
	};
};	//namespace android

#endif
