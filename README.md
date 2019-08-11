# THE PROJECT JUNBIAN
## 多功能声控物联网小夜灯


~~完成可云端控制，物理声音控制的亚克力灯芯~~

__项目目的__
-  1、STM32部分
- 2、RT_thread部分
-  3、PCB电路部分
---

__产品特色：可自动识别的可更换亚克力灯芯__
可根据用户喜好定制方案，以下是预设方案
亚克力灯芯_name|控制标准|可替换|随机语种
---|:--:|:--:|---:|
孙笑川|声控/APP控制|OK|O
刘波|声控/APP控制|OK|X




---

```
        rt_pin_mode(ESP28661, PIN_MODE_OUTPUT);
	rt_pin_write(ESP28661, PIN_HIGH);
	
	

        static rt_device_t serial;              /* 串口设备句柄 */    
/* 查找串口设备 */
        serial = rt_device_find(SAMPLE_UART_NAME);
	rt_device_open(serial, RT_DEVICE_FLAG_INT_RX);	
```
