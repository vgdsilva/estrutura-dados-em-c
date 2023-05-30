#include <stdio.h>
#include <stdbool.h>  

typedef struct grafo Grafo;

Grafo *criar_grafo(int numero_de_vertices);
void destruir_grafo(Grafo *ptr_grafo);

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso);
void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado);;

void imprimir_grafo_lista(Grafo *ptr_grafo, int vertice);

void busca_profundidade(Grafo *ptr_grafo);
void busca_largura(Grafo *ptr_grafo, int vertice_inicio, int *vertices_visitados);
void menor_caminho(Grafo *ptr_grafo);
