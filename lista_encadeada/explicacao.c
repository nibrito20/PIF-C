#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *next;
};

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->valor = 0; 
    head->next = NULL; //primeiro elemento da lista
    struct node *novo = (struct node*)malloc(sizeof(struct node)); // vai ser o final
    novo->valor = 1;
    novo->next = NULL; //segundo elemento da lista
    head->next = novo;
    
    printf("Lista encadeada\n");
    struct node *n = head;
    while (n != NULL){
        printf("%d", n->valor);
        n = n->next;
    }
    
    n = head;
    while(n->next != NULL){
        novo = (struct node*)malloc(sizeof(struct node)); 
        novo->valor = 9;
        novo->next = NULL;
        
    }
    
    return 0;
}
