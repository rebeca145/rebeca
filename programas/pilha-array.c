#include<stdio.h>

#define MAX 10

int inicio, fim;
int pilha[MAX];

void push(int x);
int pop();
int estaVazia(); //se vazia 0 - false
int estaCheia(); //se cheia 1 - true
int peek();



int main(){
    inicio=0;
    fim=0;

    push(2);
    //push(35);
    //push(60);

    int valor = pop();
    printf("o topo da pilha eh: %d",peek());
    //printf("%d\n",pop());
    //printf("%d\n",pop());


    return 0;
}


int estaVazia(){

    /*if(inicio==fim){
        return 1;
    }else{
        return 0;
    }*/
    return (inicio==fim);
}

int estaCheia(){
    /*if(fim==MAX){
      return 1;
    }
    else{
       return 0;
    }*/
    return (fim==MAX);
}

void push(int x){//2
    if(!estaCheia()){
        //pilha[fim++]=x;
        pilha[fim]=x;
        fim=fim+1;
    }
    else{
        printf("\nPILHA ESTÁ CHEIA!!\n");
    }

}
int peek(){

    int topoDaPilha=pilha[fim-1];

    return topoDaPilha;

}

int pop(){
    int aux;
    if(!estaVazia()){
        aux = pilha[fim-1];
        fim--;

        return aux;
    }
    else{
        printf("\nPILHA ESTÁ VAZIA...\n");
    }
}
