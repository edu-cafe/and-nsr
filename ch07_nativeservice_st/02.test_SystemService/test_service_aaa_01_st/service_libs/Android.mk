LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	IAAA.cpp \
	AAA.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	libutils \
	libbinder \
	liblog

LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libdl

LOCAL_MODULE:= libaaa

include $(............)
