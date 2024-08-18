#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    
    char s[12]="hello,world";
    for(int i=0;i<sizeof(s);i++){
        printf("%c,%d ",s[i],i);
    }
    
    puts("please input the card name:");
    scanf("%2s",card_name);
    int val=0;
    if(card_name[0]=='K'||card_name[0]=='Q'||card_name[0]=='J'){
        val = 10;
    }else if(card_name[0]=='A'){
        val = 11;
    }else {
        val = atoi(card_name);
    }
    
    printf("the point of card is : %i\n",val);

    return 0;
}
