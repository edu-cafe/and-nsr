LOCAL_PATH := $(call my-dir)

HELLO_TOP := $(LOCAL_PATH)

include $(CLEAR_VARS)


include $(HELLO_TOP)/libs/helloworld/Android.mk
include $(HELLO_TOP)/helloworld/hello/Android.mk
