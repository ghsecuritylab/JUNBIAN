# THE PROJECT JUNBIAN


~~完成可云端控制，物理声音控制的亚克力灯芯~~

####项目目的
-  1、STM32部分
- 2、RT_thread部分
-  3、PCB电路部分
---

亚克力灯芯_name|控制标准|可替换
---|:--:|---:
孙笑川|特殊语音|OK
刘波|特殊语音|OK

(```)
	rt_pin_mode(ESP28661, PIN_MODE_OUTPUT);
	rt_pin_write(ESP28661, PIN_HIGH);
	
	

  static rt_device_t serial;              /* 串口设备句柄 */    
/* 查找串口设备 */
  serial = rt_device_find(SAMPLE_UART_NAME);
	rt_device_open(serial, RT_DEVICE_FLAG_INT_RX);
	
(```)
