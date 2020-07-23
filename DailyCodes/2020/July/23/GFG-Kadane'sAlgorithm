// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while(T--)  {
        int N;
        cin >> N;
        
        bool allNegative = true;
        
        int A[N];
        for(int i=0; i<N; i++)  {
            cin >> A[i];
            if(A[i]>=0) allNegative = false;
        }
        
        
        long long int maxSoFar = LLONG_MIN, maxEndingHere = 0;
        
        for(int i=0; i<N; i++)  {
            if(allNegative) {
                maxEndingHere += A[i];
                if(maxEndingHere > maxSoFar)    maxSoFar = maxEndingHere;
            }
            else    {
                maxEndingHere += A[i];
                if(maxEndingHere <0) maxEndingHere = 0;
                if(maxEndingHere > maxSoFar)    maxSoFar = maxEndingHere;
            }
        }
        
        cout<<maxSoFar<<endl;
    }
    
	return 0;
}
