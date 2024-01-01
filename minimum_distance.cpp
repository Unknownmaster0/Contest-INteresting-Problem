// https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-134/problems
#include<iostream>
using namespace std;

int main()
{
    
    return 0;
}
/*
int getMiddle(int x1,int x2, int x3)
{
    priority_queue<int>q;
    q.push(x1);
    q.push(x2);
    q.push(x3);
    
    q.pop();
    return q.top();
}
*/
int minDist(int x1, int x2, int x3) {
    /* Brutforce solution -> 
    // initially we use the priority queue to get the middle element. But it can also be achieved using the max function.
    int mid = getMiddle(x1,x2,x3);
    return abs(mid - x1) + abs(mid - x2) + abs(mid - x3);
    */

//    concept in the copy -> we need to meet at the middle detective home whose home is in b/w the smallest and largest distance.
    return max(x1,max(x2,x3)) - min(x1,min(x2,x3));
}