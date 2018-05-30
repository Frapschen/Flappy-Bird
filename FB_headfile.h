#pragma once
#ifndef _FB_HEADFILE_H
#define _FB_HEADFILE_H
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include <time.h>
#include "windows.h"
#include <iostream>
#include <thread>
#include <graphics.h>     
#define PI 3.1415926535
//bird����
struct Bird
{
	int birdhigh;
	int birdpicture;
	int number;
	float flow;
	float up;
	
};
//��Ϸ�е�ͼƬ
typedef struct Picture
{
	IMAGE birdpt[3][2];//birdͼƬ
	IMAGE bandpt[5][2];//�ϰ���ͼƬ
	IMAGE backgroundpt;//����ͼƬ
	IMAGE landpt;//�·������ƶ�����
	IMAGE big_num[10][2];//��ŵ�����
	IMAGE mid_num[10][2];//�к�����
	IMAGE sm_num[10];//С������
	IMAGE gametitle[2];//��Ϸ�ı���
	IMAGE getready[2];//׼���׶α���
	/*���еİ�ť�͵÷���� 
		0:button_play; 1:button_score; 
		2:tutorial.jpg; 3��score_panel*/
	IMAGE button[4][2];
	IMAGE copyright[2];//��ʼ����İ�Ȩ����
	IMAGE medals[4][2];//����
	IMAGE gameover[2];//��Ϸ����
	IMAGE newscore;//���µĸ߷�
};
//��Ϸ����
typedef struct Data
{
	int landdata;//�·��ƶ�����
	//�ϰ��� 0���ϰ����x���꣬1�����ϰ����y���� 2���·��ϰ���y����
	int banddata[5][3];
	int nowscore;//���ε÷�
	int speed;//�ƶ��ٶ�
	int oldscore[3];//0��һ��1�ڶ���2����
	int scoreblock;//������
	bool life;//bird�Ƿ���
	Bird bird;//bird����
};
void initdata(Data &data);//��ʼ����Ϸ����
void birdct(Data &data);// bird����
bool play();//��ʼ��Ϸ
void databack(Data &data);//���ݴ���
void gamestartmenu(Picture picture, Data data);//���ƿ�ʼ����
void getread(Picture picture,Data data);//����getready����
void picturedeal(Picture &picture,int n);//��ϷͼƬ������������ת�� n=1 �Ǽ���ͼƬ
void drowpicture(Picture picture, Data data);//������Ϸ����
void collision(Data &data);//��ײ
void scorepanl(Picture picture,Data &data);//�÷����
void changeband(Data &data, int n);//�ı��ϰ����Y������
using namespace std;
#endif

// _FB_HEADFILE_H