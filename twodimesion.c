#include<stdio.h>
#include<string.h>

int main(){
char tracks[][80]={
    "i left my heart in Harvard Med Schppl"
    "Newark,Newark - a wanderful town",
    "dancing with a dark",
    "from here to maternity",
    "a girl from two Jima",
};
char s0[] = "with";
if(strstr(tracks[2],s0)){
    printf("yes i find it");
}else{
    printf("can not find");
}

printf("tarck[4] is %s\n",tracks[4]);
}
