/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式68】
題目：有n個整數，使其前面各數順序向後移m個位置，最後m個數變成最前面的m個數
程式分析：
程式原始碼：
*/
#include<stdio.h>
void move(int array[20],int n,int m);
int main(){
    int number[20],n,m,i;
    printf("the total numbers is:");
    scanf("%d",&n);
    printf("back m:");
    scanf("%d",&m);
    for(i=0;i<n-1;i++)
        scanf("%d,",&number[i]);
    scanf("%d",&number[n-1]);
    move(number,n,m);
    for(i=0;i<n-1;i++)
        printf("%d,",number[i]);
    printf("%d",number[n-1]);
}

void move(array,n,m) int n,m,array[20];{
    int *p,array_end;
    array_end=*(array+n-1);
    for(p=array+n-1;p>array;p--)
    *p=*(p-1);
    *array=array_end;
    m--;
    if(m>0) move(array,n,m);
}