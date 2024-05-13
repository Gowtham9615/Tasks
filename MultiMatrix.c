#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    int b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&b[i][j]);
        }
//        printf("\n");
    }
    int res[r][c];
    printf("Multiplication matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=0;
            for(int k=0;k<c;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d ",res[i][j]);
        }

        printf("\n");
    }
}
