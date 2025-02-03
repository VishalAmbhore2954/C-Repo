#include<stdio.h>
#include<stdlib.h>

int add(int a,int b){
    int add = a+b;
    return add;
}

int sub(int a,int b){
    int sub = a-b;
    return sub;
}

int mul(int a,int b){
    int mul = a*b;
    return mul;
}

int div1(int a,int b){
    int div = a/b;
    return div;
}


int main(){
    int a,b,ch,a1,s,m,d;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("1. Addtion\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    while(1){
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            a1 = add(a,b);
            printf("Addition is %d\n",a1);
            break;
        case 2:
            s = sub(a,b);
            printf("Substraction is %d\n",s);
            break;
        case 3:
            m = mul(a,b);
            printf("Multiplication is %d\n",m);
            break;
        case 4:
            d = div1(a,b);
            printf("Division is %d\n",d);
            break;
        case 5:
            printf("You are exit now\n");
            exit(0);
        default :
            printf("Invalid Choice!\n");
    }
    }
    return 0;
}