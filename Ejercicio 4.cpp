

#include<iostream>


using namespace std;

int main(){
	
	
	double cantidad,precio;
	double total = 0;
	
	string producto;
	
	cout<<"Ingrese el nombre del producto: "; cin>>producto;
	cout<<"Ingrese la cantidad comprada de "<< producto <<": "; cin>>cantidad;
	cout<<"Ingrese el precio del producto: "; cin>>precio;
	
	total = cantidad * precio;
	
	cout<<"\nEl total de dinero gastado es: "<<total;
	
	
	
	return 0;
}
