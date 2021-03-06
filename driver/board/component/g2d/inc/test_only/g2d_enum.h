/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */

#ifndef __G2D_ENUM_H__
#define __G2D_ENUM_H__

#include "stdbool.h"
#include "stdint.h"

#ifndef __G2D_CODEC_DEFINE__
typedef enum {
   G2D_CODEC_TYPE_HW = 0,
   G2D_CODEC_TYPE_SW
} g2d_codec_type_t;


typedef enum {
   G2D_GET_HANDLE_MODE_BLOCKING_UNTIL_GET_HANDLE = 0,
   G2D_GET_HANDLE_MODE_DIRECT_RETURN_HANDLE
} g2d_get_handle_mode_t;

typedef enum {	
   G2D_STATUS_HW_ERROR = -6,
   G2D_STATUS_COLOR_FORMAT_NOT_SUPPORT = -5,
   G2D_STATUS_RANGE_CHECK_FAIL = -4,
   G2D_STATUS_NOT_SUPPORT = -3,
   G2D_STATUS_ERROR = -2,
   G2D_STATUS_NULL = -1,
   G2D_STATUS_BUSY = 0,
   G2D_STATUS_OK = 1,      	      
   G2D_STATUS_COMPLETE = 2   
} g2d_status_t;


typedef enum {
  G2D_COLOR_FORMAT_GRAY = 0,
  G2D_COLOR_FORMAT_BGR888 = 1,
  G2D_COLOR_FORMAT_RGB565 = 2,
  G2D_COLOR_FORMAT_RGB888 = 3,
  G2D_COLOR_FORMAT_ARGB8888 = 4,
  G2D_COLOR_FORMAT_PARGB8888 = 5,  
  G2D_COLOR_FORMAT_ARGB8565 = 6,
  G2D_COLOR_FORMAT_ARGB6666 = 7,
  G2D_COLOR_FORMAT_PARGB8565 = 8,
  G2D_COLOR_FORMAT_PARGB6666 = 9,  
  G2D_COLOR_FORMAT_UYVY422 = 10,
  G2D_COLOR_FORMAT_ARGB8888_INDEX_COLOR = 11,
  G2D_COLOR_FORMAT_ARGB4444 = 12,
} g2d_color_format_t;

typedef enum 
{
   G2D_SUPPORT_FUNCTION_BITBLT = 0,
   G2D_SUPPORT_FUNCTION_RECT_FILL,
   G2D_SUPPORT_FUNCTION_NORMAL_FONT,
   G2D_SUPPORT_FUNCTION_AA_FONT,
   G2D_SUPPORT_FUNCTION_TILT_FONT,
   G2D_SUPPORT_FUNCTION_LT,
   G2D_SUPPORT_FUNCTION_LT_WITH_ALPHA_BLENDING,
   G2D_SUPPORT_FUNCTION_SAD,
   G2D_SUPPORT_FUNCTION_OVERLAY,
   G2D_SUPPORT_FUNCTION_DITHERING
} g2d_support_function_t;


typedef enum 
{
   G2D_DITHERING_MODE_RANDOM_ALGORITHM = 0,
   G2D_DITHERING_MODE_FIXED_PATTERN
} g2d_dithering_mode_t;

#endif





typedef enum{
   G2D_STATE_IDLE        = 0x0,    
   G2D_STATE_SETTING_PARAMETER, 
   G2D_STATE_READY, 
   G2D_STATE_BUSY,    
   G2D_STATE_COMPLETE,  
   G2D_STATE_ABORTING        
} g2d_state_t;

typedef enum {
  G2D_CW_ROTATE_ANGLE_000 = 0,
  G2D_CW_ROTATE_ANGLE_090,
  G2D_CW_ROTATE_ANGLE_180,
  G2D_CW_ROTATE_ANGLE_270,      
  G2D_CW_ROTATE_ANGLE_MIRROR_000,
  G2D_CW_ROTATE_ANGLE_MIRROR_090,
  G2D_CW_ROTATE_ANGLE_MIRROR_180,
  G2D_CW_ROTATE_ANGLE_MIRROR_270

} G2D_CW_ROTATE_ANGLE_ENUM;



typedef enum {
  G2D_CCW_ROTATE_ANGLE_000 = 0,
  G2D_CCW_ROTATE_ANGLE_090,
  G2D_CCW_ROTATE_ANGLE_180,
  G2D_CCW_ROTATE_ANGLE_270,      
  G2D_CCW_ROTATE_ANGLE_MIRROR_000,
  G2D_CCW_ROTATE_ANGLE_MIRROR_090,
  G2D_CCW_ROTATE_ANGLE_MIRROR_180,
  G2D_CCW_ROTATE_ANGLE_MIRROR_270

} G2D_CCW_ROTATE_ANGLE_ENUM;



typedef enum {
  G2D_INDEX_COLOR_TABLE_SIZE_2 = 0,
  G2D_INDEX_COLOR_TABLE_SIZE_4,
  G2D_INDEX_COLOR_TABLE_SIZE_16,
  G2D_INDEX_COLOR_TABLE_SIZE_256
  
} G2D_INDEX_COLOR_TABLE_SIZE_ENUM;



typedef enum {
  G2D_FONT_BIT_1_BIT = 0,
  G2D_FONT_BIT_2_BIT,
  G2D_FONT_BIT_4_BIT,
  G2D_FONT_BIT_8_BIT
  
} G2D_FONT_BIT_ENUM;



typedef enum 
{
   G2D_LT_SAMPLE_MODE_TRUNCATED = 0,
   G2D_LT_SAMPLE_MODE_NEAREST = 1,
   G2D_LT_SAMPLE_MODE_BILINEAR_WITHOUT_EDGE_FILTER = 2,
   G2D_LT_SAMPLE_MODE_BILINEAR_WITH_EDGE_FILTER_DULPLICATE = 6,
   G2D_LT_SAMPLE_MODE_BILINEAR_WITH_EDGE_FILTER_DST_COLOR = 10,
   G2D_LT_SAMPLE_MODE_BILINEAR_WITH_EDGE_FILTER_USER_SPEC_COLOR = 14
   
} G2D_LT_SAMPLE_MODE_ENUM;



typedef enum {
  G2D_MEMORY_TYPE_NO_SWITCH  = 0,
  G2D_MEMORY_TYPE_SWITCH_TO_CACHEABLE,
  G2D_MEMORY_TYPE_SWITCH_TO_NONCACHEABLE

} G2D_MEMORY_TYPE_ENUM;



typedef enum 
{
   G2D_LT_SRC_KEY_EDGE_FILTER_USER_SPEC_COLOR = 0,
   G2D_LT_SRC_KEY_EDGE_FILTER_DULPLICATE
   
} G2D_LT_SRC_KEY_EDGE_FILTER_ENUM;


typedef enum 
{
   G2D_DITHERING_BIT_0_BIT = 0,
   G2D_DITHERING_BIT_1_BIT,
   G2D_DITHERING_BIT_2_BIT,
   G2D_DITHERING_BIT_3_BIT
} G2D_DITHERING_BIT_ENUM;




typedef enum 
{
   G2D_READ_BURST_TYPE_8 = 0,
   G2D_READ_BURST_TYPE_4 = 1,
   G2D_READ_BURST_TYPE_1 = 3
} G2D_READ_BURST_TYPE_ENUM;

typedef enum 
{
   G2D_WRITE_BURST_TYPE_1 = 0,
   G2D_WRITE_BURST_TYPE_4 = 2,
   G2D_WRITE_BURST_TYPE_8 = 3,
   G2D_WRITE_BURST_TYPE_16 = 4
   
} G2D_WRITE_BURST_TYPE_ENUM;





typedef enum 
{
   G2D_TILE_SIZE_TYPE_8x8 = 0,
   G2D_TILE_SIZE_TYPE_16x8
} G2D_TILE_SIZE_TYPE_ENUM;



typedef enum 
{
   G2D_LT_CACHE_SIZE_4x8 = 0,
   G2D_LT_CACHE_SIZE_8x8
} G2D_LT_CACHE_SIZE_ENUM;



typedef enum
{
   G2D_OVERLAY_LAYER0 = 0, 
   G2D_OVERLAY_LAYER1 = 1, 
   G2D_OVERLAY_LAYER2 = 2, 
   G2D_OVERLAY_LAYER3 = 3
}  G2D_OVERLAY_LAYER_ENUM;




typedef enum
{
   G2D_OVERLAY_LAYER_FUNCTION_NORMAL_FONT = 0, 
   G2D_OVERLAY_LAYER_FUNCTION_AA_FONT,
   G2D_OVERLAY_LAYER_FUNCTION_RECT,
   G2D_OVERLAY_LAYER_FUNCTION_BUFFER
   
}  G2D_OVERLAY_LAYER_FUNCTION_ENUM;


typedef enum {
   G2D_CODEC_OWNER_G2D = 0,
   G2D_CODEC_OWNER_GOVL
} G2D_CODEC_OWNER_ENUM;

#endif