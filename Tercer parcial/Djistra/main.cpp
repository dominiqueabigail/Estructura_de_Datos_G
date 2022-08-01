// A C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
#include <iostream>
using namespace std;
#include <limits.h>

// Numero de vertices en el grafo
#define V 9

// Una función de utilidad para encontrar el vértice con el valor mínimo 
//de distancia, de el conjunto de vértices aún no incluidos en el árbol del camino más corto
int minDistance(int dist[], bool sptSet[])
{
	// Inicializar el valor mínimo
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}

// Una función de utilidad para imprimir la matriz de distancia construida
void printSolution(int dist[])
{
	cout <<"Vertice \t Distancia del origen al vertice" << endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t"<<dist[i]<< endl;
}

// Función que implementa el algoritmo del camino más corto de origen único de Dijkstra 
// para un grafo representado mediante una matriz de adyacencia
void dijkstra(int graph[V][V], int src)
{
	int dist[V]; // La matriz de salida. dist[i] contendrá la distancia 
    // más corta del origen a i
	bool sptSet[V]; // sptSet[i] será verdadero si el vértice i está incluido en el árbol del camino 
    // más corto o la distancia más corta desde el origen(src) a i está finalizada
	// Inicializar todas las distancias como INFINITO y stpSet[] como falso
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	// La distancia del vértice de origen a sí mismo es siempre 0
	dist[src] = 0;

	// Encontrar el camino más corto para todos los vértices
	for (int count = 0; count < V - 1; count++) {
		// Elige el vértice de mínima distancia del conjunto de vértices aún 
        // no procesados. u es siempre igual al origen(src) en la primera iteración.
		int u = minDistance(dist, sptSet);

		// Marcar el vértice elegido como procesado
		sptSet[u] = true;

		// Actualiza el valor de dist de los vértices adyacentes al vértice elegido.
		for (int v = 0; v < V; v++)

			// Actualizar dist[v] sólo si no está en sptSet, hay una arista de 
            // u a v, y el peso total de la ruta de src a v a través de u es menor 
            // que el valor actual de dist[v]
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	// imprimir la matriz de distancia construida
	printSolution(dist);
}


int main()
{

	/* creamos la matriz del grafo */
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstra(graph, 0);

	return 0;
}