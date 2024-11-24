#include<iostream>
#include "Graph.h"

int main()
{
	Graph graph;

	graph.addEdge("A", "B", 1.0);
	graph.addEdge("A", "C", 4.0);
	graph.addEdge("B", "C", 2.0);
	graph.addEdge("C", "D", 3.0);

	graph.printGraph();

}

