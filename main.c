#include<stdio.h>
#include<inttypes.h>
#define SIGNAL_A (1<<0)
#define SIGNAL_B (1<<1)
#define SIGNAL_C (1<<2)
#define SIGNAL_D (1<<3)

uint16_t pack_signal(int a,int b,int c,int d)
{
    int packed_value=0;
    if(a)
    packed_value|=SIGNAL_A;
    if(b)
    packed_value|=SIGNAL_B;
    if(c)
    packed_value|=SIGNAL_C;
    if(d)
    packed_value|=SIGNAL_D;

    return packed_value;

}
uint16_t unpack_signals(packed_value)
{
    int w = packed_value&SIGNAL_A;
    if(w)
    printf("AC is ON\n");
    printf("w-->%d\n",w);
    int x = packed_value&SIGNAL_B;
    if(x)
    printf("Power is On\n");
    printf("x-->%d\n",x);
    int y = packed_value&SIGNAL_C;
    if(y)
    printf("Fan is On\n");
    printf("y-->%d\n",y);
    int z = packed_value&SIGNAL_D;
    if(z)
    printf("Windshield on\n");
    printf("z-->%d\n",z);
}
int main()
{
    uint16_t packed_signal=pack_signal(1,0,1,1);
    //printf("%d",packed_signal);
    printf("",packed_signal);
    unpack_signals(packed_signal);
    return 0;
}
