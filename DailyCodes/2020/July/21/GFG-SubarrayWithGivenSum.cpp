//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0

#include<bits/stdc++.h>
using namespace std;

int getSum(int A[], int start, int end)  {
    int sum = 0;
    for(int i=start; i<= end; i++)  sum+=A[i];
    return sum;
}

int main()  {
    int T;
    cin >> T;
    while(T--)  {
        int N, S;
        cin >> N >> S;

        int A[N];
        for(int i=0; i<N; i++)  {
            cin >> A[i];
        }

        bool broke = false;

        for(int start = 0; start < N; start++)  {
            for(int end = start; end < N; end++)  {
                int sum = getSum(A, start, end);
                if(sum == S)  {
                    cout<<start+1<<" "<<end+1<<endl;
                    broke = true;
                    break;
                }
                if(sum > S) break;
            }
            if(broke)   break;
        }

        if(!broke)  cout<<-1<<endl;
    }
}
