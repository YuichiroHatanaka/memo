#include<stdio.h>

int main(void){
  char st[255];
  int count[26];
  for((int i = 0;i < 26;i++){
    count[i] = 0;
  }
  printf("Enter a word : ");
  scanf("%s", st);//スキャン
  printf("%s¥n",st);//確認
  for(int i=0;st[i] != '¥0';i++){
  int tmp=st[i];
  if(tmp>95) tmp ‐= 32;//小文字だったら大文字に
  tmp ‐= 65;//A→0, B→1, …Z→25
  count[tmp]++;
  }
  for(int i=0;i<26;i++){
  if(count[i]>0)//文字がないやつはプリントする必要がない
  printf(“%c;%d ”,i+65,count[i]);//65(97)足して文字に戻す。
  }
  printf("¥n");
  return 0;
}
