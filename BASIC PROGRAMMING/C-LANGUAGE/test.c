#include<stdio.h>
int main()
{
    int i=8,j=5,x=0.005,y=-0.01;
    int t = ((j*(i-3))%(x+y-2+i));
    printf("%d",t);
}