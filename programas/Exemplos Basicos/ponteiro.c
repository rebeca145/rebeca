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
	printf("  m=10, 'n' e 'o' s�o dois inteiros e *z � um ponteiro de inteiro");
	printf("\n\n z guarda o endere�o de mem�ria de m  = %p\n",  z); // como z � um ponteiro ent�o usamos o formatador %p para formatar o endereco de memoria
	printf("\n *z guarda o valor de m m = %i\n",   *z);
	printf("\n &m � o endere�o de m = %p\n",   &m);
	printf("\n &n guarda o endere�o de n = %p\n",   &n);
	printf("\n &o  guarda o endere�o de  o = %p\n",   &o);
	printf("\n &z guarda o endere�o de z = %p\n\n", &z); // &z gives the address, where the pointer z is
                             // stored -> still an address -> %p is the right
                             // specifier
}
