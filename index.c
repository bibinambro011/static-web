#include <stdio.h>
int arr1[100]={1,2,1,6,3,4,10,9,1,1,1},size=11,unique=0;
void main(){
     for(int i=0;i<size;i++){
       int count=0;
       for(int j=0;j<size;j++){
           if(arr1[i]==arr1[j] && j<i){
               break;
           }else if(arr1[i]==arr1[j]){
               count++;
           }
       }
       if(count==1){
           unique++;
       }
   }
   printf("unique element count is %d ",unique);
}