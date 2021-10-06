#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// ����: vector
// �㷨��for-each
// ������: vector<int>::iterator

void PPrint(int val)
{
	cout << val << endl;
}

void test_01()
{
	// ����һ��vector����������
	vector<int> v;
	// �������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// ͨ�����������������е�����
	// ��ʼ������: ָ�������еĵ�һ��Ԫ�أ�
	vector<int>::iterator itBengin = v.begin();
	// ����������: ָ�������е����Ԫ�ص���һ��Ԫ�أ�
	vector<int>::iterator itEnd = v.end();

	// Ԫ�ر���
	// ����һ:
	while (itBengin != itEnd)
	{
		cout << *itBengin << endl;
		itBengin++;
	}
	// ������
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) 
	{
		cout << *it << endl;
	}
	// ������
	for_each(v.begin(), v.end(), PPrint);

}

//  �Զ����������͡���ģ��ʵ�֡�
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

// �ص�����
void PPrint_Showinfo(Snake<string, int> s) 
{
	s.ShowInfo();
}

void PPrint_Showinfo_(Snake<string, int> *s)
{
	s->ShowInfo();
}

void test_02()
{
	vector<Snake<string,int>> v;
	// ��ʼ������
	Snake<string, int> snake_1 = Snake<string, int>("radial", 13);
	Snake<string, int> snake_2 = Snake<string, int>("radial", 14);
	Snake<string, int> snake_3 = Snake<string, int>("radial", 15);

	// ��������
	v.push_back(snake_1);
	v.push_back(snake_2);
	v.push_back(snake_3);

	// �������ݡ��Զ����������͡�
	for_each(v.begin(), v.end(), PPrint_Showinfo);
};


void test_03()
{
	vector<Snake<string, int>*> v; // ���ָ�� 
	// ��ʼ������
	Snake<string, int> snake_1 = Snake<string, int>("radial", 13);
	Snake<string, int> snake_2 = Snake<string, int>("radial", 14);
	Snake<string, int> snake_3 = Snake<string, int>("radial", 15);

	// ��������
	v.push_back(&snake_1);
	v.push_back(&snake_2);
	v.push_back(&snake_3);

	// PPrint_Showinfo_(&snake_3); //���ԵĲ���


	// �������ݡ��Զ����������͡�
	for_each(v.begin(), v.end(), PPrint_Showinfo_);
};

// vector<vector<int>> array; // �б�Ƕ���б�

int main()
{
	// ����
	test_01();
	test_02();
	test_03();

	system("pause");
	return 0;
}
