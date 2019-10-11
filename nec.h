#ifndef _NEC_H_
#define _NEC_H_

#include "stm32f10x.h"
#include "sys.h"

#define NEC_IN PBin(9)//解码使用
#define NEC_OUT PCout(3)//编码使用

void NEC_Init(void);
void NEC_Enconde_Init(void);
void NEC_Send_Data(u8 user,u8 key);

extern u8 NEC_FLAG;//0代表没有接收到 1代表接收完成
extern u8 NEX_RX_BUFF[];
void NEC_Init(void);

#endif
