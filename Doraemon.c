#include <graphics.h>

int main() {
    // initialize the graphics window
    initwindow(600, 500, "Doraemon Head");

    // draw the head of Doraemon
    setfillstyle(SOLID_FILL, BLUE);
    setcolor(BLUE);
    circle(300, 150, 80);
    floodfill(300, 150, BLUE);

    // draw the eyes
    setfillstyle(SOLID_FILL, WHITE);
    setcolor(WHITE);
    circle(270, 120, 10);
    floodfill(270, 120, WHITE);
    circle(330, 120, 10);
    floodfill(330, 120, WHITE);
    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLACK);
    circle(270, 120, 5);
    floodfill(270, 120, BLACK);
    circle(330, 120, 5);
    floodfill(330, 120, BLACK);

    // draw the nose
    setfillstyle(SOLID_FILL, BLUE);
    setcolor(BLUE);
    circle(300, 150, 8);
    floodfill(300, 150, BLUE);

    // draw the mouth
    setcolor(BLACK);
    arc(300, 160, 220, 320, 30);

    // draw the whiskers
    setcolor(BLACK);
    line(260, 160, 220, 170);
    line(260, 170, 220, 170);
    line(260, 180, 220, 170);
    line(340, 160, 380, 170);
    line(340, 170, 380, 170);
    line(340, 180, 380, 170);

    // wait for a key press before closing the window
    getch();
    closegraph();

    return 0;
}

