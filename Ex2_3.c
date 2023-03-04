#include <stdio.h>  

int main(){
    int score; 

    while (score != -1){
        printf("score : ");
        scanf("%d", &score);
        if(score == -1){
            printf("End of run...");
            break;}
        else if (score==100){
            printf("A\n");
            }
        else if(score>=90 && score<=99){
            printf("B\n");
            }
        else if(score>=80 && score<=89){
            printf("C\n");
            }
        else if(score>=70 && score<=79){
            printf("D\n");
            }
        else if(score>=60 && score<=69){
            printf("E\n");
            }
        else{
            printf("F\n");
            }
    }
} 

        
