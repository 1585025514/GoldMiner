#ifndef _H_//��ֹ�ظ�����
#define _H_
#include<easyx.h>//����ͼ�ο�ͷ�ļ�
#include<stdio.h>
#include<math.h>
#include<time.h>
#pragma comment(lib,"WINMM.LIB")// ���� Windows Multimedia API
#define IMAGE_MAX 21//ͼƬ����
#define GAME_WIDTH 980
#define GAME_HEIGHT 710
#define MINE_NUM 15//��Ʒ����
#define MAX_ANGLE 80//���Ƕ�
#define PI 3.14592653
struct Role {//��ɫ
	int x;//λ��
	int y;
	int width;
	int height;
	int coin;
	char name[10];
}role;
enum MINE {//ͼƬ�����±�
	littlegold = 1,
	midgold = 3,
	biggold = 5,
	littlestone = 7,
	bigstone = 9,
	money = 11,
	diamond = 13,
	role_down = 15,
	role_up = 17,
	over = 18,
	bk = IMAGE_MAX - 1,
};
struct Mine {//��
	int x;
	int y;
	bool flag;//��Ʒ�Ƿ����
	int gold;//��Ʒ��ֵ
	int sizex;//��Ʒ���
	int sizey;//��Ʒ�߶�
	int type;//��Ʒ���ͣ�Ǯ������飬ʯͷ
	int weight;//����
};
struct Hook {
	int x;//���������������
	int y;
	int len;
	int endx;//����ĩ������
	int endy;
	int vx;//�ٶȷ���
	int vy;
	int angle;
	int dir;//���Ӱڶ�����
	int state;//����״̬���쳤�����̡�����
	//bool swing;//�����Ƿ��ڰڶ�
	int index;//ץ������Ʒ���±�
}hook;
enum MINE_TYPE {
	//��Ʒ����
	LITTLEGOLD,
	MIDGOLD,
	BIGGOLD,
	LITTLESTONE,
	BIGSTONE,
	MONEY,
	DIAMOND,
	//���Ӱڶ�����
	LEFT,
	RIGHT,
	//����״̬
	M_NORMAL,
	M_LONG,
	M_SHORT,
};
#endif