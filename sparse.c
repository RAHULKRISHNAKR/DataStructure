#include<stdio.h>
#include<stdlib.h>

void input(int r1,int c1, int s[100][100]);
void toTuple(int r,int c,int s[100][100],int t[100][3]);

int main(){
    int s[100][100],t[100][3];
    int choice,r1,c1;
    while(choice!=3){
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter rows and columns of matrix");
                    scanf("%d %d",&r1,&c1);
                    input(r1,c1,s);
                    break;
            case 2: toTuple(r1,c1,s,t);
                    break;
            case 3: break;
        }
    }
    return 0;
}

void input(int r1,int c1, int s[100][100]){
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&s[i][j]);
        }
    }

    printf("\n--------Matrix in Normal Form---------\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d",s[i][j]);
        }
        printf("\n");
    }    
}

void toTuple(int r,int c,int s[100][100],int t[100][3]){
    int k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]!=0){
                t[k][0]=i;
                t[k][1]=j;
                t[k][2]=s[i][j];
                k++;
            }
        }
    }
    t[0][0]=r;
    t[0][1]=c;
    t[0][2]=k-1;

    for(int i=0;i<k;i++){
        for(int j=0;j<3;j++){
            printf("%d",t[i][j]);
        }
        printf("\n");
    }
}

/*
5610
001
021
115
156
219
228
236
304
445
452*/

/*
568
004
018
146
235
308
3341
351
4441
*/

