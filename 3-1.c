//入力された数字について、約数であるかを判別するプログラム
#include<stdio.h>
int main(void)
{
  int a,b;

  printf("一つ目の数字を入力してください:");
  scanf("%d¥n",&a);

  printf("二つ目の数字を入力してください:");
  scanf("%d¥n",&b);

  if(a%b==0){
    printf("%dは%dの約数です¥n",b,a);
  }else{
    printf("%dは%dの約数ではありません¥n",b,a);
  }

  return 0;
}
      
