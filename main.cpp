#include <iostream.h>
using namespace std;
int main(int argc, char *argv[])
{
	int a = 1024;
	int &b = a;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	
	b = 1023;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	
	/*引用初始化必须是一个对象，不是值*/
	//int &c = 10;
	//cout << "c =" << c << endl;
	
	const int d = 100;
	const int &e = d;
	/*非const引用不能绑定到const 对象*/
	/*因为const对象是只读的，而对非
	const引用值的修改会修改原对象的值。*/ 
    //int &f = d; 
	cout << "e = " << e << endl; 
	/*const 引用可以初始化为不同类型的对象或初始化为右值*/
	 int f =12;
	 const int &g = 12;
	 const  int &h = g + f; 
	 cout << "g = " << g << endl;
	 cout << "h = " << h << endl; 
	 
	 double  i = 3.14;
	 const int &j = i;
	 cout << "i = " << i << endl;
	 cout << "j = " << j << endl; 

	 
	return 0;
}