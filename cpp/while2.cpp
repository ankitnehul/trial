//Write a program that uses a while to sum the numbers from 50 to 100.
#include<iostream>
using namespace std;
int main(){
	int sum=0,val=50;
	while(val>=50 && val<=100){
		sum=sum+val;
		val++;
	}
	cout << "The sum from 50 to 100 is " << sum << endl;
return 0;
}

