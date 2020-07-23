// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T--)  {
	    int N;
	    cin >> N;
	    
	    int C[N-1];
	    int missing[N] = {0};
	    
	    
	    for(int i=0; i<N-1; i++)    {
	        cin >> C[i];
	        missing[C[i]-1]++;
	    }
	    
	    for(int i=0; i<N; i++)  {
	        if(missing[i]==0)   {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	
	return 0;
}
