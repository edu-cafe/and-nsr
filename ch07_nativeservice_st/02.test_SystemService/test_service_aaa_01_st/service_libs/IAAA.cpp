#define LOG_TAG "AAA"

#include "IAAA.h"

#include <utils/Debug.h>
#include <utils/Log.h>
#include <binder/IPCThreadState.h>
#include <binder/Parcel.h>
#include <utils/String8.h>
#include <utils/SystemClock.h>

#include <private/binder/Static.h>

#include <unistd.h>

namespace android {

// ----------------------------------------------------------------------

class BpAAA : public ..........
{
public:
    BpAAA(const sp<IBinder>& impl)
        : BpInterface<IAAA>(impl)
    {
    }

    virtual int .......(int num)
    {
		Parcel data, reply;
		printf("BpAAA::connect\n");
		data.writeInterfaceToken(IAAA::getInterfaceDescriptor());
		data.writeInt32(num);
		............
		int ret = reply.readInt32();
        return ret;
    }
};

IMPLEMENT_META_INTERFACE(AAA, "android.os.AAA");

// ----------------------------------------------------------------------

status_t BnAAA::_________(
        uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags)
{
    switch(code) {
       case CONNECT: {
			printf("BnAAA::onTransact()\n");
			CHECK_INTERFACE(IAAA, data, reply);
			int num = .........
			printf("BnAAA::onTransact(num:%d)\n", num);
			int  ret = .......(num);
			reply->writeInt32(ret);
            return NO_ERROR;
        } break;
        default:
            return BBinder::onTransact(code, data, reply, flags);
    }
}

// ----------------------------------------------------------------------

}; // namespace android
