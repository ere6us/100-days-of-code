// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/

// I have taken extra space to merge. Yes I am evil.

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T--)  {
	    int X,Y;
	    cin >> X >> Y;
	    
	    int A[X], B[Y];
	    
	    for(int i=0; i<X; i++)  cin >> A[i];
	    for(int i=0; i<Y; i++)  cin >> B[i];
	    
	    int C[X+Y];
	    
	    for(int i=0; i<X; i++)  {
	        C[i] = A[i];
	    }
	    int j = 0;
	    for(int i=X; i<X+Y; i++)    {
	        C[i] = B[j++];
	    }
	    sort(C,C+X+Y);
	    for(int i=0; i<X+Y; i++)    {
	        cout<<C[i]<<" ";
	    }
	    cout<<"\n";
	}
	
	return 0;
}
