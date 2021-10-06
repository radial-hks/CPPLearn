using namespace std;
#include <iostream>
#include <string>

// ��ģ��
template<typename NameType, typename AgeType>
class Snake
{
public:
	Snake(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//~Snake();

	// չʾ�Լ�����Ϣ
	void ShowInfo()
	{
		cout << this->m_name << " " << this->m_age << endl;
	}
	NameType m_name;
	AgeType m_age;

};

//�� ������̳еĸ�����һ����ģ��ʱ������������ʱ��Ҫָ��������T�����ͣ�
class SmallSnake:public Snake<string,int>
{
//public:
	// SmallSnake()
	// ~SmallSnake();

};

//�� ����ָ�����������޷�����������ڴ棻
//�� ��������ָ��������T�е����ͣ�����Ҳ��Ҫ�����ģ�壻
template<typename T1,typename T2>
class BigSnake :public Snake<T1, T2>
{
//public:
	// BigSnake()
	// ~BigSnake();

};

void test_01()
{
	SmallSnake SS = SmallSnake('00',1); // ����е������
}

void test_02()
{
	BigSnake<string,int> BS;
}


int main()
{
	//����
	test_01();
	test_02();
	system("pause");
	return 0;
};