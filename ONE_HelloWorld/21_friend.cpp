#include <iostream>;
using namespace std;
#include <string>; // �ַ������

// ��Ԫ����һ�����������࣬������һ�����е�˽�г�Ա, �ؼ���: friend
// ��Ԫ������ʵ��:
// 1��ȫ�ֺ�������Ԫ��
// 2��������Ԫ��
// 3����Ԫ������

class Building
{
	// 1��ȫ�ֺ�������Ԫ
	friend void GoodGuy(Building* building); // ȫ�ֺ���������
public:
	Building() 
	{
		Sittingroom = "����";
		Bedroom = "����";
	};
public:
	string Sittingroom;

private:
	string Bedroom;

};

void GoodGuy(Building* building)
{
	cout << "���ʿ���" << building->Sittingroom << endl;
	cout << "���ʿ���" << building->Bedroom << endl;
};

int main_12()
{
	// 
	Building b;
	GoodGuy(&b);
	system("pause");
	return 0;
}

