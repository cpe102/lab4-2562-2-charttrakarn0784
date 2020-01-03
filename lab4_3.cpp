#include<iostream>
#include<cmath>
using namespace std;

double findDivisor(int x){
	int i = 2;
	while(i>1){
		if(x%i == 0){
			return i;
			break;
		}
		i++;
	}
}
int main(){
	int x;
	cout << "Enter the numba = ";
	cin >> x;
	cout <<"Divisor of " << x << " is " << findDivisor(x);
	
	return 0;
}
