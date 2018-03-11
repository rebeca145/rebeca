#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

int main()
{
  struct Node* head = NULL;
  struct Node* valor2 = NULL;
  struct Node* valor3 = NULL;

  // aqui vamos alocar 3 nodes na memoria
  head  = (struct Node*)malloc(sizeof(struct Node));
  valor2 = (struct Node*)malloc(sizeof(struct Node));
  valor3  = (struct Node*)malloc(sizeof(struct Node));

  head->data = 10;
  head->next = valor2;

  valor2->data = 22;
  valor2->next = valor3;

  valor3->data = 33;
  valor3->next = NULL;

  printList(valor2);

  return 0;

}

// Esta funcao imprime o conteudo da lista encadeada
void printList(struct Node *n)
{
  while (n != NULL)
  {
     printf(" %d ", n->data);
     n = n->next;
  }
}


