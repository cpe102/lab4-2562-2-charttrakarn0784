#include<iostream>
#include<cmath>
using namespace std;

double findAns(int x){
	 double e=2.71828,y;
	 y = (3*pow(x,3)+2*e+pow(2,2*x+1)+sqrt(pow(x,2)+1));
	 return y;
}
int main()
{
	int x;
	cout << "Enter x = " ;
	cin >> x;
	cout << "Result y = " << findAns(x);
	
	return 0;
}