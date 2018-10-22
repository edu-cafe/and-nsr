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

#include "AAA.h"

namespace android {

// ---------------------------------------------------------------------------

int AAA::connect(int num)
{
	printf("AAA::connect(num:%d)\n", num);
    return num+100;
}
// ---------------------------------------------------------------------------
}; // namespace android
