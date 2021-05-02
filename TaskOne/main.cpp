#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
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
    glColor3f(1.00,0.65,0.00);
    circle(10,10,0,0);
    glColor3f (01, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f (-3, -1, 0.0);
    glVertex3f (-5, -6, 0.0);
    glVertex3f (0, -4, 0.0);
    glVertex3f (5, -6, 0.0);
    glVertex3f (3, -1, 0.0);
    glVertex3f (7, 3, 0.0);
    glVertex3f (3, 3, 0.0);
    glVertex3f (0, 8, 0.0);
    glVertex3f (-3, 3, 0.0);
    glVertex3f (-7, 3, 0.0);

    glEnd();

    glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("TaskOneHasu");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
