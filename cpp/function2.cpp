#include<iostream>
using namespace std;
void hi(int a ,int b ){
	cout << "The addition is "<< a+b << endl;
}
int main(){
	int c,d;
	cout << "enter two numbers ";
	cin >>c;cin>>d;
	hi(c,d);
	return 0;
}
