#define LOG_TAG "ashmem_server"
//#define LOG_NDEBUG 0

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "AAA.h"

using namespace android;

int main(int argc, char** argv)
{
    sp<IServiceManager> sm = defaultServiceManager();
	sm->addService( String16("my.service"), new AAA );
    IPCThreadState::self()->joinThreadPool();
}
