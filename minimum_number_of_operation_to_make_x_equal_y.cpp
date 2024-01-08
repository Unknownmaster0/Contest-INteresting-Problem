#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

int main()
{
    
    return 0;
}

    int minimumOperationsToMakeEqual(int x, int y) {

        if(y >= x)  return (y-x);

        unordered_map<int,bool>vis;
        queue<pair<int,int>> q;
        q.push({x,0});
        vis[x] = true;

        while(!q.empty()){
            int newx = q.front().first;
            int turn = q.front().second;
            q.pop();

            if(newx == y)   return turn;
            // check all its possibility
            if(newx % 11 == 0 && !vis[newx / 11]){
                vis[newx] = true;
                q.push({newx / 11, turn+1});
            }
            if(newx % 5 == 0 && !vis[newx / 5]){
                vis[newx] = true;
                q.push({newx / 5, turn + 1});
            }
            if(!vis[newx -1]){
                vis[newx - 1] = true;
                q.push({newx - 1, turn + 1});
            }
            if(!vis[newx + 1]){
                vis[newx+1] = true;
                q.push({newx+1, turn + 1});
            }
        }
        return -1;
    }