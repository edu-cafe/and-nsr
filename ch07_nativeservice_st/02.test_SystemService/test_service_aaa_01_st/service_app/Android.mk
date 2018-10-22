LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include

LOCAL_SRC_FILES:=	\
    server.cpp

LOCAL_SHARED_LIBRARIES:= \
	libcutils	\
	libutils	\
	libbinder	\
	liblog	\
	libaaa
	
#base := $(LOCAL_PATH)/..

LOCAL_MODULE := aaaserver

include $(...........)


include $(CLEAR_VARS)

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include

LOCAL_SRC_FILES:=               \
    client.cpp

LOCAL_SHARED_LIBRARIES:= \
	libcutils	\
	libutils	\
	libbinder	\
	libaaa
	
#base := $(LOCAL_PATH)/..

LOCAL_MODULE := aaaclient

include $(..........)
