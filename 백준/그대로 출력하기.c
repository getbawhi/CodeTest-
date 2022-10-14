//입력 및 출력 관련 정리

#include <stdio.h>
#include <string.h>


int main(){
    
    char text[102];
    char c;

    //fgets는 더 이상 읽을 데이터가 없으면 EOF를 리턴한다 
    while(fgets(text,102,stdin)) //fgets(text,102,stdin)이 유지 될 때 까지 
    {    
        printf("%s", text);
    }
  
    
    return 0;
    
    
}
