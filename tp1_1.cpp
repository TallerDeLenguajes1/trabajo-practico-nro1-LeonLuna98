#include <stdio.h>


int main(){
    int var=12;
    int *punt=NULL;
	int **puntero=NULL;
	puntero=&punt;
    punt= &var;
    
	
	printf("El valor que tiene el puntero:%d\n", &punt);//(1)
    printf("La direccion q apunta: %d\n", punt);//(2)
	printf("la direccion de memoria de la variable: %d\n", &var);//(3)
	printf("El valor de la variable %d\n", var);//
    printf("La direccion del puntero: %d\n", puntero);//(4)
    //int tama?= sizeof(int var);
    //printf("El tamanio de la variable es: %d\n", tama?);
	/*El punto 2 y 3 tienen el mismo resultado ya que un puntero apunta
    a la direccion de memoria de la variable, por lo cual es correcto
    que tengan el mismo valor.
    El punto 4 se optiene la direccion de memoria donde esta guardada
    la variable del puntero, puesto que no tiene que ser igual    

*/
  
    return 0;
}

