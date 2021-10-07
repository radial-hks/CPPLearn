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

void  test_05()
{
	// vector �����ʹ�С

	// empty() // �Ƿ�Ϊ��
	// capacity() // ��������
	// size() //���������е�Ԫ�ظ���
	// resize(int num) // ����ָ���������ȣ������䳤��Ĭ��ֵ��䣻��̣���Ӧλ�ý�ȡ���ɣ�
	// resize(int num,elem) // ����ָ���������ȣ������䳤��ָ��Ԫ����䣻��̣���Ӧλ�ý�ȡ���ɣ�

	// vector ���뼰ɾ��

	// push_back(elem) // β������Ԫ��elem
	// pop_back() // ɾ�����һ��Ԫ��
	// insert( const_iterator pos, ele ); // ������ָ��λ��pos����Ԫ��ele
	// insert( const_iterator pos, int count, ele) // ������ָ��λ��pos����count��Ԫ��ele
	// erase(const_iterator pos) // ɾ��������ָ���Ԫ��
	// erase(const_iterator start, const_iterator end) // ɾ��������ָ�������Ԫ��
	// clear() //ɾ�������е�����Ԫ��

	// vector ���ݴ�ȡ

	// at(int idx) // ��������idx��ָ����ֵ
	// operator[] // ��������idx��ָ����ֵ
	// font() // ���������е�һ������Ԫ��
	// back() // �������������һ������Ԫ��

	// vector ��������:ʵ������������Ԫ�ػ���(�����ڴ�ռ�)
	// swap(vec); // ��vec�뱾���Ԫ�ػ���; 
	// vector<int>(v).swap(v); // �������� �������캯��


	// vector Ԥ���ռ�: ����vector�ڶ�̬��չ����ʱ����չ����
	// reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʣ�
}

int main()
{
	// ����
	test_01();
	test_02();
	test_03();

	system("pause");
	return 0;
}
