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
		// ��ӡ�Լ�����Ϣ
		cout << this->m_name << " " << this->m_age << endl;
	}

	////���Ա
	//string m_name;
	//int m_age;
	NameType m_name;
	AgeType m_age;

};


void test_o1()
{
	// ʵ������ģ��Ĳ����б�
	Snake<string, int> snake = Snake<string,int>("radial", 13);
	// Snake<string, int> snake_01("radial", 13); // ���ŷ� 
	snake.ShowInfo();
}

int main() 
{
	//����
	test_o1();
	system("pause");
	return 0;
};