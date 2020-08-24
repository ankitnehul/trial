//Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
#include<iostream>
using namespace std;
int main(){
	int i,j;
	
	cout << "enter two numbers : ";
	cin >> i;cin >> j;
	if(i<j){
	while(i<=j){
		cout << i << endl;
		i++;
	}
	}
	else
		cout << "not valid" << endl;return 0;
}
