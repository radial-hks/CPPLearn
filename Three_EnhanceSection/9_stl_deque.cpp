#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <deque>
using namespace std;


void PPrint(const deque<int> &d) // �Ը�����ֻ������
{
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) 
	{
		// * i = 100��// ��ֹ�޸�
		cout << *i << endl;
	}
	cout << "-----------------------" << endl;
}

void test_01()
{
	// ���캯��
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PPrint(d1);

	// ����ֵ
	deque<int> d2(d1.begin(),d1.end());
	PPrint(d2);

	// n ��ֵ
	deque<int> d3(10, 1000);
	PPrint(d3);

	// ��������
	deque<int> d4(d3);
	PPrint(d4);
}

void test_02()
{
	// ��ֵ����
	
	// - deque& operator=( deque&& other );
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	deque<int> d2;
	d2 = d1;
	PPrint(d2);
	
	// - void assign( size_type count, const T& value );
	deque<int> characters;
	characters.assign(5, 6);
	PPrint(characters);
	
	// - void assign( InputIt first, InputIt last ); // ��ʼ���βԪ��
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	PPrint(d3);

	
}


void test_03()
{
	// ��С����

	// empty() // �Ƿ�Ϊ��
	// size() //���������е�Ԫ�ظ���
	// resize(int num) // ����ָ���������ȣ������䳤��Ĭ��ֵ��䣻��̣���Ӧλ�ý�ȡ���ɣ�
	// resize(int num,elem) // ����ָ���������ȣ������䳤��ָ��Ԫ����䣻��̣���Ӧλ�ý�ȡ���ɣ�

	// ������ɾ��
	
	// push_back(elem) // β������Ԫ��elem
	// pop_back() // ɾ�����һ��Ԫ��
	// push_font(elem) // ͷ������Ԫ��elem
	// pop_font() // ɾ����һ��Ԫ��
	// insert( const_iterator pos, ele ); // ������ָ��λ��pos����Ԫ��ele��������Ԫ�ص�λ��;
	// insert( const_iterator pos, int count, ele) // ������ָ��λ��pos����count��Ԫ��ele, �޷���ֵ;
	// insert(const_iterator pos, begin, end) // ������ָ��λ��pos����[begin,end)���������, �޷���ֵ;
	// erase(const_iterator pos) // ɾ��������ָ���Ԫ��,������һ�����ݵ�λ�ã�
	// erase(const_iterator start, const_iterator end) // ɾ��������ָ�������Ԫ�أ�������һ��Ԫ�ص�λ��; 
	// clear() //ɾ�������е�����Ԫ��

	// ���ݴ�ȡ
	
	// at(int idx) // ��������idx��ָ����ֵ
	// operator[] // ��������idx��ָ����ֵ
	// font() // ���������е�һ������Ԫ��
	// back() // �������������һ������Ԫ��

	// ����
	// sort(iterator begin��iterator end);  // ��beg��end֮���Ԫ�ؽ�������
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
