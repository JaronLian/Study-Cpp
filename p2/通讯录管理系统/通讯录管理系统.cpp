#include  "contacts.h"

int main(){
	//ʵ��һ��ͨѶ¼����ϵͳ
	
	//��ʼ��
	ContactBook cbs;
	cbs.m_Size = 0;
	
	int MenuSelect;
	while (true) {
		ShowMenu();
		cin >> MenuSelect;
		switch (MenuSelect)
		{
		case 1://�����ϵ��
			AddPerson(&cbs);
			break;
		case 2:

			break;  
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 0:
			system("cls");
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		};
	};


	system("pause");
	return 0;
};