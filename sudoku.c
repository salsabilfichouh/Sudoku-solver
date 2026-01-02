#include <stdio.h>

int main() {

    int T[9][9];
    int i, j,row,colum,num,R,C,B;
  

    printf("Enter Sudoku puzzle (use 0 for empty cells):\n");

    // read the sudoku
    
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    //print the original sudoku

    printf("\n Original Sudoku:\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    //the solution of the sudoku


    for (row = 0; row < 9; row++)
    {
        for ( colum = 0; colum < 9; colum++)
        {
            if (T[row][colum]==0)        //se
            {
                for ( num = 1; num < 9; num++)
                {
                    //row.....
                    R=0;
                    for ( i = 0; i < 9; i++)
                    {
                        if (T[row][i]==num)
                        {
                            R=1;
                        }
                        
                    }

                    //colum....
                    
                    C=0;
                    for ( i = 0; i < 9; i++)
                    {
                        if (T[i][colum]==num)
                        {
                           C=1;
                        }
                        
                    }
                    
                    //box....

                    B=0;
                    for ( i = (row/3)*3; i < (row/3)*3 + 3; i++)
                    {
                        for ( j = (colum/3)*3; j <(colum/3)*3 + 3 ; j++)
                        {
                            if (T[i][j]==num)
                            {
                                B=1;
                            }
                            
                        }
                        
                    }

                    //if.....

                    if (R==0 && C==0 && B==0)
                    {
                        T[row][colum]=num;
                    }
            
                }
                
            }
            
        }
        
    }
    
    //print the solution 


    printf("\n the Sudoku solution :\n");

    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");      //for...........
    }
    
    
return 0;

}