#include <iostream>
using namespace std;

int main_5()
{
	// ��֧�ṹ
	// 1��һ����֧�ṹ
	int score = 520;
	if ( score > 600)
	{
		cout << "��ϲ�㣬ͨ����������" << endl;
	}
	else 
	{
		cout << "��սһ��" << endl;
	}
	// 2�� ���֧�ṹ
	if (1)
	{
		cout << "��ϲ�㣬ͨ����������" << endl;
	} 
	else if(1)
	{
		cout << "��ϲ�㣬ͨ����������" << endl;
	}
	else 
	{
		cout << "��սһ��" << endl;
	}
	// 3����Ŀ����� �� ���ʽ1 ? ���ʽ2: ���ʽ3
	// ��Ŀ��������ص��Ǳ��������Լ�����ֵ�� 
	1 ? cout << "---1---" << endl : cout << "---0---" << endl;

	// 4�� switch �ƶ����������
	int a = 1;
	switch (a)
	{
	case 1:
		cout << "��սһ��" << endl;
		break;
	case 2:
		cout << "��սһ��" << endl;
		break;
	case 3:
		cout << "��սһ��" << endl;
		break;
	case 4:
		cout << "��սһ��" << endl;
		break;
	default:
		break;
	}

	// ѡ��ṹ
	
	// ѭ���ṹ
	while (true)
	{
		break;
	};

	// for(��ʼ���ʽ;�������ʽ;ĩβѭ����){ѭ�����}
	for (int i = 0; i < 10; i++) 
	{
		i++;
	}

	// ����ִ��һ��;
	do 
	{
		cout << "��սһ��" << endl;
	} while (0);



	// cout << "hello world" << endl;


	system("pause");
	return 0;
}
