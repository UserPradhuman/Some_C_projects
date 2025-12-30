//Pascals Triangle

#include<stdio.h>

int main(){
    int row;
    printf("Enter how many rows to print: ");
    scanf("%d",&row);
    int cntr=((row+(row-1))%2==0)? (row+(row-1)+1)/2:row;

    for(int i=0;i<row;i++){
        for(int k=1;k<row+1;++k){
            if(k==cntr){
                int number= 1;
                for (int j=0;j<i+1;j++){
                    printf("%d ",number);
                    number=number*(i-j)/(j+1);
                    
                }
                printf("\n");
                break;
            }
            else printf(" ");
        }
        cntr-=1;
    }
    return 0;
}




/* #include <stdio.h>

void main() {
    int no_row, c = 1, blk, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &no_row);
    for (i = 0; i < no_row; i++) {
        for (blk = 1; blk <= no_row - i; blk++) {
            printf("  "); 
        }

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
          
                c = 1;
            } else {
                c = c * (i - j + 1) / j;
            }

            printf("%4d", c);
        }
        printf("\n");
    }
} */