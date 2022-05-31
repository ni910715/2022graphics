#include <windows.h>
#include <stdio.h>
int main()
{
    PlaySound("07071147.wav",NULL,SND_ASYNC);///ASYNC不等待
    while(1){
        printf("請輸入數字: ");
        int N;
        if(N==1) PlaySound("do.wav",NULL,SND_ASYNC);
        if(N==2) PlaySound("re.wav",NULL,SND_ASYNC);
        if(N==3) PlaySound("mi.wav",NULL,SND_ASYNC);
    }
}

