#include <stdio.h>
#include "CMP3_MCI.h"
CMP3_MCI mp3;

int main()
{
    mp3.Load("07071147.mp3");
    mp3.Play();

    printf("�H�K���A��J�Ʀr�{���N�d���o: ");
    int N;
    scanf("%d", &N);
}
