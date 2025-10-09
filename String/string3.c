// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="hello";
//     char target='e';
//     char nstr[10]={0};
//     int  len=strlen(str);
//     int j=0;
//     for(int i=0;i<len;i++){
//         if(str[i]!=target){
//             nstr[j]=str[i];
//             j++;
//         }
//     }
//     printf("%s",nstr);
// return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[100];
// int freq[256]={0};
// int len=strlen(str);
// int i;
// printf("Enter a string:");
// scanf("%s",str);
// for(int i=0;i<len;i++){
//     freq[str[i]]++;
// }
// for(int i=0;i<len;i++){
//     if(freq[str[i]]==1){
//         printf("%c",str[i]);
//         break;
//     }
// }
// return 1;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);  // get length after input

    // Bubble sort (character sorting)
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}
