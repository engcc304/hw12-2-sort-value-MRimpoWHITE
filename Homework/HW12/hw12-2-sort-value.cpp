/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ

    Test case:
        Student A
        Name :
            Yorn
        Score :
            21.42

        Student B
        Name :
            Omen
        Score :
            56.00

        Student C
        Name :
            Alice
        Score :
            80.75

        Student D
        Name :
            Violet
        Score :
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name :
            Payna
        Score :
            77.77

        Student B
        Name :
            Zanis
        Score :
            88.88

        Student C
        Name :
            Lubu
        Score :
            66.66

        Student D
        Name :
            Krixi
        Score :
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/

#include <stdio.h>

struct Student
{
    char Name[20];
    float score;
} typedef S;

int main()
{

    char sn = 'A';
    S sinfo[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Student %c \nName : \n", sn);
        scanf("%s", sinfo[i].Name);
        printf("Score : \n");
        scanf("%f", &sinfo[i].score);
        sn++;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (sinfo[i].score < sinfo[j].score)
            {
                S temp = sinfo[i];
                sinfo[i] = sinfo[j];
                sinfo[j] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s", sinfo[i].Name);
        if ( i < 3 )
        {
            printf(" ");
        }
        
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%.2f", sinfo[i].score);
        if ( i < 3 )
        {
            printf(" ");
        }
    }

    return 0;
}