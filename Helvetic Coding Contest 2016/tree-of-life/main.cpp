/*
 * Helvetic Coding Contest 2016, 690F1
 * Status: submitted
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

int main() {
    int verticies, x, y, ans = 0;
    int array[100000];
    cin >> verticies;
    for(int i = 1; i < verticies; i++) {
        cin >> x; cin >> y;
        ans += array[x];
        ans += array[y];
        array[x]++;
        array[y]++;
    }
    cout << ans;
    return 0;
}
