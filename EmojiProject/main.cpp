#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=500; i++)

    {
        float angle = 2.0f * 3.1416f * i/500;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.00,0.80,0.00);
    circle(10,10,0,0);

    glColor3f(1.00, 0.86, 0.00);
    circle(9.9,9.9,-0.3,-0.5);

    glColor3f(0.0,0.0,0.00);
    circle(7,7,0,0);

    glColor3f(1.00, 0.86, 0.00);
    circle(8.0,6.0,0,1);

    glColor3f(0.0,0.0,0.00);
    circle(2.5,2.5,-3.0,3.0);

    glColor3f(0.0,0.0,0.00);
    circle(2.5,2.5,3.0,3.0);

    glColor3f(1.00, 0.86, 0.00);
    circle(2.8,2.5,-3.0,2.4);

    glColor3f(1.00, 0.86, 0.00);
    circle(2.8,2.5, 3.0,2.4);

    glColor3f(0.0,0.0,0.00);
    circle(2.2,2.2,3.0,1.3);

    glColor3f(0.0,0.0,0.00);
    circle(2.2,2.2,-3.0,1.3);

    glColor3f(1.0,1.0,1.00);
    circle(2.0,2.0,3.0,1.3);

    glColor3f(1.0,1.0,1.00);
    circle(2.0,2.0,-3.0,1.3);

    glColor3f(0.0,0.0,0.00);
    circle(1.0,1.0,3.5,1.1);

    glColor3f(0.0,0.0,0.00);
    circle(1.0,1.0,-2.5,1.1);

    glColor3f(1.0,1.0,1.00);
    circle(0.2,0.2,4.0,1.1);

    glColor3f(1.0,1.0,1.00);
    circle(0.2,0.2,-2.0,1.1);

    glFlush();

}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("CircleTwoHasu");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
