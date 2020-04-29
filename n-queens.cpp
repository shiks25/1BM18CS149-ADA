//Implement “N-Queens Problem” using Backtracking.

#include<bits/stdc++.h>
using namespace std;

int N,board[30][30],k=0;
void print(int board[][30]){
    
    cout<<"solution "<<(++k)<<" is : \n";
    for(int j=0;j<N;j++){
        for(int p=0;p<N;p++){
            cout<<board[j][p]<<" ";
        }cout<<endl;

    }
    cout<<endl;
}
bool canPlace(int board[][30], int row, int col) 
{ 
    int i, j; 
  //check this row on left side
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
  
    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--) 
        if (board[i][j]) 
            return false; 
  
    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
  

bool placeQueen(int board[][30], int col) 
{ 
    
    if (col == N) 
    { 
        print(board);
        return true; 
    } 
  
    
    bool res = false; 
    for (int i = 0; i < N; i++) 
    { 
        if ( canPlace(board, i, col) ) 
        { 
            
            board[i][col] = 1; 
  
            res = placeQueen(board, col + 1) || res; 
  
            board[i][col] = 0; // BACKTRACK 
        } 
    } 
  
    return res; 

}

int main()
{
    cout<<"Enter the value of N : ";
    cin>>N;

    
    if(!placeQueen(board,0)){
        cout<<"No solution";
    }

    return 0;
}
/*output
Enter the value of N : 6
solution 1 is :
0 0 0 1 0 0
1 0 0 0 0 0
0 0 0 0 1 0
0 1 0 0 0 0
0 0 0 0 0 1
0 0 1 0 0 0

solution 2 is :
0 0 0 0 1 0
0 0 1 0 0 0
1 0 0 0 0 0
0 0 0 0 0 1
0 0 0 1 0 0
0 1 0 0 0 0

solution 3 is :
0 1 0 0 0 0
0 0 0 1 0 0
0 0 0 0 0 1
1 0 0 0 0 0
0 0 1 0 0 0
0 0 0 0 1 0

solution 4 is :
0 0 1 0 0 0
0 0 0 0 0 1
0 1 0 0 0 0
0 0 0 0 1 0
1 0 0 0 0 0
0 0 0 1 0 0
*/