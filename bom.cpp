#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name;
	int Salary;
	int Sale;
	float Comper;
	cout<<"Enter Name : ";
	cin>> Name;
	cout<<"Enter Salary : ";
	cin>> Salary;
	cout<<"Enter Sale : ";
	cin>> Sale;
	cout<<"Enter Commission Percent : ";
	cin>> Comper;
	cout<<"********Output********"<<endl;
	cout<<"Your name ="<<Name<<endl;
	cout<<"Total Revenue "<<Salary+(Sale*(Comper/100))<<" Bath"<<endl;
	
	system("pause");
	return(0);
}