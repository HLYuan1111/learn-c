#include <stdio.h>  
// 類別：if - else

int main(){
    printf("================================\n");
    int score;  
    scanf("%d", &score);

    if(score <= 59){
        printf("F\n");
    }

    else if (score<=69){
        printf("E\n");
    }

    else if (score<=79){
        printf("D\n");
    }

    else if (score<=89){
        printf("C\n");
    }

    else if (score<=99){
        printf("B\n");
    }

    else if (score== 100){
        printf("A\n");
    }
    
}