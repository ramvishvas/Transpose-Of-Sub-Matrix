/*  Qn:- given a 16x16 matrix we are going to find
*   transpose of each 4x4 sub matrix
*
*   Ramvishvas Kumar
*   30 MAR 2017.
*/

#include <stdio.h>
void main(){
    int array[16][16];
    int trans[16][16]={0};
    int i, j, m, n,y;
    int x = 1;
    for (i = 0; i < 16; ++i)
    {
        for (j = 0; j < 16; ++j)
        {
            array[i][j] = (x++) % 99;
        }
    }

    printf("The given matrix is \n");

    for (i = 0; i < 16; ++i){
        for (j = 0; j < 16; ++j){
            printf(" %02d", array[i][j]);
    	    if((j+1) % 4 == 0)
    		printf("\t");
        }
        printf("\n");
	    if((i+1) % 4 == 0)
		printf("\n");
    }
    
    for(m = 0; m < 4; m++){
        for(n = 0; n < 4; n++){
            y = 4*n;
            for (i = m*4; i < (m+1)*4; ++i){
        	    x = m*4;
                for (j = n*4; j < (n+1)*4; ++j){
        		    trans[x++][y]=array[i][j];
                }
                y++;
            }
        }
    }

    printf("\n\ntranspose matrix is \n");
    for (i = 0; i < 16; ++i)
    {
        for (j = 0; j < 16; ++j)
        {
            printf(" %02d", trans[i][j]);
    	    if((j+1) % 4 == 0)
    		printf("\t");
        }
        printf("\n");
	    if((i+1) % 4 == 0)
		printf("\n");
    }
}
