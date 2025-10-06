// #include<stdio.h>
// int main(){
//     char name[50];
//     printf("Enter your name:");
//     scanf("%s",name);
//     printf("your name is %s",name);
//     return 0;
// }
// #include<stdio.h>
//#include<string.h>
// int main(){
//     char name[]="harsh";
//     printf("name=%c",name[0]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char name[]="harsh";
//     int i;
//     for(i=0;name[i]!='\0';i++){
//         printf("%c\n",name[i]);
//     }
// printf(" string length=%d",ln);
//     return 1;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[]="harsh";
//     int i;
//     int ln=strlen(name);
//     for(i=0;name[i]!='\0';i++){
//         printf("%c\n",name[4-i]);
//     }
//     printf("string length=%d",ln);
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     char name[]="hello";
//     char data[10];
//     for(int i=0;name[i]!='\0';i++){
//         printf("%c\n",name[i]);
//     }
//     for(int i=0;name[i]!='\0';i++){
//         data[i]=name[i];
//     }
//     printf("%s",data);
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[50];
//     int isTrue = 1; 

//     printf("Enter name: ");
//     scanf("%s", name);

//     int ln = strlen(name);

//     for (int i = 0; i < ln / 2; i++) {
//         if (name[i] != name[ln - i - 1]) {
//             isTrue = 0;
//             break;
//         }
//     }

//     if (isTrue == 1) {
//         printf("It is a palindrome\n");
//     } else {
//         printf("It is not a palindrome\n");
//     }

//     return 0;
// }
#include<stdio.h>
int main(){
    char str[100],result[100];
    int i,j,k=0;
    int isRepeated;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        isRepeated=0;
        for(j=0;j<k;j++){
            if(result[j]==str[i]){
                isRepeated=1;
                break;
            }
        }
        if(!isRepeated){
            result[k]=str[i];
            k++;
        }
    }
    result[k]='\0';
    printf("String after removing repeated letter : %s\n",result);
    return 1;
}


   