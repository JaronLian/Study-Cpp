#include  "contacts.h"

int main(){
	//实现一个通讯录管理系统
	
	//初始化
	ContactBook cbs;
	cbs.m_Size = 0;
	
	int MenuSelect;
	while (true) {
		ShowMenu();
		cin >> MenuSelect;
		switch (MenuSelect)
		{
		case 1://添加联系人
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
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		};
	};


	system("pause");
	return 0;
};