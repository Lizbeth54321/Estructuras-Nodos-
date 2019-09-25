#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dt;
	Nodo  *siguiente;
};
void Agregar(Nodo *&,int);
void Mostrar(Nodo *);
void menu();

Nodo *lista=NULL;

int main(){
	
	menu();
	
	getch();
return 0;	
	
}
void menu(){
	int opcion,dt;
	do{
		cout<<"\t.::MENU::.\n";
	
	    cout<<"1.- Agregar Dato\n";
        cout<<"2.-Imprimir Lista \n";
	    cout<<"3.-Salir\n";
	    cout<<":.:Selecciona una opcion:.:\n\n";
	    cin>>opcion;
	    
	    switch(opcion){
		    case 1:
			    cout<<"\t :::..Ingresa un numero:::.. ";
	            cin>>dt;
	            Agregar(lista,dt);
	            system("pause");
			    break;
		    case 2:
			    cout<<"Imprimir datos "<<endl;
			    Mostrar(lista);
			    system("pause");
			    break ;
			    
		}
		system("cls");
				
	
	
		
	}while(opcion!=3);
}

void Agregar(Nodo *&lista,int valor){
	Nodo  *nuevo_nodo =new Nodo();
	nuevo_nodo->dt=valor;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&&(aux1->dt<valor)){
		aux2=aux1;
		aux1=aux1->siguiente;	
	}
	
	if (lista == aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
		
	}
	nuevo_nodo->siguiente=aux1;
	
	cout<<"\t Dato "<<valor<<"agregado correctamente en la lista \n";
}

void Mostrar(Nodo  *lista){
	Nodo *actual=new Nodo();
	
	actual=lista;
	while(actual != NULL ){
		cout<<actual->dt<<"->";
		actual=actual->siguiente;
	}
}
