#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;
	string sex;
	float h,w,BMI;

	cout<<"Enter Age :";
	cin>>age;
	cout<<"Enter Gender :";
	cin>>sex;
	cout<<"Enter Height :";
	cin>> h;
	cout<<"Enter Weight :";
	cin>> w;

	BMI=w/((h/100)*(h/100));
		if (BMI<=18.5)cout<<"BMI ="<<BMI<<"kg/m2"<<"Underweight\n";
		else if ((BMI >=18.5)&&(BMI <=25))cout<<"BMI = "<<BMI<<"kg/m2 "<<"Normal\n";
		else if ((BMI >=25)&&(BMI <=30))cout<<"BMI = "<<BMI<<"kg/m2 "<<"Overweight\n";
		else if ((BMI >=30)&&(BMI <=35))cout<<"BMI = "<<BMI<<"kg/m2 "<<"Obseity\n";

	system("Pause");
	return(0);
}