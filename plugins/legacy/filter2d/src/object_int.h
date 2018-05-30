/*
 * object_int.h
 *
 *  Created on: Feb 21, 2018
 *      Author: lucas
 */

#ifndef SRC_SRC_F2D_OBJECT_INT_H_
#define SRC_SRC_F2D_OBJECT_INT_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
	PRE_BUILD_CUBE,
	YOLO_SW_INFERENCE
}INFER_TYPE;

//#define CFG_FILE "/media/card/yolo-tiny_v1.cfg"
//#define WEIGHT_FILE "/media/card/yolo-tiny_v1.weights"

#define CFG_FILE "/media/card/resource/tiny-yolo.cfg"
#define WEIGHT_FILE "/media/card/resource/tiny-yolo.weights"

//#define CFG_FILE "/media/card/resource/tiny-yolo-xnor.cfg"
//#define WEIGHT_FILE "/media/card/resource/tiny-yolo-xnor.weight"

int object_detection_video(unsigned short *frm_data_in, unsigned short *frm_data_out,
		 int height, int width, int stride, INFER_TYPE type,  char *filename);
int object_detection_camera(unsigned short *frm_data_in, unsigned short *frm_data_out,
		 int height, int width, int stride, INFER_TYPE type, void *priv);


#define INPUT_RAW_PIXEL	(768)
#define INPUT_COL_PIXEL	(576)
//#define INPUT_RAW_PIXEL	(416)
//#define INPUT_COL_PIXEL	(416)

#define RESIZED_WIDTH (448)
#define RESIZED_HEIGHT (448)

#define MAX_RESIZED_WIDTH_YUYV (448 << 1)
#define MAX_RESIZED_HEIGHT_YUYV (448 << 1)


#ifdef __cplusplus
}
#endif
#endif /* SRC_SRC_F2D_OBJECT_INT_H_ */
