#include <stdio.h>
int main(){
int s,t,v;
s = 7;
t = 2;
v = (s * 2)/t;
t = t * v - 10;
s = 4 + t * 3;
t = 13 % 7;
v = t + s / 5;
printf("s:%d, t: %d e v: %d",s,t,v);
return 0;
}

// O valor de s = 16, de t = 6 e v = 9
