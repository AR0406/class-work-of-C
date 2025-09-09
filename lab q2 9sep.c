#include <stdio.h>
int main (){
    int a,b,c, largest, max_ab;
    print("Enter three number:");
    scanf("%d %d %d",&a, &b, &c);
    max_ab = (a > b)? a:b;
    largest = (max_ab > c) ? max_ab : c;
    printf("The largest number is %d\n", largest);
    return 0;
}