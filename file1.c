#include <stdio.h>
void ChangeValue(float a,float b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("this is a :%.1f \n", a);
    printf(" this is b :%.1f", b);
}
int main() {
    float a,b;
    printf("entrez la valuer de a :");
    scanf("%f",&a);
    printf("entrez la valuer de b :");
    scanf("%f",&b);
    ChangeValue( a,  b);


    return 0;
}