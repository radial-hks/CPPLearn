#include <iostream>;
using namespace std;
#include <string>; // �ַ������


// ���������: �����е�������������¶��壬������һ�ֹ��ܣ�����Ӧ��ͬ���������ͣ�

// 1���Ӻ����������
class OperatorAdd
{
public:
	 OperatorAdd();
	~ OperatorAdd();
	int number_a;
	int number_b;

	OperatorAdd operator+ (OperatorAdd &p) 
	{
		// ��Ա�������������
		OperatorAdd temp;
		temp.number_a = this->number_a + p.number_a;
		temp.number_b = this->number_b + p.number_b;
		return temp; // ����ֵ����
	};
	OperatorAdd operator+ (int number)
	{
		// ������������
		OperatorAdd temp;
		temp.number_a = this->number_a + number;
		// temp.number_b = this->number_b + p.number_b;
		return temp; // ����ֵ����
	};
	
};

// 2��ȫ�ֺ������������
//OperatorAdd operator+(OperatorAdd p1,OperatorAdd p2) 
//{
//	OperatorAdd temp;
//	temp.number_a = p1.number_a + p2.number_a;
//	temp.number_b = p1.number_b + p2.number_b;
//	return temp;
//};

//void operator<<(ostream &cout, OperatorAdd p) 
//{
//	cout << p.number_a << "||" << p.number_b << endl;
//}; 

ostream& operator<<(ostream& cout, OperatorAdd p)
{
	cout << p.number_a << "||" << p.number_b << endl;
	return cout;
};

 OperatorAdd:: OperatorAdd()
{
	 number_a = 100;
	 number_b = 300;
}

 OperatorAdd::~ OperatorAdd()
{
}

int main_13()
{
	// ��Ա������������صı���;
	OperatorAdd p1, p2;
	OperatorAdd p3 = p1.operator+(p2);
	OperatorAdd p4 = p1 + p2;
	cout << p4.number_a << endl;

	// ȫ�ֺ�����������صı���
	//OperatorAdd p5 = operator+(p1,p2);
	//OperatorAdd p5 = p1 + p2;

	// ���������Ҳ���Է�����������
	OperatorAdd p6 = p1 + 100;

	// ��������� 
	// �����������������ʵ������Զ�����������;
	cout << p6;
	cout << p6 << p6;

	return 0;

	// �������õ��������͵ı��ʽ��������ǲ����ܸı��;
	// ��Ҫ�������������;
}