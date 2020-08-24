#include<iostream>
using namespace std;
int main(){
	int i,s=1,j=1;
	cout << "Enter a number " ;
	cin >> i;
	while(j<=10){
		s=i*j;
		cout << i << " x " << j<<" = "<<s << endl;
		s=1;
		j++;
	}
return 0;
}
