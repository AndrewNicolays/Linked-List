#include <iostream>
#include "MyList.h"

using namespace std;

int main()
{
	MyList list;
	int num = 0;
	int mydate = 0;
	int update = 0;
	pNode head = list.CreateNode();

	while (1) {
		cout << "****************************" << endl;
		cout << "1.���ӽڵ�" << endl;
		cout << "2.ɾ���ڵ�" << endl;
		cout << "3.�޸Ľڵ�" << endl;
		cout << "4.��������" << endl;
		cout << "5.��ת����" << endl;
		cout << "6.��������" << endl;
		cout << "7.�˳�����" << endl;
		cout << "****************************" << endl;
		cout << "please input your select:" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "please input insert node data:" << endl;
			cin >> mydate;
			list.InsertNode(head, mydate);
			break;
		case 2:
			cout << "please input delete node data:" << endl;
			cin >> mydate;
			list.DeleteNode(head, mydate);
			break;
		case 3:
			cout << "please input updata node data:" << endl;
			cin >> mydate;
			cout << "please input updata  data:" << endl;
			cin >> update;
			list.UpdateNode(head, mydate, update); 
				break;
		case 4:list.Each(head); break;
		case 5:list.Reversla(head); break;

		case 6:
			cout << "please input find node data:" << endl;
			cin >> mydate; 
			list.IndexNode(head, mydate); break;
		case 7:return 0;
		default:cout << "please input valid data!!!" << endl; break;
		}
	}
	return 0;
}
