/**************************************************************************
* @copyright    :Copyright(C), 2018, pxf, person.
* @file         :csLedServ.h
* @author       :pxf
* @version      :v1.0
* @date         :2018/09/07 22:42:51
* @brief        :���csLedServ �����ࡢ����ࡢ�����������������ͷ�ļ�
* @others       :
* @history      :180907 pxf ���ν���
***************************************************************************/

#ifndef CSLEDSERV_H_
#define CSLEDSERV_H_

#include "../../01_std/std.h"
#include "../../06_cas/casSch/casSch.h"
#include "csLedServCfg.h"
#include "csLedServErrCode.h"

/***********************************************************
* �����ʼ��
***********************************************************/
/*��������ʼ��
* ����: ��
* ���: int16 0-�ɹ�,-1-ʧ��
***********************************************/
int16 vfbIcsLedServInit(void);

/*�����ʼ��
* ����: ��
* ���: int16 0-�ɹ�,-1-ʧ��
***********************************************/
int16 csLedServInit(void);

/*��������ʼ��
* ����: ��
* ���: int16 0-�ɹ�,-1-ʧ��
***********************************************/
int16 vfbOcsLedServInit(void);

/*���������ʼ���ⲿ����
* ����: ��
* ���: int16 0-�ɹ�,-1-ʧ��
***********************************************/
extern int16 vfbMcsLedServInit(void);


/***********************************************************
* �������
***********************************************************/
/*������е���
* ����: ��
* ���: ��
***********************************************/
void csLedServSch(void);


/***********************************************************
* ���������ͨ����������
***********************************************************/


/***********************************************************
* ��������ͨ����������
***********************************************************/


/***********************************************************
* �������ඨ��
***********************************************************/
/*������������
***********************************************/
CL(vfbOcsLedServ){
    hvfbOcsLedServ self;
    hvfbOcsLedServ (*init)(hvfbOcsLedServ cthis, void (*err)(hvfbOcsLedServ t, herrCode code));

    // �����������
    schParam schParam;    // ������Ȳ���
    //TODO

    // �������๦�ܺ���
    void (*err)(hvfbOcsLedServ t, herrCode code);
    //void (*output)(hvfbO%s t);
    //TODO
};

/*���������ⲿ�ӿ�����
* ������ʽ: �����+ʵ����+ʵ���๦��
***********************************************/
extern void vfbMcsLedServ_vfbOcsLedServ_err(hvfbOcsLedServ t, herrCode code);
//extern void vfbMcsLedServ_vfbOcsLedServ_output(hvfbOcsLedServ t);
//TODO

/*��������ʵ��
***********************************************/
extern vfbOcsLedServ vfbOcsLedServA;


/***********************************************************
* ����ඨ��
***********************************************************/
/*���״̬��״̬
* ������״̬init/default��״̬list����ʾ��Ĭ�ϸ���
* ״̬list�����ʵ��Ӧ�ý�����д��list�޸ĺ���Ӧ״̬�����ö�Ӧ�޸�
***********************************************/
#define SM_CSLEDSERV_STA_LIST(_) \
    _(smcsLedServ, sta1)\
    _(smcsLedServ, sta2)

/*���״̬������
***********************************************/
SMDC(smcsLedServ, SM_CSLEDSERV_STA_LIST){
    sta next;
    //TODO

    // ע�������
    void *csLedServ;
};


/*���������
***********************************************/
CL(csLedServ){
    hcsLedServ self;
    hcsLedServ (*init)(hcsLedServ cthis, hstaAct smcsLedServ, hvfbOcsLedServ vfbOcsLedServ);

    // �������״̬��
    smcsLedServRec smcsLedServRec;
    hstaAct smcsLedServ;

    // ���������ز���
    //TODO

    // ������й��ܺ���
    void (*run)(hcsLedServ t);
    //void (*example)(hcsLedServ t);
    //TODO

    // ������빦�ܺ���
    //void (*input)(hcsLedServ t);
    //TODO

    // ���������ܺ���
    void (*err)(hcsLedServ t, herrCode code);
    //void (*output)(hcsLedServ t);
    //TODO

    // ע���������༰����������
    INJ(vfbOcsLedServ, vfbOcsLedServ);
};

/*�첽���ȹ��ܺ���
* ������ʽ: �����+ʵ����+ʵ���๦��
* ֻ��cas����������д˺���
***********************************************/
//void csLedServ_abi_example(void);
//TODO

/*�����ʵ��
***********************************************/
extern csLedServ csLedServA;


/***********************************************************
* ��������ඨ��
***********************************************************/
/*�������������
***********************************************/
CL(vfbIcsLedServ){
    hvfbIcsLedServ self;
    hvfbIcsLedServ (*init)(hvfbIcsLedServ cthis, hcsLedServ csLedServ);

    // ��������๦�ܺ���
    //void (*input)(hvfbIcsLedServ t);
    //TODO

    // ע�������
    INJ(csLedServ, csLedServ);
};

/*���������ʵ��
***********************************************/
extern vfbIcsLedServ vfbIcsLedServA;


#endif /* CSLEDSERV_H_ */

/**************************** Copyright(C) pxf ****************************/