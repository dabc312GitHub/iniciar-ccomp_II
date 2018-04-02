/*
Input : 		0<n<999 999 999 999
output :			n=8 -> ocho
					n=15->quince
					n=21->veintiuno
*/
#include <iostream>
using namespace std;

int ()
{

	return 
}

int contar(int n){
	int a=0;
	while(n>10){
		n=n/10;
		a++;
	}
	return a;open
}

int pot(int p,int m){
	int i=0;
	int mult=1;
	while(i<m){
		mult=mult*p;
		i++;
	}
	return mult;
}

void digitar(int n){
	int a;
	int i=1;
	while(n>10){
		a=n%10;//3
		n=n/pot(10,i*contar(n));//2
		cout<<n<<endl;
		
		if(n<10)
			cout << a << endl;
		i++;
	}
}

int main()
{
	//digitar(123);
	cout << contar(32) << endl;
	return 0;
}