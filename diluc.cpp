#include <iostream>
#include <string>
using namespace std;
int main()
{
	float s;
	cout<<"Input C++ Score : " ;
	cin>> s;
	cout<<"You "<<((s>=50)? "pass":"fail ")<<"with score "<< s <<";"<<endl;
system("pause");
return (0);
}