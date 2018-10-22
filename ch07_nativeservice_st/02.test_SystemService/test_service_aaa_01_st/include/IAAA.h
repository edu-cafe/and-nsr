//
#ifndef ANDROID_IAAA_H
#define ANDROID_IAAA_H

#include <binder/IInterface.h>
#include <binder/IPermissionController.h>
#include <utils/Vector.h>
#include <utils/String16.h>
#include <binder/IMemory.h>

namespace android {

// ----------------------------------------------------------------------

class IAAA : public IInterface
{
public:
    DECLARE_META_INTERFACE(AAA);

    virtual int  connect(int) = 0;

    enum {
        CONNECT = IBinder::FIRST_CALL_TRANSACTION
    };
};

// ----------------------------------------------------------------------

class BnAAA : public BnInterface<IAAA>
{
public:
    virtual status_t onTransact( 
            uint32_t code,
            const Parcel& data,
            Parcel* reply,
            uint32_t flags = 0);
};

// ----------------------------------------------------------------------

}; // namespace android

#endif 

