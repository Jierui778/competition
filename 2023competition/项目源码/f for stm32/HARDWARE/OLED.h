#ifndef __OLED_H
#define __OLED_H
#include "sys.h"

#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
/*引脚配置*/
//#define OLED_W_SCL(x)		GPIO_WriteBit(GPIOB, GPIO_Pin_8, (BitAction)(x))
//#define OLED_W_SDA(x)		GPIO_WriteBit(GPIOB, GPIO_Pin_9, (BitAction)(x))
#define OLED_SCL_Clr() GPIO_ResetBits(GPIOA,GPIO_Pin_0)//SCL
#define OLED_SCL_Set() GPIO_SetBits(GPIOA,GPIO_Pin_0)

#define OLED_SDA_Clr() GPIO_ResetBits(GPIOA,GPIO_Pin_1)//DIN
#define OLED_SDA_Set() GPIO_SetBits(GPIOA,GPIO_Pin_1)

void OLED_Init(void);//OLED初始化
void OLED_Clear(void);//OLED清屏
void OLED_Refresh(void);
void OLED_ColorTurn(uint8_t i);//OLED颜色反转
void OLED_DrawPoint(uint8_t x, uint8_t y, uint8_t mode);//OLED画点
void OLED_ClearPoint(uint8_t x, uint8_t y);//OLED清除一个点
void OLED_DrawLine(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t mode);//OLED画线
void OLED_ShowChar(uint8_t Line, uint8_t Column, char Char); //显示一个字符
void OLED_ShowString(uint8_t Line, uint8_t Column, char *String);
void OLED_ShowNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowSignedNum(uint8_t Line, uint8_t Column, int32_t Number, uint8_t Length);
void OLED_ShowHexNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowBinNum(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);

#endif
