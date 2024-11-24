#include<iostream>
#include "Graph.h"

int main()
{
	Graph graph;

	int edges;

	std::cout << "Enter the numbr of edges: ";
	std::cin >> edges;

	std::cout << "Enter the edges in the format: node1 node2 weight\n";

	while (edges--)
	{
		std::string u, v;
		double weight;
		std::cin >> u >> v >> weight;
		graph.addEdge(u, v, weight);
	}

	std::string start, end;

	std::cout << "Enter the start and end nodes: ";
	std::cin >> start >> end;

	auto path = graph.djikstra(start, end);

	if (!path.empty())
	{
		std::cout << "Shortest path from " << start << " to " << end << " is: ";
		for (const auto& node : path)
		{
			std::cout << node << " ";
		}
		std::cout << "\n";
	}
	else
	{
		std::cout << "No path found from " << start << " to " << end;
	}



}

