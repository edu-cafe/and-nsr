#define LOG_TAG "ashmem_client"
//#define LOG_NDEBUG 0

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "IAAA.h"

using namespace android;

int main(int argc, char** argv)
{
	int num = atoi(argv[1]);
	printf("client => num : %d\n", num);
    sp<IServiceManager> sm = defaultServiceManager();
	sp<IBinder> p = sm->getService( String16("my.service") );
	sp<IAAA> q = interface_cast<IAAA>( p );
    int ret = q->connect(num);
	printf("client => result of connect:[%d]\n", ret );
	return 0;
}
