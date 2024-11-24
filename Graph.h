#pragma once
#include <string>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <list>
#include <unordered_map>

class Graph
{

public:
	void addEdge(const std::string& u, const std::string& v, double weight);
	void printGraph();


private:
	std::unordered_map < std::string, std::list<std::pair<std::string, double>>> adjList;
	std::vector<std::string> djikstra(const std::string& start, const std::string& end);
};

