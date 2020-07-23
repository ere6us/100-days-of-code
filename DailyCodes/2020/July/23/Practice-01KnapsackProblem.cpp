// https://youtu.be/kvyShbFVaY8
// Learned from Aditya Verma's DP

#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int W, int n)   {
    if(n==0 || W == 0)    {
        return 0;
    }

    if(weight[n-1]<=W)  {
        return max(value[n-1]+knapsack(weight, value, W-weight[n-1], n-1), knapsack(weight, value, W, n-1));
    } else  return knapsack(weight, value, W, n-1);
}

int main()  {
    int n = 3;
    int weight[] = {10, 20, 30};
    int value[] = {60, 100, 120};
    int W = 50;
    cout<<knapsack(weight, value, W, n)<<endl;
}
