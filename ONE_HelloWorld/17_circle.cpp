#include <iostream>;
using namespace std;

const double PI = 3.14;

// ���Բ�࣬��Բ���ܳ�

class Circle
{
public:
	Circle(double r);
	~Circle();

	double radius;
	double calculateZC()
	{
		return 2 * PI * radius;
	}
};

// ���캯��
// ��Ĺ��캯�������һ������ĳ�Ա������������ÿ�δ�������¶���ʱִ�С�
// ���캯���������������������ȫ��ͬ�ģ����Ҳ��᷵���κ����ͣ�Ҳ���᷵�� 
// void�����캯��������ΪĳЩ��Ա�������ó�ʼֵ��
// ��ʼ���б�: https://www.runoob.com/cplusplus/cpp-constructor-destructor.html
Circle::Circle(double r)
{
	radius = r;
	cout << "Object is being created" << endl;
}

// �������� 
// ���������������������������ȫ��ͬ�ģ�ֻ����ǰ����˸����˺ţ�~��
// ��Ϊǰ׺�������᷵���κ�ֵ��Ҳ���ܴ����κβ���������������������
// �������򣨱���ر��ļ����ͷ��ڴ�ȣ�ǰ�ͷ���Դ��
Circle::~Circle()
{
	cout << "Object is being deleted" << endl;
}



int main_8()
{
	// ʵ��������,��������,ʹ����Ϊ;
	Circle cc(9);
	// cc.radius = 10;
	cout << "cc ���ܳ�:" << cc.calculateZC() << endl;


	system("pause");
	return 0;
}