#include <stdio.h>
int checkNumbers(int number1 , int number2){
    int i,result, sum = 0;
    result = number1 / number2;

    for(i = 1; i < result; i++){
        if(result%i == 0){
            sum++;
        }
    }
    if(sum == 1){
        printf("true");
        printf("\n");
        printf("%d",result);
    }
    else{

        printf("false");
        printf("\n");
        printf("%d",result);
    }
}
int main() {
   int number1;
   int number2;
   printf("please enter the number1 : ");
   scanf("%d",&number1);
   printf("please enter the number1 : ");
   scanf("%d",&number2);
   checkNumbers(number1, number2);

    return 0;
}