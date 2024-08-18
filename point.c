#include<stdio.h>
int y=8;

void go_south_east(int *lat,int *lon){
    
    *lat=*lat-1;
    
    *lon=*lon+1;
}

int main(){
    int x=4;
    int lat=32;
    int lon=64;
    go_south_east(&lat,&lon);
    printf("the now location is [%i,%i]\n",lat,lon);
    printf("x的地址是%p\n",&x);
    printf("y的地址是%p\n",&y);
}
