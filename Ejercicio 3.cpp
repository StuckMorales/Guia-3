

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double a,b,c;
	double mul, res, raiz, div, total1=0 , total2=0;
	cout<<"Ingrese el valor de a: ";cin>>a;
	cout<<"Ingrese el valor de b: ";cin>>b;
	cout<<"Ingrese el valor de c: ";cin>>c;
	
	mul = 4*a*c;
	res = (b*b) - mul; // podes usar pow(b,2)
	raiz = sqrt(res)); // podes usar pow(res,1/2)
	div = 2*a;
	total1 = (-b+raiz)/div;
	total2 = (-b-raiz)/div;
	
	cout<<"\nLas respuestas son: "<<total1<<", "<<total2;
	return 0;
}
