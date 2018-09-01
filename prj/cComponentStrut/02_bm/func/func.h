/**************************************************************************
* @copyright    :Copyright(C), 2018, pxf, person.
* @file         :func.h
* @author       :pxf
* @version      :v1.0
* @date         :2018/08/31 20:52:28
* @brief        :���ܺ�������
* @others       :
* @history      :180831 pxf ���ν���
***************************************************************************/

#ifndef FUNC_H_
#define FUNC_H_

#include "..\..\01_std\std.h"

// ��ͨ�˲�(Low-pass filter)
// a=0-1�������˲����=(1-a)*���β���ֵ+a*�ϴ��˲����
// Y(n) = ��X(n)+(1-��)Y(n-1)
// Ϊ���Ż�����Ч�ʣ�aֻȡ1/(2^N)����СֵΪ1/2
// Y(n)= (1/(2^N))X(n)+(1-(1/(2^N)))Y(n-1)
//     = (X(n)+((2^N)-1)Y(n-1))/(2^N)
#define lowpassFilter(newValue, lastValue, n)  (((newValue) + (((lastValue) << (n)) - (lastValue))) >> (n))

#endif /* FUNC_H_ */

/**************************** Copyright(C) pxf ****************************/