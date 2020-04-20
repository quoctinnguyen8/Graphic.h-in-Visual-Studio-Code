#include <graphics.h>
#include <cmath>
#define PI 3.1415926
#define SCREEN_W 500
#define SCREEN_H 500

int main()
{
    initwindow(SCREEN_W, SCREEN_H);
    int x = SCREEN_W / 2;
    int y = SCREEN_H / 2;
    int rad = SCREEN_H / 3;
    int color = WHITE;
    setlinestyle(1, 0, 1);
    while (!kbhit())
    {
        for (double i = -0.5 * PI; i < 1.5 * PI; i += 0.1)
        {
            int x1 = rad * cos(i) + x;
            int y1 = rad * sin(i) + y;
            setcolor(color);
            line(x, y, x1, y1);
            delay(20);
        }
        setfillstyle(SOLID_FILL,BLACK);
        bar(0, 0, SCREEN_W, SCREEN_H);
    }
    return 0;
}