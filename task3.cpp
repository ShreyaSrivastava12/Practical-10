#include<iostream>
using namespace std;
class number
{
	int a,b;
	public:
	number(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	int remainder()
	{
		return (a%b);
	}
};
int main()
{
	number n(29,5);
	cout<<"remainder= "<<n.remainder();
}
