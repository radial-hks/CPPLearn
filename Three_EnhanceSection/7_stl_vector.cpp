#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// 容器: vector
// 算法：for-each
// 迭代器: vector<int>::iterator

void PPrint(int val)
{
	cout << val << endl;
}

void test_01()
{
	// 创建一个vector容器，数组
	vector<int> v;
	// 向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 通过迭代器访问容器中的数据
	// 起始迭代器: 指向容器中的第一个元素；
	vector<int>::iterator itBengin = v.begin();
	// 结束迭代器: 指向容器中的最后元素的下一个元素；
	vector<int>::iterator itEnd = v.end();

	// 元素遍历
	// 方法一:
	while (itBengin != itEnd)
	{
		cout << *itBengin << endl;
		itBengin++;
	}
	// 方法二
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) 
	{
		cout << *it << endl;
	}
	// 方法三
	for_each(v.begin(), v.end(), PPrint);

}

//  自定义数据类型【类模板实现】
// 类模板
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

	// 展示自己的信息
	void ShowInfo()
	{
		// 打印自己的信息
		cout << this->m_name << " " << this->m_age << endl;
	}

	////类成员
	//string m_name;
	//int m_age;
	NameType m_name;
	AgeType m_age;

};

// 回调函数
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
	// 初始化数据
	Snake<string, int> snake_1 = Snake<string, int>("radial", 13);
	Snake<string, int> snake_2 = Snake<string, int>("radial", 14);
	Snake<string, int> snake_3 = Snake<string, int>("radial", 15);

	// 插入数据
	v.push_back(snake_1);
	v.push_back(snake_2);
	v.push_back(snake_3);

	// 遍历数据【自定义数据类型】
	for_each(v.begin(), v.end(), PPrint_Showinfo);
};


void test_03()
{
	vector<Snake<string, int>*> v; // 存放指针 
	// 初始化数据
	Snake<string, int> snake_1 = Snake<string, int>("radial", 13);
	Snake<string, int> snake_2 = Snake<string, int>("radial", 14);
	Snake<string, int> snake_3 = Snake<string, int>("radial", 15);

	// 插入数据
	v.push_back(&snake_1);
	v.push_back(&snake_2);
	v.push_back(&snake_3);

	// PPrint_Showinfo_(&snake_3); //测试的测试


	// 遍历数据【自定义数据类型】
	for_each(v.begin(), v.end(), PPrint_Showinfo_);
};

// vector<vector<int>> array; // 列表嵌套列表；

void  test_05()
{
	// vector 容量和大小

	// empty() // 是否为空
	// capacity() // 容器容量
	// size() //返回容器中的元素个数
	// resize(int num) // 重新指定容器长度，容器变长，默认值填充；变短，对应位置截取即可；
	// resize(int num,elem) // 重新指定容器长度，容器变长，指定元素填充；变短，对应位置截取即可；

	// vector 插入及删除

	// push_back(elem) // 尾部插入元素elem
	// pop_back() // 删除最后一个元素
	// insert( const_iterator pos, ele ); // 迭代器指向位置pos插入元素ele
	// insert( const_iterator pos, int count, ele) // 迭代器指向位置pos插入count个元素ele
	// erase(const_iterator pos) // 删除迭代器指向的元素
	// erase(const_iterator start, const_iterator end) // 删除迭代器指定区间的元素
	// clear() //删除容器中的所有元素

	// vector 数据存取

	// at(int idx) // 返回索引idx所指的数值
	// operator[] // 返回索引idx所指的数值
	// font() // 返回容器中第一个数据元素
	// back() // 返回容器中最后一个数据元素

	// vector 互换容器:实现两个容器内元素互换(收缩内存空间)
	// swap(vec); // 将vec与本身的元素互换; 
	// vector<int>(v).swap(v); // 匿名对象 拷贝构造函数


	// vector 预留空间: 减少vector在动态扩展容量时的扩展次数
	// reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问；
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
