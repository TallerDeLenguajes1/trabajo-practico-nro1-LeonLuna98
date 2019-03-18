#include <stdio.h>

int cuadrado(int cuadr);
void elcuadrado(int cuadr);
void invertir(int a, int b);
void ordenar(int a, int b);
 void mostrarcontenido(int num);
 
int main()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int resultado;
    resultado=cuadrado(n);
    printf("El cuadrado del numero es: %d\n", resultado);
    
    
	
    elcuadrado(n);
    mostrarcontenido(n);
    int n1, n2;
    printf("Ingrese un valor: ");
    scanf("%d", &n1);
    printf("Ingrese un segundo valor: ");
    scanf("%d", &n2);
    
    invertir( n1, n2);

    ordenar(n1, n2);
    return 0;
}


//I)
int cuadrado(int cuadr){
    int result;
    result= cuadr*cuadr;

    return result;
}

//II)
void elcuadrado(int cuadr){
     
    int result;
    result=cuadr*cuadr;
    printf("El cuadrado del numero (con void) es: %d\n", result);

}
//III)
 void mostrarcontenido(int num){
 	int *puntero;
 	puntero= &num;
 	
 	printf("La direccion de memoria es: %u\n", puntero);
 	printf("El valor de la variable es: %d\n", num);
 	
 	
 }
//IV)
void invertir(int a, int b){
    printf("El valor de a es: %d\n", a);
    printf("El valor de b es: %d\n", b);
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("El nuevo valor de a es: %d\n", a);
    printf("El nuevo valor de b es: %d\n", b);

}
//V)/VI)
void ordenar(int a, int b){
   if(a>b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("Los valores en orden son:%d %d", a, b );
   }
   else{
     printf("Los valores en orden son:%d %d", a, b );
   }
}
