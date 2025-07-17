
#include <iostream>
#include <vector>
#include <list>

class Graph {
private:
    int numVertices;
    std::vector<std::list<int>> adjLists;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists.resize(vertices);
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        // For an undirected graph, add the reverse edge as well
        // adjLists[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            std::cout << "\nAdjacency list of vertex " << i << "\n head ";
            for (int adj : adjLists[i]) {
                std::cout << "-> " << adj;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}


