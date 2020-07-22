// https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    while(T--)  {
        int N;
        cin >> N;
        
        int A[N];
        for(int i=0; i<N; i++)  cin >> A[i];
        
        sort(A, A+N);
        int count = 0;
        // int left = 0, right = N-1;
        
        for(int right = N-1; right>1; right--)    {
            int left = 0, move = right-1;
            while(left<move)    {
                if(A[left]+A[move] == A[right]) {
                    count++;
                    left++;
                }
                if(A[left]+A[move] > A[right])  {
                    move--;
                }
                else    left++;
            }
        }
        
        if(count==0)    cout<<-1<<endl;
        else    cout<<count<<endl;
    }
    
	return 0;
}
