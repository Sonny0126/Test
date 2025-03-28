#include <stdio.h>
 //a와 b의 합 구하기
 int func(int a, int b)
 {
    return (a+b);
 }
 
void main()
 {
     int a, b;
 
     scanf("%d", &a);
     scanf("%d", &b);
 
     printf("%d", func(a, b) + func(a, b));
     return;
 }