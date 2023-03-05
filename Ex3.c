/* 2023/3/5 Big Bombs 大炸彈V1
            暴力破解法 */

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>


int main(){

    int row;
    int column;
    int  x, y;
    int min=0;
    int max=1;

    printf("Matrix size: ");
    scanf("%d %d",&row,&column) ;
    int a[row][column];
    
    printf("Input : ");
    scanf("%d %d", &x, &y);

    //build matrix
    for(int i=0; i<row; i++){
        for(int j =0 ; j < column; j++){
            a[i][j] = rand() % (max-min+1) + min;  //生成隨機亂數0.1矩陣
        }
    }
//原始map
    printf("Before Big Bombs-------------------------\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if (a[i][j]==0){
                printf("  ", a[i][j]);
            }
            else{
                printf("%d ", a[i][j]);
            }
        }
        putchar('\n');
    }

    //投放炸彈位置
    a[x][y] = 9;

    //step1.投放附近附近爆炸
    if (a[x-1][y]==1){
        a[x-1][y]=8;
    }
    if (a[x+1][y]==1){
        a[x+1][y]=8;
    }
    if (a[x][y-1]==1){
        a[x][y-1]=8;
    }
    if (a[x][y+1]==1){
        a[x][y+1]=8;
    }

    //step2.連鎖反應
//roe 上到下
    for (int m = 0; m < row; m++){
        for (int n = 0; n < column; n++){
            if (a[m][n]==8){
                if (a[m+1][n]==1){
                    a[m+1][n]=8;
                }
                if (a[m][n+1]==1){
                    a[m][n+1]=8;
                }
            }
        }
    }
// // row 下到上
    for (int o = row-1; o >= 0; o--){
        for (int p = column-1; p >= 0; p--){
            if (a[o][p]==8){
                if (a[o-1][p]==1){
                    a[o-1][p]=8;
                }
                if (a[o][p-1]==1){
                    a[o][p-1]=8;
                }
            }
        }
    }
// //column左到右
    for (int c = 0; c < column; c++){
        for (int d = 0; d < row; d++){
            if (a[c][d]==8){
                if (a[c+1][d]==1){
                    a[c+1][d]=8;
                }
                if (a[c][d+1]==1){
                    a[c][d+1]=8;
                }
            }
        }
    }
// //column右到左
    for (int e = row-1; e >= 0; e--){
        for (int f = column-1; f >= 0; f--){
            if (a[e][f]==8){
                if (a[e-1][f]==1){
                    a[e-1][f]=8;
                }
                if (a[e][f-1]==1){
                    a[e][f-1]=8;
                }
            }
        }
    }

    

//爆炸後的map
    printf("After Big BOMBs!!!-------------------------\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            if (a[i][j]==0){
                printf("  ", a[i][j]);
            }
            else{
                printf("%d ", a[i][j]);
            }
        }
        putchar('\n');
    }
}