#include <stdio.h>  

int main(){
    // Start Info 程式執行時輸出
    // printf("================================\n");
    // printf("|> ED1 Power Function\n");
    printf("================================\n");
    printf("Please Enter base and power.\n");
    printf("* * * * * * * * * * * * * * * *\n");

    // Input 使用者輸入
    int base;   //基底
    int power;  //次方
    int result;  
    scanf("%d %d", &base, &power);

    // Output 輸出結果
    if(power == 0 && base == 0){
        printf("Does not exist!!!\n");
    }

    else if(power == 0){
        printf("1 \n"); 
    }

    else if(base == 0){
        printf("e^0 = 1 \n"); 
    }

    else{
        result = base;
        for(int i = 1; i < power; i++){
                result = result * base;
        }
        printf("%d\n", result);
    }


    // // Stop 程式停止時輸出
    // printf("* * * * * * * * * * * * * * * *\n");
    // printf("|> Program: End Of Run...\n\n");

    }


