/*
 * Helvetic Coding Contest 2016, 690A1
 * Status: submitted
 * A1. Collective Mindsets (medium)
 * Way to go! Heidi now knows how many brains there must be for her to get one. But throwing herself in the midst of a clutch of hungry zombies is quite a risky endeavor. Hence Heidi wonders: what is the smallest number of brains that must be in the chest for her to get out at all (possibly empty-handed, but alive)? *

 * The brain dinner night will evolve just as in the previous subtask: the same crowd is present, the N - 1 zombies have the exact same mindset as before and Heidi is to make the first proposal, which must be accepted by at least half of the attendees for her to survive. *

 * Input
 * The only line of input contains one integer: N, the number of attendees (1 ≤ N ≤ 109). *

 * Output
 * Output one integer: the smallest number of brains in the chest which allows Heidi to merely survive.
 */
 #include <iostream>
 using namespace std;

 int main() {
     int N;
     cin >> N;
     if (N % 2) {
         cout << N / 2 << endl;
     } else {
         int powerOfTwo = 1;
         while (powerOfTwo <= N) {
             powerOfTwo = powerOfTwo * 2;
         };
         cout << (N - powerOfTwo / 2) / 2 << endl;
     }
     return 0;
 }
