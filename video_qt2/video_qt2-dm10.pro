#-------------------------------------------------
#
# Project created by QtCreator 2011-11-29T15:51:32
#
#-------------------------------------------------

PLUGIN1 = filter2d
PLUGIN2 = optical_flow
SDSOC_ACCEL = filter2d_optflow_sds

INCLUDEPATH += \
	../plugins/legacy/$$PLUGIN1/include \
	../plugins/legacy/$$PLUGIN2/include \
	../$$SDSOC_ACCEL/src/src_of \
	../$$SDSOC_ACCEL/src/src_f2d \
	../perfapm-client/perfapm-client/include \
	../YOLO_lib/inc

QMAKE_LIBDIR_FLAGS += \
	-L../plugins/legacy/$$PLUGIN1/Release \
	-L../plugins/legacy/$$PLUGIN1/Debug \
	-L../plugins/legacy/$$PLUGIN2/Release \
	-L../plugins/legacy/$$PLUGIN2/Debug \
	-L../$$SDSOC_ACCEL/Release \
	-L../$$SDSOC_ACCEL/Debug \
	-L../perfapm-client/perfapm-client/Release \
	-L../perfapm-client/perfapm-client/Debug \
	-L../YOLO_lib/Debug \
	-L../YOLO_lib/Release

LIBS += \
	-l$$PLUGIN1 \
	-l$$PLUGIN2 \
	-l$$SDSOC_ACCEL \
	-lperfapm-client \
	-lpthread \
	-lopencv_imgcodecs \ 
	-lopencv_features2d \
	-lopencv_calib3d \
	-lopencv_flann \
	-lYOLO_lib

DEFINES += \
	SAMPLE_FILTER2D \
	SAMPLE_OPTICAL_FLOW \
	PERFAPM_CLIENT

include(video_qt2-common.pro)

