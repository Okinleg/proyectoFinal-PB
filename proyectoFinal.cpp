#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>						//para usar setprecision
#include <math.h>						//para usar trunc

using namespace std;

double factorial (double n,double m,double o,double fact,double k);

int main (){
	
	 int niv,i,j,e,esp,rep;										//declaración de variables
	 
	 double n,m,o,fact,k,num;
	
	setlocale(LC_ALL,"spanish");
	
	do{
		system("cls");
		printf("Bienvenidos!!! este programa imprime un triángulo de pascal por pantalla con puntos y luego lo gira\n");
		
		system("pause");
		niv = 9;
		
				//niv					//impresión del triángulo de pascal
		for(i=0;i<niv;i++){														//for para las columnas
			
			esp = niv - i - 1;													//número de espacios para un nivel del triángulo
			
			for(e=0;e<esp;e++){													//impresión de los espacios
				printf(" ");
			}
			
			
			m = i;																//valor m de la combinatoria
			
			//cout<<"m "<<m<<endl;
			
			
			for (j=0;j<=i;j++){													//for para las filas
				n = j;															//valor n de la combinatoria
				num = factorial (n,m,o,fact,k);									//llamada a la función para el calculo del factorial
				
				cout<<setprecision(10)<<trunc(num)<<" ";
				
				//printf("%f ",num);
				
				
				
			}
			
			cout<<endl;															//se baja al siguiente nivel del triángulo
			
		}
		cin.get();
		
		printf("\n¿Desea realizar otro cálculo? (0 para SI u otro número para NO)\n");
		scanf("%i",&rep);
	}while (rep == 0);
	
	printf("\nMuchas gracias por hacer uso de nuestros servicios\n");
	return 0;
}


//función para el calculo del factorial de los números


double factorial (double n,double m,double o,double fact,double k){
	
	o = m-n;
										
	fact = 1;
	
	for (k=2;k<=n;k++){
		fact *= k;
	}
	n = fact;
	
	fact = 1;
	
	for (k=2;k<=m;k++){
		fact *= k;
	}
	m = fact;
	
	fact = 1;
	
	
	for (k=2;k<=o;k++){
		fact *= k;
	}
	o = fact;
	return m/(n*o);
}
