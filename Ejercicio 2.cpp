

#include<iostream>
#include<math.h>


using namespace std;

int main(){
	double r;
	double per=0, area=0;
	
	cout<<"Ingrese el radio: ";
	cin>>r;
	
	per = M_PI*2*r;
	area = M_PI*r*r;   //tambien se puede usar pow(r,2)
	
	
	cout<<"\nEl radio es :"<<r;
	cout<<"\n EL perimetro es: "<<per;
	cout<<"\n El area es: "<<area;
	
	
	
	
	
	return 0;
}
