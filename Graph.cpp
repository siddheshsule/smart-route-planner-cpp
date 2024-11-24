#include "Graph.h"
#include <queue>

void Graph::addEdge(const std::string& u, const std::string& v, double weight)
{
	adjList[u].push_back({ v,weight });
	adjList[v].push_back({ u,weight });
}


void Graph::printGraph()
{
	for (const auto& node : adjList)
	{
		std::cout << "Node " << node.first << " has edges:\n ";
		for (const auto& neighbour : node.second)
		{
			std::cout << "->" << neighbour.first << "(weight: " << neighbour.second << ")\n ";
		}
	}
}

std::vector<std::string> Graph::djikstra(const std::string& start, const std::string& end)
{
	std::priority_queue<std::pair<double, std::string>,
		std::vector<std::pair<double, std::string>>,
		std::greater<std::pair<double, std::string>>> pq;

	std::unordered_map<std::string, double> dist;
	for (const auto& node : adjList) {
		dist[node.first] = std::numeric_limits<double>::infinity();
	}

	dist[start] = 0.0;

	std::unordered_map<std::string, std::string> parents;

	pq.push({ 0.0, start });

	while (!pq.empty())
	{
		auto topElement = pq.top();
		double currentDistance = topElement.first;
		std::string currentNode = topElement.second;

		pq.pop();

		// If we have already found a shorter path to the current node, ignore it
		if (currentNode == end) {
			std::vector<std::string> path;
			for (auto at = end; at != ""; at = parents[at]) {
				path.push_back(at);
			}

			std::reverse(path.begin(), path.end());
			return path;
		}

		for (const auto& neighbour : adjList[currentNode])
		{
			auto nextNode = neighbour.first;
			auto weight = neighbour.second;

			double newDistance = currentDistance + weight;
			if (dist[currentNode] + weight < dist[nextNode])
			{
				dist[nextNode] = dist[currentNode] + weight;
				parents[nextNode] = currentNode;
				pq.push({ dist[nextNode], nextNode });
			}
		}
	}
	return std::vector<std::string>();
}
