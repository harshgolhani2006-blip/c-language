// #include<stdio.h>
// int main(){
//     int n,i;
//     int marks[100];
//     int sum=0,max,min;
//     float avg;
//     printf("Enter number of students:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter marks of student %d:",i+1);
//         scanf("%d",&marks[i]);
//         sum+=marks[i];
//     }
//     max=min=marks[0];
//     for(i=1;i<n;i++){
//         if(marks[i]>max){
//             max=marks[i];
//         }
//         if(marks[i]<min){
//             min=marks[i];
//         }
//     }avg=(float)sum/n;
//     printf("\nTotal marks=%d",sum);
//     printf("\nAverage marks=%f",avg);
//     printf("\nMaximum marks=%d",max);
//     printf("\nMinimum marks=%d",min);   
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i;
//     int run[100];
//     int sum=0,max,min;
//     float avg;
//     printf("Enter number of players:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter run of player %d:",i+1);
//         scanf("%d",&run[i]);
//         sum+=run[i];
//     }
//     max=min=run[0];
//     for(i=1;i<n;i++){
//         if(run[i]>max){
//             max=run[i];
//         }
//         if(run[i]<min){
//             min=run[i];
//         }
//          avg=(float)sum/n;
//     printf("\nTotal run=%d",sum);
//     printf("\nAverage run=%f",avg);
//     printf("\nMaximum run=%d",max);
//     printf("\nMinimum run=%d",min); 
//     return 0;
// }
// }
// #include<stdio.h>
// int main(){
//     int i;
//     int bills[12];
//     int sum=0,max,min;
//     float avg;
//     for(i=0;i<12;i++){
//         printf("Enter Electricity bills for month %d:",i+1);
//         scanf("%d",&bills[i]);
//         sum+=bills[i];
//     }
//     max=min=bills[0];
//     for(i=1;i<12;i++){
//         if(bills[i]>max){
//             max=bills[i];
//         }
//         if(bills[i]<min){
//             min=bills[i];
//         }
//          avg=(float)sum/12;
//     printf("\nTotal Electricity bills for the years=%d",sum);
//     printf("\nAverage Monthly bills=%f",avg);
//     printf("\nMaximum Bills=%d",max);
//     printf("\nMinimum Bills=%d",min); 
//     return 0;
// }
// }
// #include<stdio.h>
// int main(){
//     int seats[10]={0};
//     int choice,seatnum;
//     do{
//         printf("\n------Bus Seats Booking------\n");
//         printf("1. show a seat\n");
//         printf("2. Book a seat\n");
//         printf("3.cancel a seat\n");
//         printf("4.exit\n");
//         printf("Enter your choice:");
//         scanf("%d",&choice);
//         switch (choice)
//         {
//         case 1:
//         printf("\nSeat Status(0=Empty,1=Booked):\n");
//         for(int i=0;i<10;i++){
//             printf("Seat %d: %d\n",i+1,seats[i]);
//         }
//             break;
//             case 2:
//             printf("Enter seat number to book(1-10):");
//             scanf("%d",&seatnum);
//             if(seatnum<1 || seatnum>10){
//                 printf("Invalid seat number!!!\n");
//                     break;
//                 }else if(seats[seatnum-1]==1){
//                     printf("Seat %d already booked!!!\n",seatnum);
//                 }else{
//                     seats[seatnum-1]=1;
//                     printf("Seat %d booked successfully!!!\n",seatnum);
//                 }
//                 break;
//             case 3:
//             printf("Enter seat number to cancel(1-10):");
//             scanf("%d",&seatnum);
//             if(seatnum<1 || seatnum>10){
//                 printf("Invalid seat number!!!\n");
//                     break;
//             }else if(seats[seatnum-1]==0){
//                     printf("Seat %d is not booked yet!!!\n",seatnum);
//                 }else{
//                     seats[seatnum-1]=0;
//                     printf("Seat %d cancelled successfully!!!\n",seatnum);
//                 }
//                 break;
//                 case 4:
//                 printf("Exiting the program...\n");
//                 break;
//         default: printf("Invalid choice!!!\n"); 
//             break;
//             }
//         }while(choice!=4);
// return 0;
// }
// #include<stdio.h>
// void BubbleSort(int arr[],int n){
//     int i,j,temp;
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("Sorted array:");
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[5]={2,4,1,5,4};
//     BubbleSort(arr,5);
//     return 0;
// }
#include<stdio.h>
int Bsearch(int arr[5]){
    int s=0;
    int e=4;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==5){
            return mid;
        }else{
            if(arr[mid]<5){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int result=Bsearch(arr);
    if(result==-1){
        printf("Element not found");
    }else{
        printf("Element found at index %d",result);
    }
    return 0;
}