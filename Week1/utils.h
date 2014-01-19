#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define EndSentenceCharacters ".?!"

// to lower a string
void toLower(char* str){
  int i;
  for (i = 0; i < strlen(str); i++){
    if ('A' <= str[i] && 'Z' >= str[i]){
      str[i] = str[i] - 'A' + 'a';
    }
  }
}

// check a character is an alphabetic or not
int isAlphabet(char c){
  return (c<= 'z' && c >='a')||(c<='Z' && c >= 'A');
}

// check a character is a character that end of sentence or not
int isEndSentenceCharacter(char c){
  int i;
  for(i=0;i<strlen(EndSentenceCharacters);i++){
    if(c == EndSentenceCharacters[i])
      return 1;
  }
  return 0;
}

char* intToStr(int num){
  char buf[10];
  sprintf(buf,"%d",num);
  char* buff = (char*)malloc((strlen(buf)+1)*sizeof(char));
  strcpy(buff,buf);
  return buff;
}

char* catStr(char* s1, char* s2){
  char* s = (char*)malloc((strlen(s1)+strlen(s2)+1)*sizeof(char));
  strcpy(s,s1);
  strcpy(&s[strlen(s1)],s2);
  return s;
}

int compare_str(const void * a, const void * b){
  const char *pa = *(const char**)a;
  const char *pb = *(const char**)b;

  return strcmp(pa,pb);
}
