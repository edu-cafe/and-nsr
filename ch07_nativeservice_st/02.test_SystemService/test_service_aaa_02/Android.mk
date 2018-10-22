LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES:= server.cpp IAAA.cpp AAA.cpp 
LOCAL_SHARED_LIBRARIES := libutils libbinder
LOCAL_MODULE:= test_server
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_SRC_FILES:= client.cpp IAAA.cpp
LOCAL_SHARED_LIBRARIES := libutils libbinder
LOCAL_MODULE:= test_client
include $(BUILD_EXECUTABLE)

