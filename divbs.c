#include<stdio.h>
float div(float x,float y,float low,float high)
{
 float mid=(low+high)/2;
    if(y*mid==x)
    {
        return mid;
    }
    else if(y*mid<x)
    {
        low=mid;
    }
    else
    {
        high=mid;
    }
return div(x,y,low,high);
}
int main()
{
    float x,y,low=0;
    float v;
    int sign=1;
    scanf("%f %f",&x,&y);
    if(y==0)
    return 0;
    if(x<0)
    {
        x=-x;
        sign=-sign;
    }
    if(y<0)
    {
        y=-y;
        sign=-sign;
    }
    float high=x;
    v=div(x,y,low,high);
    if(sign==-1)
    {
        v=-v;
    }
    printf("%f",v);
    return 0;
}