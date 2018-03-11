#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{

    setlocale(LC_ALL,"Portuguese");


    int m=10,n,o;
    int *z=&m ;

	printf("\n\n Ponteiro : \n");
	printf("-------------------------------------------------------\n");
	printf("  m=10, 'n' e 'o' são dois inteiros e *z é um ponteiro de inteiro");
	printf("\n\n z guarda o endereço de memória de m  = %p\n",  z); // como z é um ponteiro então usamos o formatador %p para formatar o endereco de memoria
	printf("\n *z guarda o valor de m m = %i\n",   *z);
	printf("\n &m é o endereço de m = %p\n",   &m);
	printf("\n &n guarda o endereço de n = %p\n",   &n);
	printf("\n &o  guarda o endereço de  o = %p\n",   &o);
	printf("\n &z guarda o endereço de z = %p\n\n", &z); // &z gives the address, where the pointer z is
                             // stored -> still an address -> %p is the right
                             // specifier
}
