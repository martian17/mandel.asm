.run
```c
#include <stdio.h>
void plotCoord(double x,double y){
double zx = x;
double zy = y;

int i;
for(i = 0; i < 100; i++){
double zx1 = x+zx*zx-zy*zy;
double zy1 = y+2*(zx*zy);
zx = zx1;
zy = zy1;
if(zx*zx+zy*zy > 4){
printf(" ");
return;
}
}
printf("▉");
}

void drawMandelbrot(double x, double y, double zoom){
int w = 40;
int h = 9;
int i;
int j;
for(i = 0; i < h; i++){
for(j = 0; j < w; j++){
double xx = x+((double)j-(double)w/2)/((double)w/2)*4/zoom;
double yy = y+((double)i-(double)h/2)/((double)h/2)*2.5/zoom;
plotCoord(xx,yy);
}
printf("\n");
}
}

int main(){
printf("`");
drawMandelbrot(-0.7453,0.1127,3000);
printf("`");
return 1;
}
```