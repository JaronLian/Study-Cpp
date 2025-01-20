#include <iostream>
#include <stdlib.h>
#include <string.h>
//#include <>
using namespace std;
#define MAX 100
//结构体定义
struct person
{
	string p_name;
	int  p_sex;//1为男 2为女
	int  p_age;//年龄
	string p_phone;//电话
	string p_addr;//地址
};
struct ContactBook
{
	struct person personArray[MAX];
	int m_Size;
};
//函数定义
void ShowMenu();
void AddPerson(ContactBook* cbs);