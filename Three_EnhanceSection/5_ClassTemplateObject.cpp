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


//��ģ������������Ĳ������뷽ʽ
//1��ָ�����������-- - ֱ����ʾ������������ͣ�
void Show_01(Snake<string, int> &s) 
{
	s.ShowInfo();
};
void test_01()
{
	Snake<string, int> snake("radial", 13);
	Show_01(snake);
}
// 2������ģ�廯-- - �������еĲ�����Ϊģ����д��ݣ�
template <typename T1, typename T2>
void Show_02(Snake<T1, T2>& s)
{
	//typeid(T1).name() // �鿴��������
	s.ShowInfo();
};

void test_02() 
{
	Snake<string, int> snake("radial_01", 14);
	Show_02<string, int>(snake);
}

//3��������ģ�廯-- - �������������ģ�廯���д��ݣ�
template <typename T3>
void Show_03(T3& s)
{
	s.ShowInfo();
};

void test_03()
{
	Snake<string, int> snake("radial_02", 15);

	Show_03(snake); //  ��ʽ�Ƶ�
	Show_03<Snake<string, int>>(snake); // ��ʾָ������
}

int main()
{
	//����
	test_01();
	test_02();
	test_03();
	system("pause");
	return 0;
};