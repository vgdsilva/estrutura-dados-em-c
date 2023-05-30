#include <stdio.h>
#include <stdlib.h> 

#include "grafos.h"

int main() { 
    
   printf("\n--- Grafos ---\n\n");

   int numero_de_vertices = 9; 
   bool eh_digrafo = false;


   Grafo *ptr_no_grafo = criar_grafo(numero_de_vertices);
   inserir_aresta_grafo(ptr_no_grafo, 0, 1, eh_digrafo, 0);  
   inserir_aresta_grafo(ptr_no_grafo, 1, 3, eh_digrafo, 0);
   inserir_aresta_grafo(ptr_no_grafo, 1, 2, eh_digrafo, 0);  
   inserir_aresta_grafo(ptr_no_grafo, 2, 4, eh_digrafo, 0);
   inserir_aresta_grafo(ptr_no_grafo, 3, 0, eh_digrafo, 0);
   inserir_aresta_grafo(ptr_no_grafo, 3, 4, eh_digrafo, 0);  
   inserir_aresta_grafo(ptr_no_grafo, 4, 1, eh_digrafo, 0);      
   
   imprimir_grafo_lista(ptr_no_grafo, 0);
   imprimir_grafo_lista(ptr_no_grafo, 1);
   imprimir_grafo_lista(ptr_no_grafo, 2);
   imprimir_grafo_lista(ptr_no_grafo, 3);
   imprimir_grafo_lista(ptr_no_grafo, 4);

   remover_aresta_grafo(ptr_no_grafo, 4, 0, eh_digrafo);

   imprimir_grafo_lista(ptr_no_grafo, 0);
   imprimir_grafo_lista(ptr_no_grafo, 1);
   imprimir_grafo_lista(ptr_no_grafo, 2);
   imprimir_grafo_lista(ptr_no_grafo, 3);
   imprimir_grafo_lista(ptr_no_grafo, 4);
   


   destruir_grafo(ptr_no_grafo);   
 
   return 0;

}