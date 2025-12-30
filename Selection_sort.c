#include<stdio.h>
int main(){

    int a[8]={4,6,3,8,9,1,0,7};
    int min;

    for(int i=0;i<8;i++){
        min=i;
        for (int j=i+1;j<8;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            int h=a[i];
            a[i]=a[min];
            a[min]=h;
        }

    }
    for(int l=0;l<8;l++){
        printf("%d\n",a[l]);
    }

    return 0;
}