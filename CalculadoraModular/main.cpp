#include <iostream>
#include <string>

using namespace std;

class calcuMod
{
	int a, b, mod;
	int op;
public:
	calcuMod(int a=0, int b=0, int mod=1)
	{
		this->a		=a;
		this->b		=b;
		this->mod	=mod;
	}

	int modulo(int op, int mod){
		return (op>=0) ? op%mod : negativoMod(op,mod)%mod;
	}
	
	int negativoMod(int op, int mod) {
		op=op*(-1);
		while(op>mod) {
			op=op-mod;
		}
		return mod-op;
	}


	int suma(int a,int b, int mod)	{
		op=a+b;
		return modulo(op,mod);
	}
	int resta(int a,int b, int mod)	{
		op=a-b;
		return modulo(op,mod);
	}
	int multiplicacion(int a, int b, int mod)	{
		op=a*b;
		return modulo(op,mod);
	}
	int inversa(int a, int b, int mod) {
		
	}
	void imprimir(){
		cout << suma(a,b,mod) 			<< endl;
		cout << resta(a,b,mod) 			<< endl;
		cout << multiplicacion(a,b,mod) << endl;
	}
};




int main()
{
	calcuMod obj(1,2,6);
	obj.imprimir();
	cout << endl;
	return 0;
}