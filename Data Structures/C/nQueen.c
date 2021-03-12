#include<stdio.h>
#include<stdlib.h>

int **board;

int isSafe(int i, int j, int n) {
    // check for row
    for(int x = 0; x < n; x++) {
        if(board[i][x] == 1) {
            return 0;
        }
    }

    // check for column
    for(int x = 0; x < n; x++) {
        if(board[x][j] == 1) {
            return 0;
        }
    }

    // check for 45°
    for (int x = i, y = j; x < n && y >= 0; x++, y--) {
        if(board[x][y] == 1) {
            return 0;
        }
    }

    // check for 135°
    for (int x = i, y = j; x < n && y < n; x++, y++) {
        if(board[x][y] == 1) {
            return 0;
        }
    }

    // check for 225°
    for (int x = i, y = j; x >= 0 && y < n; x--, y++) {
        if(board[x][y] == 1) {
            return 0;
        }
    }

    // check for 315°
    for (int x = i, y = j; x >= 0 && y >= 0; x--, y--) {
        if(board[x][y] == 1) {
            return 0;
        }
    }

    // queen is safe
    return 1;
}

int nQueen(int i, int n) {
    if(i >= n) {
        return 0;
    }
    int j;
    for(j = 0; j < n; j++) {
        if(isSafe(i, j, n)) {
            board[i][j] = 1;
            if(nQueen(i+1,n) == 0) {
                break;
            }
            else {
                board[i][j] = 0;
            }
        }
    }
    if(j == n) {
        return 1;
    }
    return 0;
}

int main() {
    
    int n;
    
    printf("Enter no of queens: ");
    scanf("%d",&n);
    
    if(n<2){
        printf("Minimum 4 Queens are required!");
        return 0;
    }
    else if(n<4){
        printf("Not Possible for %d Queens!",n);
        return 0;
    }
    
    board=(int**)calloc(n,sizeof(int*));
    
    for (int i = 0; i < n; i++) {
        board[i]=(int*)calloc(n,sizeof(int));
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j]=0;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(nQueen(i,n) == 0) {
            break;
        }
    }

    for(int i= 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (board[i][j] == 0) {
                printf(" - ");
            }
            else {
                printf(" Q ");
            }
        }
        printf("\n");
    }
}