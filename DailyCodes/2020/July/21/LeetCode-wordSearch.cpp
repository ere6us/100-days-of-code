// https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3397/

#include<bits/stdc++.h>
using namespace std;

//If the word is found
//    return true;
//Else
//    a)choose one of the next adjacent cells and check if this is equal to the current character. If it is equal then do the same for next character.
//    b)If the character chosen above does not matches the current character, then try alternate character.
//    c)If none of the chosen character matches the current character, return false.

bool isSafe(int x, int y, vector<vector<char>>& board, vector<vector<int>> used)    {
    return (x>=0 && x< board[0].size() && y>=0 && y<board[0].size() && used[x][y] == -1);
}

bool exist(vector<vector<char>>& board, vector<vector<char>>& used, string word, string move)	{
    if(word == move)    return true;
    int xMove[4] = {1, 0, -1, 0};
    int yMove[4] = {0, 1, 0, -1};
    
    for(int row=0; row<board.size(); row++) {
        for(int col=0; col<board[0].size(); col++)  {
            
        }
    }
}

int main()	{
    vector<vector<char>> board, used;
    board ={
            {'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
    };

    for(int i=0; i<board.size(); i++)    {
        for(int j=0; j<board[0].size(); j++)    used[i][j] = -1;
    }

    string word = "ABCCED";
    if(exist(board, used, word, ""))  cout<<"true"<<endl;
    else    cout<<"false"<<endl;
}
