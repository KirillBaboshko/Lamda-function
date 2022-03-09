#include <iostream>
#include <algorithm>
#include <functional>
#include <cmath>
#include <list>
#include <vector>
using namespace std;
/*
#include <algorithm>
#include <cmath>
void abssort(float* x,unsigned n)
{
sort(x,x+n,[](float a, float b)
{return (abs(a)<abs(b));}
);


}



[=] () mutable throw() -> int
 1   2    3      4         5

 6
 {
 int n=x+y;
 x=y;
 y=n;
 return n;
 }

 1.предложение Capture(также извественое как оператор лямба-выражения в спецификации C++).
 2.список параметров Используемых.(Также называется лямбда-объявлением).
 3.изменяемая спецификация Используемых.
 4.Спецификация Exception Используемых.
 5.замыкающий-возвращаемый тип Используемых.
 6.тело лямбда-выражения.


 [&total,factor]
 [factor,&total]
 [&,factor]
 [=,&total]
 &identifier
 =identifier

 struct S
 {
 void f(int i)
 {

 [&,i]{};//OK

 [&,&i]{};//Error

 [=,this]{};//Error

 [=,*this]{};//OK

 [i,i]{};//Error
 }
 };

 template<class ... Args>
 void f(Args... args)
 {
	auto x=[args...]{return g(args...);};
	x();
 }
 явноое использование указателя this 
void ApplyScale(const vector<int>& v)const
	for_each(v.begin(),v.end(),[this](int n){cout<<n*_scale<<endl;});
void ApplyScale2(const vector<int>& v)const
	for_each(v.begin(),v.end(),[*this](int n){cout<<n*_scale<<endl;});
Неявно 
void ApplyScale(const vector<int>& v)const
	for_each(v.begin(),v.end(),[=](int n){cout<<n*_scale<<endl;});
*/
void abssort(float* x, unsigned n)
{
	sort
	(
		x, x + n, [](float a, float b)
		{return (abs(a) < abs(b)); }
	);
}
class Scale
{
	int _scale;
public:
	explicit Scale(int scale) :_scale(scale) {}
	void ApplyScale(const vector<int>& v)const 
	{
		for_each(v.begin(), v.end(), [this](int n) {cout << n * _scale << endl; });
	}
};
int main()
{
	//float* x=new float(5.4);
	//abssort(x, 10);



	/*auto f1 = [](int x, int y) {return x + y; };
	cout << f1(2, 3) << endl;
	function<int(int, int)>f2 = [](int x, int y) {return x + y; };
	cout << f2(3, 4) << endl;*/

	//int i = 3;
	//int j = 5;
	//function<int(void)>f = [i,&j]{return i + j; };
	//i = 22;
	//j = 44;
	//cout << f() << endl;


	/*list<int>numbers;
	numbers.push_back(13);
	numbers.push_back(17);
	numbers.push_back(42);
	numbers.push_back(16);
	numbers.push_back(99);

	const list<int>::const_iterator result = find_if(numbers.begin(), numbers.end(), [](int n) {return(n % 2) == 0; });
	if (result != numbers.end())
		cout << "the first even number in the list is " << *result << "." << endl;
	else
		cout << "The list contains no even numbers. "<< endl;
	return 0;*/


	/*int timestwoplusthree = [](int x) {return [](int y) {return y * 2; }(x)+3; }(5);
	cout << timestwoplusthree << endl;*/

	/*auto addtwointegers = [](int x)->function<int(int)> {return[x](int y) {return x + y; }; };
	auto higherorde = [](const function<int(int)>& f, int z) {return f(z) * 2; };
	auto answer = higherorde(addtwointegers(7), 8);
	cout << answer << endl;*/


	vector<int> values;
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	values.push_back(4);
	Scale s(3);
	s.ApplyScale(values);

}

