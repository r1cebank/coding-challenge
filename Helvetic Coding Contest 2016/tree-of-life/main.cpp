/*
 * Helvetic Coding Contest 2016, 690F1
 * Status: not-submitted
 * F1. Tree of Life (easy)
 * time limit per test2 seconds
 * memory limit per test256 megabytes
 * inputstandard input
 * outputstandard output
 * Heidi has finally found the mythical Tree of Life – a legendary combinatorial structure which is said to contain a prophecy crucially needed to defeat the undead armies. *

 * On the surface, the Tree of Life is just a regular undirected tree well-known from computer science. This means that it is a collection of n points (called vertices), some of which are connected using n - 1 line segments (edges) so that each pair of vertices is connected by a path (a sequence of one or more edges). *

 * To decipher the prophecy, Heidi needs to perform a number of steps. The first is counting the number of lifelines in the tree – these are paths of length 2, i.e., consisting of two edges. Help her! *

 * Input
 * The first line of the input contains a single integer n – the number of vertices in the tree (1 ≤ n ≤ 10000). The vertices are labeled with the numbers from 1 to n. Then n - 1 lines follow, each describing one edge using two space-separated numbers a b – the labels of the vertices connected by the edge (1 ≤ a < b ≤ n). It is guaranteed that the input represents a tree. *

 * Output
 * Print one integer – the number of lifelines in the tree.
 */
#include <iostream>
using namespace std;

void printGraph(bool** array, int size) {
    for(int i = 0; i <= size; i++) {
        for(int j = 0; j <= size; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}

int topDown(bool** array, int size) {
    int lines = 0;
    for(int i = 0; i <= size; i++) {
        for(int j = 0; j <= size; j++) {
            // Found 1 edge
            if(array[i][j]) {
                // cout << "edge " << "[" << i << "," << j << "]" << endl;
                for(int k = 0 ; k <= size; k++) {
                    if(array[j][k]) {
                        // cout << "found another edge " << "[" << j << "," << k << "]" << endl;
                        lines++;
                    }
                }
            }
        }
    }
    return lines;
}

int bottomUp(bool** array, int size) {
    int lines = 0;
    for(int i = 0; i <= size; i++) {
        for(int j = 0; j <= size; j++) {
            // Found 1 edge
            if(array[i][j]) {
                // cout << "edge " << "[" << i << "," << j << "]" << endl;
                for(int k = j + 1; k <= size; k++) {
                    if(array[i][k]) {
                        // cout << "found another edge " << "[" << i << "," << k << "]" << endl;
                        lines++;
                    }
                }
            }
        }
    }
    return lines;
}

int main() {
    int verticies;
    bool** graph;
    cin >> verticies;
    graph = new bool*[verticies + 1];

    // Construct fresh 2d array
    for(int i = 0; i <= verticies; i++) {
        graph[i] = new bool[verticies + 1];
        // Initialize with false
        for(int j = 0; j <= verticies; j++) {
            graph[i][j] = false;
        }
    }

    for(int i = 0; i < verticies - 1; i++) {
        int v1, v2;
        cin >> v1;
        cin >> v2;
        graph[v1][v2] = true;
    }
    // printGraph(graph, verticies);
    cout << topDown(graph, verticies) + bottomUp(graph, verticies) << endl;
    // cout << "top down: " << topDown(graph, verticies) << endl;
    // cout << "bottom up: " << bottomUp(graph, verticies) << endl;
    delete [] graph;
    return 0;
}
