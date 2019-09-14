#include<iostream>
#include<stdio.h>
#include<locale>
using namespace std;
struct nodo{
	int valor; 
    struct nodo *puntero=NULL;

};
int main(){   
  
	struct nodo *inicio;
	struct nodo *auxiliar;	
	struct nodo  dato1,dato2,dato3,dato4,dato5;
	inicio=NULL;
	
	auxiliar=new nodo();
	auxiliar->valor=6;
	auxiliar->puntero=NULL;  
	inicio=auxiliar;
	
	auxiliar=new nodo();
	auxiliar->valor=5;
	auxiliar->puntero=NULL;
	inicio->puntero=auxiliar;
	
	auxiliar=new nodo();
	auxiliar->valor=8;
	auxiliar->puntero=NULL;
	inicio->puntero->puntero=auxiliar;


    auxiliar= new nodo();
	auxiliar->valor=2;
	auxiliar->puntero=NULL;
	inicio->puntero->puntero->puntero=auxiliar;	

    auxiliar= new nodo();
	auxiliar->valor=15;
	auxiliar->puntero=NULL;
    inicio->puntero->puntero->puntero->puntero=auxiliar;	

    dato1.valor=3;
    dato1.puntero=NULL;
    dato2.valor=7;
    dato2.puntero=NULL;
    dato3.valor=9;
    dato3.puntero=NULL;
    dato4.valor=10;
    dato4.puntero=NULL;
    dato5.valor=8;
    dato5.puntero=NULL;

    
    

    dato1.puntero=&dato2;
   
    dato2.puntero=&dato3;
  
    dato3.puntero=&dato4;
  
    dato4.puntero=&dato5;
    cout<<dato1.valor<<endl;
    cout<<dato1.puntero->valor<<endl;	
    cout<<dato1.puntero->puntero->valor<<endl;
    cout<<dato1.puntero->puntero->puntero->valor<<endl;
    cout<<dato1.puntero->puntero->puntero->puntero->valor<<endl;
    
    
    cout<<inicio->valor<<endl;
    cout<<inicio->puntero->valor<<endl;
    cout<<inicio->puntero->puntero->valor<<endl;
    cout<<inicio->puntero->puntero->puntero->valor<<endl;
    cout<<inicio->puntero->puntero->puntero->puntero->valor<<endl;
    
}


