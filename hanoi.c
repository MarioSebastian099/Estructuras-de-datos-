#include <stdio.h>
void primaria();
void hanoi(int, char,char,char);
int main (void){
	primaria();
	return 0;
}
void primaria(){ 
char torre_a='A', torre_b='B', torre_c='C';
int n;
printf("Ingrese el numero de discos");
scanf("%d",&n);
printf("La serie de movimientos a realizar son:\n");
hanoi(n,torre_a,torre_b,torre_c);
}
void hanoi(int n,char torre_a,char torre_b, char torre_c)
{
	if(n==1){
		printf("%c->%c",torre_a,torre_c);
		}
	else{ 
		hanoi(n-1,torre_a,torre_c,torre_b);
		printf("\n%c->%c\n",torre_a,torre_b);
		hanoi(n-1,torre_b,torre_a,torre_c);
	    }
}	
 
