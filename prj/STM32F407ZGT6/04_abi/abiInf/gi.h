/**************************************************************************
* @copyright    :Copyright(C), 2018, pxf, person.
* @file         :gi.h
* @author       :pxf
* @version      :v1.0
* @date         :2018/09/01 16:25:01
* @brief        :GIO����ӿڳ���������
* @others       :
* @history      :180901 pxf ���ν���
***************************************************************************/

#ifndef GI_H_
#define GI_H_

/***********************************************************
* GIO����ӿڳ����ඨ��
***********************************************************/
/*GIO����ӿڳ�������������
***********************************************/
CL(gi)
{
    hgi self;
    hgi (*init)(hgi cthis, uint16 (*get)(void));

    IMPL(iGi);
};

#endif /* GI_H_ */

/**************************** Copyright(C) pxf ****************************/