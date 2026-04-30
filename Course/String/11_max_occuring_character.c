#include<stdio.h>
#include<string.h>
int main(){
    //Find maximum occuring character.
    char str[100];
    int i,freq,max=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int cnt[strlen(str)];
    for(int i=0; i<=strlen(str); i++){
        cnt[i]=0;
        if(str[i]!=' '){ 
            for(int j=0; j<=strlen(str); j++){
                if(str[i]==str[j]){
                    cnt[i]+=1;
                }
            }
        }
    }
    for(i=0; i<=strlen(str); i++){
        if(cnt[i]>max){
            max=cnt[i];
            freq=i;
        }
    }
    printf("'%c' is the maximum occuring character and occurs %d times.\n",str[freq],max);
return 0;
}