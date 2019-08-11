/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-5      SummerGift   first version
 */
 
#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>



#define LED0_PIN    GET_PIN(B, 1)
#define LED0_PINE   GET_PIN(B, 0)
#define ESP2866     GET_PIN(B, 8)
#define ESP28661     GET_PIN(B, 9)
#define SAMPLE_UART_NAME       "uart3"  /* 串口设备名称 */

#define urat           GET_PIN(B, 10)
#define urta           GET_PIN(B, 11)


int main(void)
{
    int count = 1;
	

	rt_pin_mode(ESP2866, PIN_MODE_OUTPUT);
	rt_pin_write(ESP2866, PIN_HIGH);
	
	rt_pin_mode(ESP28661, PIN_MODE_OUTPUT);
	rt_pin_write(ESP28661, PIN_HIGH);
	
	

  static rt_device_t serial;              /* 串口设备句柄 */    
/* 查找串口设备 */
  serial = rt_device_find(SAMPLE_UART_NAME);
	rt_device_open(serial, RT_DEVICE_FLAG_INT_RX);
	
	

    /* set LED0 pin mode to output */
//    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
//	
//	  rt_pin_mode(LED0_PINE, PIN_MODE_OUTPUT);

//    while (count++)
//    {
//        rt_pin_write(LED0_PIN, PIN_HIGH);
//        rt_thread_mdelay(500);
//        rt_pin_write(LED0_PIN, PIN_LOW);
//        rt_thread_mdelay(500);
//		rt_pin_write(LED0_PINE, PIN_HIGH);
//        rt_thread_mdelay(500);
//        rt_pin_write(LED0_PINE, PIN_LOW);
//        rt_thread_mdelay(500);
//			  
//    }

    return RT_EOK;
}
