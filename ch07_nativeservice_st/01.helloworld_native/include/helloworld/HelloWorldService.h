#ifndef __HelloWorldService_H__
#define __HelloWorldService_H__

#include <binder/Parcel.h>
#include <helloworld/BnHelloWorldService.h>
#include <utils/Log.h>

namespace android {
	class HelloWorldService : public BnHelloWorldService 
	{
	  public:
		//HelloWorldService �ʱ�ȭ, �ý��� ���� ���
		static void instantiate();
		
		//���� �������̽��� ���������� ������ �޼���
		virtual status_t helloworld(const char *str);
		
		//BnHelloWorldService()�� onTransact() �޼��� ȣ����
		virtual status_t onTransact(
				uint32_t code,
				const Parcel& data,
				Parcel* reply,
				uint32_t flags);
		
	  private:
		//new �����ڸ� �̿��� ���� ������ �� ������ private ������ ������ ����
		HelloWorldService();
		virtual ~HelloWorldService();
	};

};	//namespace android

#endif
