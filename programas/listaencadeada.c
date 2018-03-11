#include <stdio.h>
#include <stdlib.h>

// definindo nossa lista
struct Node
{
  int data;
  struct Node *next;
};

   /*
   Aqui usamos um ponteiro para ponteiro do HEAD e o
   inteiro que será nosso novo node
   */
void add_no_inicio(struct Node** head_ref, int new_data)
{
    /* 1. Aloca o novo node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* 2. adiciona o dado   */
    new_node->data  = new_data;

    /* 3. Faça o próximo do novo node como HEAD.*/
    new_node->next = (*head_ref);

    /* 4. Defina o HEAD como novo node */
    (*head_ref)    = new_node;
}


/*  Funcao que recebe um ponteiro para ponteiro do HEAD e um inteiro que será o novo node
    inserido no final da lista  */
void add_no_fim(struct Node** head_ref, int new_data)
{
    /* 1. aloca o node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;  /* used in step 5*/

    /* 2. adiciona o novo dado recebido como parametro da funcao  */
    new_node->data  = new_data;

    /* 3. O novo node será o ultimo nó da lista, então o seu próximo aponta para NULL*/
    new_node->next = NULL;

    /* 4. Se a Lista esta vazia, então faça o novo node como HEAD ()*/
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }

    /* 5. Percorra a lista até o ultimo node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Altere o ultimo para ser o novo node*/
    last->next = new_node;
    return;
}

// Funcao que imprime elementos a partir do HEAD
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

/* Driver program to test above functions*/
int main()
{
  /* Inicio com a lista vazia*/
  struct Node* head = NULL;

  add_no_inicio(&head, 7);
  add_no_inicio(&head, 11);
  add_no_inicio(&head, 5);

  add_no_fim(&head, 40);



  printf("\nNossa Lista:  ");
  printList(head);

  return 0;
}
