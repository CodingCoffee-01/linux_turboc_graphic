/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式9】
題目：有5個人坐在一起，問第五個人多少歲？他說比第4個人大2歲。問第4個人歲數，他說比第3個人大2歲。問第三個人，又說比第2人大兩歲。問第2個人，說比第一個人大兩歲。最後問第一個人，他說是10歲。請問第五個人多大？

程式分析：利用遞迴的方法，遞迴分為回推和遞推兩個階段。要想知道第五個人歲數，需知道第四人的歲數，依次類推，推到第一人（10歲），再往回推。

程式原始碼：
*/
#include <stdio.h> 
#include "conio.h"
int age(n) int n;{
  int c;
  if(n==1) c=10;
  else c=age(n-1)+2;
  return(c);
}
void main(){
  printf("%d",age(5));
  getch();
}