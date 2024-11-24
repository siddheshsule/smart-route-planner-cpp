# **Smart Route Planner**

A C++ project to calculate the most efficient routes between locations using advanced graph algorithms such as Dijkstra's Algorithm. This project simulates a navigation system, providing the shortest path and distance between user-defined points. It demonstrates proficiency in C++ and algorithms.

---

## **Features**

- **Graph Representation**:
  - Represents locations and roads as a graph using adjacency lists.
- **Pathfinding Algorithms**:
  - Implements Dijkstra's Algorithm to calculate the shortest path.
- **Dynamic Weights**:
  - Allows real-world conditions like varying road costs or lengths.
- **Interactive Input**:
  - Command-line interface (CLI) for inputting graph data and querying routes.
- **Path Reconstruction**:
  - Displays the calculated path and total distance or cost.

---

## **How It Works**

1. **Input Graph Data**:
   - Define nodes (locations) and edges (roads with weights) interactively.
2. **Run Pathfinding**:
   - Input starting and ending points to compute the shortest path.
3. **Output Results**:
   - Displays the shortest path and its total weight (distance or cost).

---

## **Technologies Used**

- **Programming Language**: C++
- **Libraries**:
  - Standard Template Library (STL) for data structures (`unordered_map`, `priority_queue`, `vector`) and algorithms.

---

## **Setup Instructions**

1. **Prerequisites**:
   - A C++17-compatible compiler (e.g., `g++`, `clang++`, or MSVC).

2. **Clone the Repository**:
   ```bash
   git clone https://github.com/<your-username>/smart-route-planner.git
   cd smart-route-planner
   ```

3. **Build the Project**:
   ```bash
   g++ -std=c++17 -o route_planner route_planner.cpp
   ```

4. **Run the Program**:
   ```bash
   ./route_planner
   ```

---

## **Example Usage**

1. Enter the number of edges:
   ```
   Enter the number of edges: 4
   ```

2. Define the edges (node1, node2, weight):
   ```
   Enter edges in format: node1 node2 weight
   A B 1
   A C 4
   B C 2
   C D 3
   ```

3. Enter the start and end nodes:
   ```
   Enter start and end nodes: A D
   ```

4. Output:
   ```
   Shortest path: A -> B -> C -> D
   Total weight: 6
   ```

---

## **Project Structure**

```
smart-route-planner/
├── route_planner.cpp    # Main source code
├── README.md            # Project documentation
└── sample_graph.txt     # Example input data (optional)
```

---

## **Future Enhancements**

- **A\* Algorithm**:
  - Implement heuristic-based pathfinding for faster results.
- **Traffic Simulation**:
  - Support dynamic edge weights to simulate traffic conditions.
- **Graph Visualization**:
  - Use a graphical library (e.g., SFML) to display nodes and paths.
- **Multi-Stop Routes**:
  - Add support for calculating routes with waypoints.

---

## **Contributing**

Contributions are welcome!  
If you'd like to contribute, fork the repository, make your changes, and submit a pull request.

---

## **License**

This project is licensed under the MIT License.  
See the [LICENSE](./LICENSE) file for details.

---

## **Contact**

Created by **Siddhesh Sule**  
- Email: siddhesh.sule47@gmail.com  
- GitHub: [https://github.com/siddheshsule](https://github.com/sidheshsule)

Feel free to reach out with questions, suggestions, or feedback!
