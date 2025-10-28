// //WAP to go last zero.
// #include<stdio.h>
// int main(){
//     int i,n;
//     int arr[100];
//     printf("Enter number of element :");
//     scanf("%d",&n);
//     printf("Enter %d element of array :",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }int j=0;
//     for(i=0;i<n;i++){
//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d\n",arr[i]); 
// }
// }
//WAP to find best time to buy and sell stock.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter stock prices: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0]; 
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        
        if (prices[i] < minPrice)
            minPrice = prices[i];
        int profit = prices[i] - minPrice;
        if (profit > maxProfit)
            maxProfit = profit;
    }

    printf("Maximum Profit = %d\n", maxProfit);
    return 0;
}