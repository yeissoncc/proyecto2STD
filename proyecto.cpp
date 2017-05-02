#include <stdio.h>
#include <stdlib.h>

int fil,col,numA[3][3],numB[3][3],numC[3][3],k,det,l;

void menu();

void llenarMatrizA(); 

void llenarMatrizB(); 

void sumaMatriz();

void restarMatriz();

void multiolicarMatriz();

void determinanteMatriz();

void invertirMatriz();

void imprimirDatos(); 

int main(){
    system("color f1");
    menu();
    return 0;
}


void menu(){
    int opcion;
    do{
    	printf("\n|-------------------------|");
        printf("\n|----------MENU-----------|");
        printf("\n|-------------------------|");
        printf("\n|1. llenar matriz A       |");
        printf("\n|2. llenar matriz B       |");
        printf("\n|3. sumar Matriz          |");
        printf("\n|4. restar Matriz         |");
        printf("\n|5. multiplicar Matriz    |");
        printf("\n|6. determinante Matriz   |");
        printf("\n|7. invertir Matriz       |");
        printf("\n|8. Imprimir Datos        |");
        printf("\n|0. Salir                 |");
        printf("\n|-------------------------|");
        printf("\nIngrese una opcion:");
        scanf("%d", &opcion);
        switch(opcion){
            case 1: llenarMatrizA(); 
                break;
            case 2: llenarMatrizB(); 
                break;
            case 3: sumaMatriz(); 
                break;
            case 4: restarMatriz(); 
                break;
            case 5: multiolicarMatriz();
                break;
            case 6: determinanteMatriz();
            	break;
            case 7: invertirMatriz();
            	break;
            case 8: imprimirDatos(); 
                break;
            case 0: exit(0);
                break;
            default: printf("\nOpcion Invalidad\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}

void llenarMatrizA(){
	
	printf("llenar matriz A con filas y columnas: \n");
	for(fil=0; fil<3; fil++){ 
		for(col=0; col<3; col++){
		scanf("%d",&numA[fil][col]);
		}
	printf("");
	}
}

void llenarMatrizB(){ 
	printf("llenar matriz B con filas y columnas: \n");
	for(fil=0; fil<3; fil++){ 
		for(col=0; col<3; col++){
		scanf("%d",&numB[fil][col]);
		}
	printf("");
	}
}
void sumaMatriz(){
	printf("La Matriz ah sido sumada con exito ");
 
	for(fil=0; fil<3; fil++){
 
		for(col=0; col<3; col++){
 
	numC[fil][col]=numA[fil][col]+numB[fil][col];
 
 
	}
	printf("");
	}
}

void restarMatriz(){
	printf("La resta se ah heco con exito ");
 
	for(fil=0; fil<3; fil++){
 
		for(col=0; col<3; col++){
 
	numC[fil][col]=numA[fil][col]-numB[fil][col];
 
	printf("  %d  ",numC[fil][col]);
 
	}
	printf("");
	}
}

void multiolicarMatriz(){
	printf("La Multiplicacion de la Matriz a*b es: ");
 
	for(fil=0; fil<3; fil++){
 
		for(col=0; col<3; col++){
	 	 numC[fil][col]=0;
			for(k=0; k<3; k++){
			numC[fil][col]+=numA[fil][k]*numB[k][col];	
		 
			}
			printf("  %d  ",numC[fil][col]);
		}
		printf("\n");
	}
 
	
}

void determinanteMatriz(){
	
		for(k=1;k<3;k++){ 
		
			l=k+1; 
			for(fil=l;fil<3;fil++){
				 for(col=l;col<3;col++) 
					numA[fil][col] = (numA[k][k]*numA[fil][col]-numA[k][col]*numA[fil][k] )/numA[k][k];
					} 
					det=det*numA[k+1][k+1]; 
			} 
			printf("\n\n"); 
			printf("\t\t\tDETERMINANTE = %d\n", det); 
} 

void invertirMatriz(){
	printf("matriz original :\n");
       for(fil=0;fil<3;fil++){
    	for(col=0;col<3;col++){
           printf (" %d ",numA[fil][col]);
        }
         printf("\n");
   	 }
       
       printf("matriz invertido :\n");
       for(fil=0;fil<3;fil++){
        for(col=0;col<3;col++){
             printf(" %d ",numA[col][fil]);
       	 }
        printf("\n");
       }
	
}


void imprimirDatos(){ 
	printf ("el resultado es :\n");
	for(fil=0;fil<3;fil++) {
		for(col=0;col<3;col++) {
			printf("%d  ",fil,col,numC[fil][col]);
		}
		printf("\n  ");
	}
	
}

