
#include <stdio.h>

int main() {
int n1,n2,temp=0;
scanf("%d %d",&n1,&n2);
int arr1[n1],arr2[n2];
for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
}
int arr[n1+n2];
for(int i=0;i<n1;i++){
    arr[i]=arr1[i];
}
for(int j=0;j<n2;j++){
    arr[n1+j]=arr2[j];
}
for(int i=0;i<n1+n1-1;i++){
    for(int j=0;j<n1+n2-1-i;j++){
        if(arr[j+1]<arr[j]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
double med=0;
int total=n1+n2;
    if(total%2!=0){
    med=arr[total/2];
}
else{
   med=(arr[(total/2)-1]+arr[total/2])/2;
}
if(med==(int)med)
    printf("%d",(int)med);
else
    printf("%.1f",med);
    return 0;
}