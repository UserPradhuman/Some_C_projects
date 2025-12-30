#include<stdio.h>

int main(){
    float a=1.0,b=1.0;
    printf("%f\n",a);
    while(1){
        printf("%f\n",b/a);
        int h=b;
        b=b+a;
        a=h;
        if(b>1000){
            break;
        }
    }

    return 0;
}