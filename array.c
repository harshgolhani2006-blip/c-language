// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int first=arr[0];
//     for(int i=0;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[4]=first;
//     for(int j=0;j<5;j++){
//            printf(" %d ",arr[j]); 
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[5];
// int check=1;

// printf("Enter array element:");
// for(int i=0;i<5;i++){
// scanf("%d",&arr[i]);
// }
// for(int j=0;j<5/2;j++){
//     if(arr[j]!=arr[5-j-1]){
//         check=0;
//         break;
//     }
// }
// if(check==1){
//     printf("It is palindronme");
// }else{
//     printf("It is not palindrome");
// }
// return 0;
// }
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6]={-1,-2,3,-4,-5,6};
    int maxsum=INT_MIN ;
    int n=6;
   // int maxsum=arr[0];
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];   
            if(currsum>maxsum){
        maxsum=currsum;
    }
    }
}
printf("%d\n",maxsum);
return 0;
}