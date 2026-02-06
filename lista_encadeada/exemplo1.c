#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}numero;

void mostrar(numero *head){
    numero *current = head; //cópia do ponteiro inicial, ele move para o próximo nó sem modificar o valor original de head
    while(current != NULL){
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");
}

void add_ao_final(numero *head, int novo_n){ //adicionar um numero ao FINAL da lista
    if(head == NULL){
        return; //verifica se a lista está vazia
    }
    numero *current = head;
    while(current->next != NULL){
        current = current->next;
    }
    numero *novo_no = (numero*)malloc(sizeof(numero));
    novo_no->num = novo_n;
    novo_no->next = NULL;
    current->next = novo_no;
    // current->next = (numero*)malloc(sizeof(numero));
    // current->next->num = novo_n;
    // current->next->next = NULL;
}

void add_ao_inicio(numero **head, int novo_n){ //o ponteiro é duplo para podermos modificar o ponteiro
    numero *novo_no = (numero*)malloc(sizeof(numero));
    novo_no->num = novo_n;
    novo_no->next = *head;
    *head = novo_no; //o ponteiro vai receber o novo nó como primeiro elemento
}

int pop(numero **head){ //excluir o primeiro elemento da lista
    int valor_removido = -1;
    numero *no_removido = NULL; 
    if(*head == NULL){
        return -1; 
    }
    no_removido = *head;
    valor_removido = no_removido->num;
    *head = (*head)->next;          
    free(no_removido);            
    return valor_removido;
}

void liberar_lista(numero *head){
    numero *current = head;
    numero *novo_no;
    while(current != NULL){
        novo_no = current->next;
        free(current);
        current = novo_no;
    }
}

int main(){
    numero *head = NULL;
    add_ao_inicio(&head, 12); // Lista: [12]
    add_ao_inicio(&head, 14); // Lista: [14, 12]
    add_ao_inicio(&head, 5);  // Lista: [5, 14, 12]
    add_ao_final(head, 20);

    printf("Lista Inicial: ");
    mostrar(head);

    printf("--- Operação POP ---\n");
    int valor_removido = pop(&head);
    printf("Valor removido (pop): %d\n", valor_removido);
    
    printf("Lista após POP: ");
    mostrar(head);
    
    liberar_lista(head);
    head = NULL; 
    printf("Memória liberada com sucesso.\n");
    return 0;
}