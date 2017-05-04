#include <stdio.h>
#include <stdlib.h>
#define r 3

int fil,col,numA[r][r],numB[r][r],numC[r][r],scalar[r][r];
int k,s,det,l,m,numero;

void menu();

void llenarMatrizA(); 

void llenarMatrizB(); 

void sumaMatriz();

void restarMatriz();

void multiolicarMatriz();

void determinanteMatriz();

void invertirMatriz();

void multiplicacionEscalar();

void imprimirDatos(); 

int main(){
	
    system("color f1");
    menu();
    return 0;
}


void menu(){
    int opcion;
    do{
    	printf("\n|---------------------------------|");
        printf("\n|--------------MENU---------------|");
        printf("\n|---------------------------------|");
        printf("\n|1. llenar matriz A               |");
        printf("\n|2. llenar matriz B               |");
        printf("\n|3. sumar Matriz                  |");
        printf("\n|4. restar Matriz                 |");
        printf("\n|5. multiplicar Matriz            |");
        printf("\n|6. determinante Matriz           |");
        printf("\n|7. invertir Matriz               |");
        printf("\n|8. multiplicacion escalar        |");
        printf("\n|9. Imprimir Datos                |");
        printf("\n|0. Salir                         |");
        printf("\n|---------------------------------|");
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
            case 8: multiplicacionEscalar();
            	break;
            case 9: imprimirDatos(); 
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
	for(fil=0; fil<r; fil++){ 
		for(col=0; col<r; col++){
		printf("Matriz A(%d,%d) =",fil,col); 
		scanf("%d",&numA[fil][col]);
		}
	printf("");
	}
}

void llenarMatrizB(){ 
	printf("llenar matriz B con filas y columnas: \n");
	for(fil=0; fil<r; fil++){ 
		for(col=0; col<r; col++){
		printf("Matriz B(%d,%d) =",fil,col); 
		scanf("%d",&numB[fil][col]);
		}
	printf("");
	}
}
void sumaMatriz(){
	printf("La Matriz ah sido sumada con exito ");
 
	for(fil=0; fil<r; fil++){
 
		for(col=0; col<r; col++){
 
	numC[fil][col]=numA[fil][col]+numB[fil][col];
 
 
	}
	printf("");
	}
}

void restarMatriz(){
	printf("La resta se ah heco con exito ");
 
	for(fil=0; fil<r; fil++){
 
		for(col=0; col<r; col++){
 
	numC[fil][col]=numA[fil][col]-numB[fil][col];
 
	printf("  %d  ",numC[fil][col]);
 
	}
	printf("");
	}
}

void multiolicarMatriz(){
	printf("La Multiplicacion de la Matriz a*b es: \n");
 
	for(fil=0; fil<r; fil++){
 
		for(col=0; col<r; col++){
	 	 numC[fil][col]=0;
			for(k=0; k<r; k++){
			numC[fil][col]+=numA[fil][k]*numB[k][col];	
		 
			}
			printf("  %d  ",numC[fil][col]);
		}
		printf("\n");
	}
 
	
}

void determinanteMatriz(){
	m=r-1; 
	for(fil=0;fil<r;fil++) {
	 for(col=0;col<r;col++) 
printf("\t\t\tA(%d,%d) =%d\n",fil,col,numA[fil][col] );
 } 

/*****Calculo del DETERMINANTE*****/ 
det=numA[0][0]; 
for(k=0;k<m;k++) {
 l=k+1; 
	for(fil=l;fil<r;fil++) {
 		for(col=l;col<r;col++) 
			numA[fil][col] = ( numA[k][k]*numA[fil][col]-numA[k][col]*numA[fil][k] )/numA[k][k];
 		} 
		det=det*numA[k+1][k+1]; 
	} 
	printf("\n\n"); 
	printf("\t\t\tDETERMINANTE = %d\n", det); 
	printf("\t\t\t-------------------------\n"); 
	
 
} 

void invertirMatriz(){
	printf("matriz original :\n");
       for(fil=0;fil<r;fil++){
    	for(col=0;col<r;col++){
           printf (" %d ",numA[fil][col]);
        }
         printf("\n");
   	 }
       
       printf("matriz invertido :\n");
       for(fil=0;fil<r;fil++){
        for(col=0;col<r;col++){
             printf(" %d ",numA[col][fil]);
       	 }
        printf("\n");
       }
	
}

void multiplicacionEscalar(){
	printf("ingrese el numero que quieras multiplicar: \n");
	scanf("%d",&numero);
	for (fil = 0; fil < r; fil++) {
        for (col = 0; col < r; col++) {
        }
        scalar[fil][col] = numA[fil][col] * numero;
    }
    printf ("el resultado de la multiplicacion  escalar es :\n ");
	for(fil=0;fil<r;fil++) {
		for(col=0;col<r;col++) {
			printf("%d  ",fil,col,scalar[fil][col]);
		}
		printf("\n  ");
	}
	
}

void imprimirDatos(){ 
	printf ("el resultado es :\n");
	for(fil=0;fil<r;fil++) {
		for(col=0;col<r;col++) {
			printf("%d  ",fil,col,numC[fil][col]);
		}
		printf("\n  ");
	}
	
}

