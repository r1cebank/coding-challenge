/*
 * Helvetic Coding Contest 2016, 690F1
 * Status: not-submitted
 */
#include <iostream>
using namespace std;

void printEdges(int** array, int size) {
    for(int i = 0; i < size; i++) {
        cout << "[" << array[i][0] << "," << array[i][1] << "]";
    }
}

int main() {
    int verticies;
    int** edges;
    cin >> verticies;
    edges = new int*[verticies];
    for(int i = 0; i < verticies - 1; i++) {
        edges[i] = new int[2];
        cin >> edges[i][0];
        cin >> edges[i][1];
    }
    delete [] edges;
    return 0;
}
