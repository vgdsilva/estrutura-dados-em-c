#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>  
#include "grafos.h" 
#include "lista_ligada_peso.h" 


struct grafo 
{
	Lista **lista_de_adjacencias;
    int numero_de_vertices;      
};


Grafo *criar_grafo(int numero_de_vertices) 
{
    Grafo *ptr_no_grafo = (Grafo*) malloc(sizeof(Grafo));
    ptr_no_grafo->numero_de_vertices = numero_de_vertices;
    ptr_no_grafo->lista_de_adjacencias = (Lista**) malloc(numero_de_vertices * sizeof(Lista*));
    
    for (int i = 0; i < numero_de_vertices; i++) 
    {
        ptr_no_grafo->lista_de_adjacencias[i] = criar_lista();
    }
    return ptr_no_grafo;
}

void destruir_grafo(Grafo *ptr_grafo) 
{ 

}

void imprimir_grafo_lista(Grafo *ptr_grafo, int vertice)
{
    printf("Aresta %d: ", vertice);
    imprimir_lista(ptr_grafo->lista_de_adjacencias[vertice]);   
}

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso) 
{ 
    if (ptr_grafo == NULL)
        return;

    if (vertice_origem < 0 || vertice_origem >= ptr_grafo->numero_de_vertices)
        return;

    if (vertice_destino < 0 || vertice_destino >= ptr_grafo->numero_de_vertices)
        return;

    inserir_lista(ptr_grafo->lista_de_adjacencias[vertice_origem], vertice_destino, peso);

    if (direcionado == false)
        inserir_lista(ptr_grafo->lista_de_adjacencias[vertice_destino], vertice_origem, peso);

}

void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado) 
{ 
     if (ptr_grafo == NULL)
        return;

    if (vertice_origem < 0 || vertice_origem >= ptr_grafo->numero_de_vertices)
        return;

    if (vertice_destino < 0 || vertice_destino >= ptr_grafo->numero_de_vertices)
        return;

    remover_valor_lista(ptr_grafo->lista_de_adjacencias[vertice_origem], vertice_destino);

    if (direcionado == false)
        remover_valor_lista(ptr_grafo->lista_de_adjacencias[vertice_destino], vertice_origem);
}

void busca_profundidade(Grafo *ptr_grafo)
{

}

void busca_largura(Grafo *ptr_grafo, int vertice_inicio, int *vertices_visitados)
{
    int *fila;

    for (int i = 0; i < ptr_grafo->numero_de_vertices; i++)
        vertices_visitados[i] = 0;
    
    fila = (int*)malloc(ptr_grafo->numero_de_vertices * sizeof(int));
}

void menor_caminho(Grafo *ptr_grafo)
{

}



    