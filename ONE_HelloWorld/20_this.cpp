#include <iostream>;
using namespace std;

class Cat
{
public:
	Cat() 
	{
		// ���캯��
		
	};
	Cat(int weight)
	{
		// ���캯��
		// 1�����βκͳ�Ա����ͬ��ʱ������thisָ������������;
		this->weight = weight;

	};
	~Cat()
	{
		// ��������

	};
	
	void SetWeight(int weight)
	{
		// �Ǿ�̬��Ա����
		// 1�����βκͳ�Ա����ͬ��ʱ������thisָ������������;
		// ָ�򱻵��õĳ�Ա���������Ķ���
		this->weight = weight;

	};

	Cat& AddWeight(int num)
	{
		this->weight += num;
		// ��������
		return  *this;
	};
	int weight;

	
};

int main_11()
{
	// thisָ�룬����Ķ���ָ�룬ָ�򱻵��õĳ�Ա���������Ķ���
	// thisָ�룬����ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ�룻
	// thisָ�룬����Ҫ���壬ֱ��ʹ�ü��ɣ�

	// this ָ�����;:
	// 1�����βκͳ�Ա����ͬ��ʱ������thisָ������������;
	// 2������ķǾ�̬��Ա�����з��ض���������ʹ�� return *this;


	Cat cat = Cat(300);
	cat.AddWeight(100).AddWeight(100); // ��ʽ���

	system("pause");
	return 0;
}


// this ָ��ı��� : ָ�볣����ָ��ָ���ǲ������޸ĵ�
// Cat* const this 
// ������ֻ�ܵ��ó�������const ���εĺ�����


// ������
// 1.1 ��Ա���������const�����ǳ�֮Ϊ������;
// 1.2 �������ڲ����޸ĳ�Ա����;
// 1.3 ��Ա��������ʱ��� mutable���ڳ���������Ȼ�����޸�;

// ������
// 2.1 ��������ǰ�� const �Ƹö���Ϊ������
// 2.2 ������ֻ�ܵ��ó�������