#include<stdio.h>
#define MAX 20
int main(){
    int set1[MAX],set2[MAX],setUnion[MAX];
    int l1,l2,k;
    int i,cnt=0,j,ch;
    int flag = 1;
    printf("Enter the length of set 1 : ");
    scanf("%d",&l1);
    printf("Enter %d elements : ",l1);
    for(i=0;i<l1;i++){
        scanf("%d",&set1[i]);
    }
    printf("Enter the length of set 2 : ");
    scanf("%d",&l2);
    printf("Enter %d elements : ",l2);
    for(i=0;i<l2;i++){
        scanf("%d",&set2[i]);
    }

    printf("\n1.Union\n2.Intersection\n3.Difference\n4.Set1-Set2\n5.Set2-Set1\n\nEnter Your Choice : ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            for(i=0;i<l1;i++){
                setUnion[cnt++] = set1[i];
            }
            for(k=0;k<l2;k++){
                flag = 1;
                for(i=0;i<l1;i++){
                    if(set1[i]==set2[k]){
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                        setUnion[cnt++]=set2[k];
                    }
            }
            for(i=0;i<cnt;i++){
                printf("%d ",setUnion[i]);
            }
        break;
    }
}