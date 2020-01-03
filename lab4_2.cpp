#include<iostream>
#include<cmath>
using namespace std;

double findDistance(float u,float a,int t){
	double s;
	s = (u*t+0.5*a*pow(t,2));
	return s;
}
int main(){
	double u,a,t;
	cout << "Enter u: " ;
	cin >> u;
	cout << "Enter a: " ;
	cin >> a;
	cout << "Enter t: " ;
	cin >> t;
	cout << "S = " << findDistance(u,a,t);
	return 0;
}