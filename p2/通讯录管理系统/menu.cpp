#include "contacts.h"

void ShowMenu() {
	system("cls");
	cout << "************************************" << endl;
	cout << "************1.添加联系人************" << endl;
	cout << "************2.显示联系人************" << endl;
	cout << "************3.删除联系人************" << endl;
	cout << "************4.查找联系人************" << endl;
	cout << "************5.修改联系人************" << endl;
	cout << "************6.清空联系人************" << endl;
	cout << "************0.退出通讯录************" << endl;
	cout << "************************************" << endl;

};
void AddPerson(ContactBook *cbs) {
	system("cls");

	if (cbs->m_Size == MAX){
		cout << "电话本已满，无法添加" << endl;
		return;
	}
	else {
		string name;
		int sex=0;
		int age=0;
		string phone="";
		string addr="";
		int index = cbs->m_Size;
		cout << "输入姓名" << endl;
		cin >> name;
		cbs->personArray[index].p_name = name;

		cout << "输入性别(1为男 2为女)" << endl;
		cin >> sex;
		while (sex > 2 || sex < 0) {
			cout << "重新输入性别(1为男 2为女)" << endl;
			cin >> sex;
		};
		cbs->personArray[index].p_sex = sex;

		cout << "输入年龄" << endl;
		cin >> age;
		cbs->personArray[index].p_age = age;

		cout << "输入电话" << endl;
		cin >> phone;
		cbs->personArray[index].p_phone = phone;
		
		cout << "输入地址" << endl;
		cin >> addr;
		cbs->personArray[index].p_addr = addr;
		cbs->m_Size++;
		cout << "添加完成" << endl;
		system("pause");
		return;
	}

};