#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

//class person {
//public:
//	person() {}
//	~person(){}
//	char* getName() { return name; }
//	void print()
//	{
//		cout << "father" << endl;
//	}
//private:
//	char *name;
//	int  age;
//};
////������Լ̳и������еĳ�Ա�����˹��캯���������������������
////�����������޷�ֱ��ʹ�ø����˽�г�Ա����Ҫͨ�����ʼ̳��Ը���Ĺ��г�Ա������ʹ�ø����˽�г�Ա��
//class student : public person {
//public:
//	student() {};
//	~student() {};
//	void print()
//	{
//		cout << "son" << endl;
//	}
//private:
//	int id;
//};
//int main() {
//	person f;
//	f.print();
//	student s;
//	s.print();
//	s.person::print();
//	//cout << sizeof(person) << endl;
//	//cout << sizeof(student) << endl;
//	return 0;
//}







//class person {
//public:
//	void fun() { cout << "A" << endl; }
//	virtual void fun() { cout << "L" << endl; }
//};
//class son : public person {
//public:
//	void fun() { cout << "a" << endl; }
//};
//int main()
//{
//	
//}


//void Qsort(int* a, int start, int end)
//{
//	int i = start;
//	int j = end;
//	int key = a[i];
//	if (i > j)
//		return;
//	while (i < j)
//	{
//		while (i < j && a[j] >= key)
//		{
//			j--;
//		}
//		a[i] = a[j];
//		while (i < j && a[i] <= key)
//		{
//			i++;
//		}
//		a[j] = a[i];
//	}
//	a[i] = key;
//	Qsort(a, start, i - 1);
//	Qsort(a, i + 1, end);
//}



class Father {
public:
	Father() {}
	~Father() {}
	void print()
	{
		cout << "Father" << endl;
	}
private:
	char* name;
	int age;
};

class Son : public Father{
public:
	Son() {}
	~Son() {}
	void print() 
	{
		cout << "Son" << endl;
	}

private:
	int id;
};

int main()
{
	Father f;
	f.print();
	Son s;
	s.print();
	s.Father::print();
}