#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <deque>
using namespace std;


void PPrint(const deque<int> &d) // 对该容器只读操作
{
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) 
	{
		// * i = 100；// 防止修改
		cout << *i << endl;
	}
	cout << "-----------------------" << endl;
}

void test_01()
{
	// 构造函数
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PPrint(d1);

	// 区域赋值
	deque<int> d2(d1.begin(),d1.end());
	PPrint(d2);

	// n 个值
	deque<int> d3(10, 1000);
	PPrint(d3);

	// 拷贝构造
	deque<int> d4(d3);
	PPrint(d4);
}

void test_02()
{
	// 赋值操作
	
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
	
	// - void assign( InputIt first, InputIt last ); // 起始与结尾元素
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	PPrint(d3);

	
}


void test_03()
{
	// 大小操作

	// empty() // 是否为空
	// size() //返回容器中的元素个数
	// resize(int num) // 重新指定容器长度，容器变长，默认值填充；变短，对应位置截取即可；
	// resize(int num,elem) // 重新指定容器长度，容器变长，指定元素填充；变短，对应位置截取即可；

	// 插入与删除
	
	// push_back(elem) // 尾部插入元素elem
	// pop_back() // 删除最后一个元素
	// push_font(elem) // 头部插入元素elem
	// pop_font() // 删除第一个元素
	// insert( const_iterator pos, ele ); // 迭代器指向位置pos插入元素ele，返回新元素的位置;
	// insert( const_iterator pos, int count, ele) // 迭代器指向位置pos插入count个元素ele, 无返回值;
	// insert(const_iterator pos, begin, end) // 迭代器指向位置pos插入[begin,end)区间的数据, 无返回值;
	// erase(const_iterator pos) // 删除迭代器指向的元素,返回下一个数据的位置；
	// erase(const_iterator start, const_iterator end) // 删除迭代器指定区间的元素，返回下一个元素的位置; 
	// clear() //删除容器中的所有元素

	// 数据存取
	
	// at(int idx) // 返回索引idx所指的数值
	// operator[] // 返回索引idx所指的数值
	// font() // 返回容器中第一个数据元素
	// back() // 返回容器中最后一个数据元素

	// 排序
	// sort(iterator begin，iterator end);  // 对beg与end之间的元素进行排序；
}

int main()
{
	// 测试
	test_01();
	test_02();
	test_03();

	system("pause");
	return 0;
}
