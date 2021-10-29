#include <math.h>
#include <stdio.h>
int median(int a, int b, int c){
 if (b>a && b>c || c>a && a>b){
 printf("The median value is %d\n", a);