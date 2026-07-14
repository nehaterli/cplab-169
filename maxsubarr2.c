#include<stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++) {
  scanf("%d",&arr[i]);
 }
 int maxsum=arr[0];
 int start,end=0;
 for(int i=0;i<n;i++) {
  int sum=0;
  for(int j=i;j<n;j++) {
   sum+=arr[j];
   if(sum > maxsum) {
    maxsum=sum;
    start=i;
    end=j;
   }
  }
 }
 printf("Maximum Subarray Sum Using 2loops:%d\n",maxsum);
 printf("Subarray is:\n");
 for(int i=start;i<=end;i++) {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}