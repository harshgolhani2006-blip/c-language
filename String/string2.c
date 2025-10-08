// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="hello";
//     int len=strlen(str);
//     int count;
//     for(int i=0;i<len;i++){
//         count=0;
//         for(int j=0;j<i;j++){
//             if(str[i]==str[j]){
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//             printf("%c",str[i]);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="aioubvs";
//     int i, vcount=0,ccount=0;
//     int len=strlen(str);
//     for(i=0;i<len;i++){
//         char ch=str[i];
//         if(ch=='a'||ch=='i'||ch=='o'||ch=='u'){
//             vcount++;
//         }else{
//             ccount++;
//         }
//     }
//     printf("number of vowels: %d",vcount);
//     printf("number of consonent: %d\n",ccount);
//     return 0;
// }
  #include <stdio.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    scanf("%s", str);   // read full line

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;
        if (str[i] != ' ' && str[i] != '0') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    count++;
                    str[j] = '0'; // mark counted character
                }
            }
            printf("%c -> %d\n", str[i], count);
        }
    }

    return 0;
}
