#include <iostream>
#include <stdlib.h>
#include <string.h>
//#include <>
using namespace std;
#define MAX 100
//�ṹ�嶨��
struct person
{
	string p_name;
	int  p_sex;//1Ϊ�� 2ΪŮ
	int  p_age;//����
	string p_phone;//�绰
	string p_addr;//��ַ
};
struct ContactBook
{
	struct person personArray[MAX];
	int m_Size;
};
//��������
void ShowMenu();
void AddPerson(ContactBook* cbs);