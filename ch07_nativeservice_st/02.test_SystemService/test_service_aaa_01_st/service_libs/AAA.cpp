#define LOG_TAG "AAA"

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <binder/MemoryHeapBase.h>

#include <cutils/log.h>
#include <cutils/ashmem.h>
#include <cutils/atomic.h>

#include <dlfcn.h>
#include <utils/Log.h>

#include "AAA.h"

namespace android {

// ---------------------------------------------------------------------------

int AAA::connect(int num)
{
	ALOGI("AAA::connect()..\n");
	printf("AAA::connect()\n");
    return num+100;
}
// ---------------------------------------------------------------------------
}; // namespace android
