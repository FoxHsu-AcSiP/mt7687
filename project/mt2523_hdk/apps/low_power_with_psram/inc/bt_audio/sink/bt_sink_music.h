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

#include "stdint.h"
#include "bt_address.h"
#include "bt_sink_a2dp.h"
#include "bt_sink_avrcp.h"
#include "bt_sink_conmgr.h"

#ifndef __BT_SINK_MUSIC_H__
#define __BT_SINK_MUSIC_H__


#define BT_SINK_A2DP_CONN_BIT              (1 << 0)
#define BT_SINK_AVRCP_CONN_BIT             (1 << 1)
#define BT_SINK_HFP_CONN_BIT               (1 << 2)

#define BT_SINK_FLAG_PLAYING               (1 << 0)
#define BT_SINK_FLAG_A2DP_CON_IND          (1 << 1)

#define BT_SINK_INVALID_CID                (0xffff)



typedef enum {
    BT_SINK_DEVICE_CID,
    BT_SINK_DEVICE_ADDR,
    BT_SINK_DEVICE_UNUSED,
    BT_SINK_DEVICE_USED,

    BT_SINK_DEVICE_TOTAL
} bt_sink_device_type_t;

typedef enum {
    BT_SINK_IDLE,
    BT_SINK_READY,
    BT_SINK_PLAY,

    /* AMI interact */
    BT_SINK_AMI_PLAY,
    BT_SINK_AMI_STOP,

    BT_SINK_TOTAL
} bt_sink_state_t;

typedef struct {
    SinkProfileAvrcp *avrcp;
    SinkProfileA2dp *a2dp;
    bt_address_t dev_addr;
    uint16_t conn_id;
    uint16_t conn_bit;
    uint32_t flag;
} bt_sink_device_t;

typedef struct {
    uint8_t partymode;
    uint8_t state;
    int8_t aud_id;
    uint16_t conn_id;
    uint16_t write_len;
    uint32_t flag;
    bt_sink_device_t sink_dev[BT_SINK_CM_MAX_DEVICE_NUMBER];
} bt_sink_context_t;


void bt_sink_common_init(void);

bt_sink_context_t *bt_sink_get_context(void);

bt_sink_device_t *bt_sink_get_device(bt_sink_device_type_t type, const void *param);

void bt_sink_reset_device(bt_sink_device_t *dev);
#endif
