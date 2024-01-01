// problem link -> https://www.codingninjas.com/studio/contests/weekend-contest-106/10815401/problems/27342?leftPanelTabValue=PROBLEM

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    return 0;
}

/* Two things we need to keep in mind ->

    1. when to buy the stock -> when the next stock price is greater than current stock price.
    2. when to sell the stock -> 
*/

long long maximumRupees(int n, int x, vector<int> &a) {
   long long buyed = 0;
   long long money = x;

   for(int i = 0; i<n-1; i++)
   {
      // time to buy the stock
      if(money > a[i] && a[i] < a[i+1])
      {
         long long stockBuy = money / a[i];
         buyed += stockBuy;
         money -= (stockBuy * a[i]);
      }
      // time to sell the stock
      else if(buyed > 0 && a[i] > a[i+1])
      {
         long long profit = buyed * a[i];
         buyed = 0;
         money += profit;
      }
   }

   if(buyed > 0)
   {
      long long profit = buyed * a[n-1];
      
      money += profit;
   }
   return money;
}
