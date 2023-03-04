#include <stdio.h>  

int main(){
    printf("score : ");
    int score;  
    scanf("%d", &score);

    switch (score/10)
    {
    case 10:
        printf("A\n");
        break;
    case 9:
        printf("B\n");
        break;
    case 8:
        printf("C\n");
        break;
    case 7:
        printf("D\n");
        break;
    case 6:
        printf("E\n");
        break;
    
    default:
        printf("F\n");
        break;
    }


}