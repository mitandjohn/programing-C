#include <math.h>
#include <stdio.h>
int main(){
    float x = 1.0;
    float y = 2.0;
    printf("if x= %f and y=%f then Y^6+X.Y^5+X^2.Y^4+X^3.Y^3+X^4.Y^2+X^5.Y+X^6 = %f",x, y, pow(y,6)+x*pow(y,5)+pow(x,2)*y+pow(x,4)*pow(y,3)+pow(x,4));
}