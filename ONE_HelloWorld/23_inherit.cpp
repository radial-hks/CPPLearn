#include <iostream>;
using namespace std;
#include <string>;

// ����
class Animal
{
public:
	Animal();
	~Animal();
	int age = 10;
private:
	int weidgt = 10;

protected:
	int height = 10;

};

Animal::Animal()
{
}

Animal::~Animal()
{
}

// ������

class Pig : public Animal
{
public:
	void func() 
	{
		age = 100; // ����Ȩ�ޣ�����Կɷ��ʣ�
		// weidgt = 100; // ��Ȩ���޸�
		height = 100; // ����Ȩ�ޣ����ڿɷ��ʣ������ⲻ�У�
	};
};

class Cat : private Animal
{
public:
	void func()
	{
		age = 100; // ˽��Ȩ�ޣ����ڿɷ��ʣ������ⲻ�У�
		// weidgt = 100; // ��Ȩ���޸�
		height = 100; // ˽��Ȩ�ޣ����ڿɷ��ʣ������ⲻ�У�
	};
};

class Dog : protected Animal
{
public:
	void func()
	{
		age = 100; // ����Ȩ�ޣ����ڿɷ��ʣ������ⲻ�У�
		// weidgt = 100; // ��Ȩ���޸�
		height = 100; // ����Ȩ�ޣ����ڿɷ��ʣ������ⲻ�У�
	};
};


int main_14() 
{
	// �̳�: �����ظ�����
	// class ���� : public ���ࣻ
	// - ˽�нԲ��ɷ��ʣ�����Ϊ���У�����Ϊ����; 
	// class ���� : private ���ࣻ
	// - ˽�нԲ��ɷ���, ����Ի�Ϊ˽�У�
	// class ���� : protected ���ࣻ
	// - - ˽�нԲ��ɷ���, ����Ի�Ϊ������

	Pig p;
	Cat c;
	Dog d;

	p.age;
	
	return 0;
};



/*�̳�����
��һ���������Ի��࣬�û�����Ա��̳�Ϊ public ��protected �� private �������͡��̳�������ͨ�����潲��ķ������η� access - specifier ��ָ���ġ�

���Ǽ�����ʹ�� protected �� private �̳У�ͨ��ʹ�� public �̳С���ʹ�ò�ͬ���͵ļ̳�ʱ����ѭ���¼�������

���м̳У�public������һ���������Թ��л���ʱ������Ĺ��г�ԱҲ��������Ĺ��г�Ա������ı�����ԱҲ��������ı�����Ա�������˽�г�Ա����ֱ�ӱ���������ʣ����ǿ���ͨ�����û���Ĺ��кͱ�����Ա�����ʡ�
�����̳У�protected���� ��һ���������Ա�������ʱ������Ĺ��кͱ�����Ա����Ϊ������ı�����Ա��
˽�м̳У�private������һ����������˽�л���ʱ������Ĺ��кͱ�����Ա����Ϊ�������˽�г�Ա*/