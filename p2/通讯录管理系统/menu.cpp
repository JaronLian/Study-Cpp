#include "contacts.h"

void ShowMenu() {
	system("cls");
	cout << "************************************" << endl;
	cout << "************1.�����ϵ��************" << endl;
	cout << "************2.��ʾ��ϵ��************" << endl;
	cout << "************3.ɾ����ϵ��************" << endl;
	cout << "************4.������ϵ��************" << endl;
	cout << "************5.�޸���ϵ��************" << endl;
	cout << "************6.�����ϵ��************" << endl;
	cout << "************0.�˳�ͨѶ¼************" << endl;
	cout << "************************************" << endl;

};
void AddPerson(ContactBook *cbs) {
	system("cls");

	if (cbs->m_Size == MAX){
		cout << "�绰���������޷����" << endl;
		return;
	}
	else {
		string name;
		int sex=0;
		int age=0;
		string phone="";
		string addr="";
		int index = cbs->m_Size;
		cout << "��������" << endl;
		cin >> name;
		cbs->personArray[index].p_name = name;

		cout << "�����Ա�(1Ϊ�� 2ΪŮ)" << endl;
		cin >> sex;
		while (sex > 2 || sex < 0) {
			cout << "���������Ա�(1Ϊ�� 2ΪŮ)" << endl;
			cin >> sex;
		};
		cbs->personArray[index].p_sex = sex;

		cout << "��������" << endl;
		cin >> age;
		cbs->personArray[index].p_age = age;

		cout << "����绰" << endl;
		cin >> phone;
		cbs->personArray[index].p_phone = phone;
		
		cout << "�����ַ" << endl;
		cin >> addr;
		cbs->personArray[index].p_addr = addr;
		cbs->m_Size++;
		cout << "������" << endl;
		system("pause");
		return;
	}

};