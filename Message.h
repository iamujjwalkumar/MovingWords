#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define WIDTH 1200
#define HEIGHT 9
void delay(float value)
{
    float temp1=10*value;
    clock_t temp2=clock();
    while(clock()<temp2+temp1);
}
char BG[HEIGHT][WIDTH];
void initialize()
{
  for(int i=0;i<HEIGHT;i++)
     for(int j=0;j<WIDTH;j++)
         BG[i][j]=' ';
}
void margin()
{
  printf("\n\t");
}
void display()
{
for(int i=0;i<HEIGHT;i++){
    margin();
    for(int j=0;j<80;j++)
        printf("%c",BG[i][j]);
    }
}
void A(int value)
{
BG[2][value-1]='#';BG[2][value]='#';BG[2][value+1]='#';
BG[3][value-3]='#';BG[3][value-2]='#';BG[3][value+2]='#';BG[3][value+3]='#';
BG[4][value-3]='#';BG[4][value-2]='#';BG[4][value+2]='#';BG[4][value+3]='#';
BG[5][value-3]='#';BG[5][value-2]='#';BG[5][value-1]='#';BG[5][value]='#';BG[5][value+1]='#';BG[5][value+2]='#';BG[5][value+3]='#';
BG[6][value-3]='#';BG[6][value-2]='#';BG[6][value+2]='#';BG[6][value+3]='#';
BG[7][value-3]='#';BG[7][value-2]='#';BG[7][value+2]='#';BG[7][value+3]='#';
BG[8][value-3]='#';BG[8][value-2]='#';BG[8][value+2]='#';BG[8][value+3]='#';
}
void B(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';
}
void C(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';
BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}
void D(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(1)]='#';BG[5][value+(2)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(1)]='#';BG[6][value+(2)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';
}

void E(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void F(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';
}

void G(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(0)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(1)]='#';BG[5][value+(2)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void H(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';BG[5][value+(2)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(1)]='#';BG[6][value+(2)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void I(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-1)]='#';BG[3][value+(0)]='#';
BG[4][value+(-1)]='#';BG[4][value+(0)]='#';
BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-1)]='#';BG[6][value+(0)]='#';
BG[7][value+(-1)]='#';BG[7][value+(0)]='#';
BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void J(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(1)]='#';BG[5][value+(2)]='#';
BG[6][value+(-3)]='#';BG[6][value+(-2)]='#';BG[6][value+(1)]='#';BG[6][value+(2)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';
}

void K(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-3)]='#';BG[3][value+(-2)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-3)]='#';BG[4][value+(-2)]='#';BG[4][value+(0)]='#';BG[4][value+(1)]='#';
BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';
BG[6][value+(-3)]='#';BG[6][value+(-2)]='#';BG[6][value+(0)]='#';BG[6][value+(1)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void L(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void M(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(-1)]='#';BG[3][value+(0)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}

void N(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(-2)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(-1)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(0)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(1)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}

void O(int value)
{
BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';
}

void P(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';
}

void Q(int value)
{
BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(0)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(-1)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-2)]='#';BG[7][value+(-1)]='#';BG[7][value+(0)]='#';BG[7][value+(1)]='#';
BG[8][value+(0)]='#';
}

void R(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(0)]='#';BG[6][value+(1)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}

void S(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';
BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(1)]='#';BG[6][value+(2)]='#';
BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';
}

void T(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-1)]='#';BG[3][value+(0)]='#';
BG[4][value+(-1)]='#';BG[4][value+(0)]='#';
BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-1)]='#';BG[6][value+(0)]='#';
BG[7][value+(-1)]='#';BG[7][value+(0)]='#';
BG[8][value+(-1)]='#';BG[8][value+(0)]='#';
}

void U(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';
}

void V(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';BG[5][value+(1)]='#';BG[5][value+(2)]='#';
BG[6][value+(-3)]='#';BG[6][value+(-2)]='#';BG[6][value+(1)]='#';BG[6][value+(2)]='#';
BG[7][value+(-2)]='#';BG[7][value+(-1)]='#';BG[7][value+(0)]='#';BG[7][value+(1)]='#';
BG[8][value+(-1)]='#';BG[8][value+(0)]='#';
}

void W(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-4)]='#';BG[4][value+(-3)]='#';BG[4][value+(2)]='#';BG[4][value+(3)]='#';
BG[5][value+(-4)]='#';BG[5][value+(-3)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(2)]='#';BG[5][value+(3)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(-1)]='#';BG[6][value+(0)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-4)]='#';BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';BG[7][value+(3)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}

void X(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-3)]='#';BG[3][value+(-2)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(-2)]='#';BG[4][value+(-1)]='#';BG[4][value+(0)]='#';BG[4][value+(1)]='#';
BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-2)]='#';BG[6][value+(-1)]='#';BG[6][value+(0)]='#';BG[6][value+(1)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}

void Y(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(-4)]='#';BG[3][value+(-3)]='#';BG[3][value+(2)]='#';BG[3][value+(3)]='#';
BG[4][value+(-3)]='#';BG[4][value+(-2)]='#';BG[4][value+(1)]='#';BG[4][value+(2)]='#';
BG[5][value+(-2)]='#';BG[5][value+(-1)]='#';BG[5][value+(0)]='#';BG[5][value+(1)]='#';
BG[6][value+(-1)]='#';BG[6][value+(0)]='#';
BG[7][value+(-1)]='#';BG[7][value+(0)]='#';
BG[8][value+(-1)]='#';BG[8][value+(0)]='#';
}

void Z(int value)
{
BG[2][value+(-4)]='#';BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(-1)]='#';BG[2][value+(0)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';BG[2][value+(3)]='#';
BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[4][value+(0)]='#';BG[4][value+(1)]='#';
BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-2)]='#';BG[6][value+(-1)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(-2)]='#';BG[8][value+(-1)]='#';BG[8][value+(0)]='#';BG[8][value+(1)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}
void Comma(int value)
{
BG[5][value+(-3)]='#';BG[5][value+(-2)]='#';
BG[6][value+(-3)]='#';BG[6][value+(-2)]='#';BG[6][value+(-1)]='#';
BG[7][value+(-1)]='#';
BG[8][value+(-2)]='#';
}
void Exclamation(int value)
{
BG[2][value+(-1)]='#';BG[2][value+(0)]='#';
BG[3][value+(-1)]='#';BG[3][value+(0)]='#';
BG[4][value+(-1)]='#';BG[4][value+(0)]='#';
BG[5][value+(-1)]='#';BG[5][value+(0)]='#';
BG[6][value+(-1)]='#';BG[6][value+(0)]='#';
BG[8][value+(-1)]='#';BG[8][value+(0)]='#';
}
void smiley(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-3)]='#';BG[3][value+(-2)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[6][value+(-4)]='#';BG[6][value+(-3)]='#';BG[6][value+(2)]='#';BG[6][value+(3)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(-1)]='#';BG[7][value+(0)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-1)]='#';BG[8][value+(0)]='#';
}
void sad(int value)
{
BG[2][value+(-3)]='#';BG[2][value+(-2)]='#';BG[2][value+(1)]='#';BG[2][value+(2)]='#';
BG[3][value+(-3)]='#';BG[3][value+(-2)]='#';BG[3][value+(1)]='#';BG[3][value+(2)]='#';
BG[6][value+(-2)]='#';BG[6][value+(-1)]='#';BG[6][value+(0)]='#';BG[6][value+(1)]='#';
BG[7][value+(-3)]='#';BG[7][value+(-2)]='#';BG[7][value+(1)]='#';BG[7][value+(2)]='#';
BG[8][value+(-4)]='#';BG[8][value+(-3)]='#';BG[8][value+(2)]='#';BG[8][value+(3)]='#';
}
void SWITCH(char c,int value)
{
  switch(c)
  {
      case 'A':A(value);break;
      case 'B':B(value);break;
      case 'C':C(value);break;
      case 'D':D(value);break;
      case 'E':E(value);break;
      case 'F':F(value);break;
      case 'G':G(value);break;
      case 'H':H(value);break;
      case 'I':I(value);break;
      case 'J':J(value);break;
      case 'K':K(value);break;
      case 'L':L(value);break;
      case 'M':M(value);break;
      case 'N':N(value);break;
      case 'O':O(value);break;
      case 'P':P(value);break;
      case 'Q':Q(value);break;
      case 'R':R(value);break;
      case 'S':S(value);break;
      case 'T':T(value);break;
      case 'U':U(value);break;
      case 'V':V(value);break;
      case 'W':W(value);break;
      case 'X':X(value);break;
      case 'Y':Y(value);break;
      case 'Z':Z(value);break;
      case '(':sad(value);break;
      case ')':smiley(value);break;
      case ',':Comma(value);break;
      case '!':Exclamation(value);break;
      default:break;
  }
}
void make_program()
{
 char Arr[HEIGHT][10];
 for(int i=0;i<HEIGHT;i++)
   gets(Arr[i]);

 for(int i=0;i<HEIGHT;i++)
    for(int j=0;j<10;j++)
     {
        if(Arr[i][j]=='y')
            printf("BG[%d][value+(%d)]='#'%c",i,j-5,';');
       if(j==9)
        printf("\n");
     }
}

void message()
{
int q=-1;
char Sentence[1000];
char Letter[1000];
printf("Enter The Text: ");
gets(Sentence);

for(int i=0,top=-1;;i++)
{
  if(Sentence[i]!=':')
     Letter[++top]=Sentence[i];
    if(Sentence[i]=='\0')
        break;
}

for(int i=0;Letter[i]!='\0';i++)
    if(Letter[i]>96&&Letter[i]<123)
       Letter[i]-=32;

//count the numbers of letters
int count=0;
for(int i=0;Letter[i]!='\0';i++)
    count++;

int TEMP[count];

//set the temp value:
 for(int i=0;Letter[i]!='\0';i++)
    TEMP[i]=(2*i+1)*5;
do{
  q=++q%12;
  int top=1;
  initialize();
   for(int i=0;Letter[i]!='\0'&&TEMP[count-1]==-5;i++)
    TEMP[i]=(2*i+1)*5+100;
  for(int i=0;i<count;i++)
      {SWITCH(Letter[i],TEMP[i]);
      TEMP[i]--;}
  display();
  delay(1);
  system("cls");
    }while(1);
}
