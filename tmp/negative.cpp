#include <iostream>
using namespace std;
class A
{
private:
	int _a	:100;
public:
	int a() { return _a;}
	void set_a(int val) {_a=val;}
};
int main()
{
	int x;
	//cin>>x;
	//cout<<(~x)<<endl;
	A ca;
	ca.set_a(1000);
	cout<<ca.a()<<endl;
}
