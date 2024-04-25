#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<windows.h>

int x, y, fruitx, fruity, score, gameover, flag;
int width = 20, height = 20;
int tailX[100], tailY[100];
int countTail = 0;
void delay(unsigned int mseconds)
{
    Sleep(mseconds);
}
void setup()
{
    gameover = 0;
    x = width / 2;
    y = height / 2;

    fruitx = rand() % 20;
    fruity = rand() % 20;

lebel1:
    if (fruitx == 0)
    {
        goto lebel1;
    }

lebel2:
    if (fruity == 0)
    {
        goto lebel2;
    }
}

void draw()
{
    int i, j, k;
    system("cls");
    for (i = 0; i <= width; i++)
    {
        for (j = 0; j <= height; j++)
        {
            if (i == 0 || i == width || j == 0 || j == height)
            {
                printf("*");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("O");
                }
                else if (fruitx == i && fruity == j)
                {
                    printf("F");
                }
                else
                {
                    int ch = 0;
                    for (k = 0; k < countTail; k++)
                    {
                        if (i == tailX[k] && j == tailY[k])
                        {
                            printf("o");
                            ch =1;
                        }
                    }
                    if (ch == 0)
                    {
                        printf(" ");
                    }


                }

            }
        }
        printf("\n");
    }
    printf("Score = %d",score);
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 'd':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 's':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;

        default:
            break;
        }
    }
}

void MakeLogic()
{
    int i;
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (i = 1; i < countTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];

        tailX[i] = prevX;
        tailY[i] = prevY;

        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
    if (x < 0 || x > width || y < 0 || y > height)
    {
        gameover = 1;
    }
   for(i = 0; i<countTail;i++)
    {
        if (x==tailX[i] && y == tailY[i])
        {
            gameover = 1;
        }

    }

    if (fruitx == x && fruity == y)
    {
    lebel3:
        fruitx = rand() % 20;
        if (fruitx == 0)
        {
            goto lebel3;
        }

    lebel4:
        fruity = rand() % 20;
        if (fruity == 0)
        {
            goto lebel4;
        }
        score += 10;
        countTail++;
    }
}

int main()
{
    int m,n;
    char l;
    lebel10:
    setup();

    while (!gameover)
    {
        draw();
        input();
        MakeLogic();
        delay(100);
    }

    printf("\nPress Y to continue again : ");
    scanf("%s",&l);
    if (l=='y' || l=='Y')
    {
        goto lebel10;
    }

    return 0;
}
