#include<stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int arr[n];
 int start,end=0;
 for(int i=0;i<n;i++) {
  scanf("%d",&arr[i]);
 }
 int maxsum=arr[0];
 for(int i=0;i<n;i++) {
  for(int j=i;j<n;j++) {
   int sum=0;
   for(int k=i;k<=j;k++) {
    sum+=arr[k];
   }
   if(sum > maxsum) {
    maxsum=sum;
    start=i;
    end=j;
   }
  }
 }
 printf("Maximum subarray sum using 3 loops:%d\n",maxsum);
 printf("Subarray is:");
 for(int i=start;i<=end;i++) {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}