#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
	double a,b,productofnumbers;
	cout<<"size of char:"<< sizeof(char)<<"byte"<<"\n";
	cout<<"size of int:"<<sizeof(int)<<"bytes"<<"\n";
	cout<<"size of float:"<<sizeof(float)<<"bytes"<<"\n";
	cout<<"size of double:"<<sizeof(double)<<"bytes"<<"\n";
	cout<<"enter two numbers:";
	cin>> a>> b;
	productofnumbers=a*b;
	cout<<"product="<<productofnumbers;
	return 0;
}
