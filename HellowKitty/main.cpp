#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,15);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy, GLint p, GLint q)
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=p;i<=q;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();


}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f);

    circle(3.3,4,2,-0.2,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(3.3,4,-2,-0.2,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(3,3.7,2,-0.2,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(3,3.7,-2,-0.2,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(2.7,1.7,4,2,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(2.7,1.7,-4,2,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(2.4,1.4,4,2,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(2.4,1.4,-4,2,0,100);

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex2f(-5.0,-2.0);

    glVertex2f(5.0,-2.0);

    glVertex2f(0.0,9.0);

    glEnd();

    glColor3f(0.98f, 0.65f, 0.82f);
    glBegin(GL_POLYGON);

    glVertex2f(-4.5,-1.7);

    glVertex2f(4.5,-1.7);

    glVertex2f(0.0,8.7);

    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);

    circle(2,3,0,4.5,0,100);


    glColor3f(0.96f, 0.29f, 0.6f);

    circle(1.7,2.7,0,4.5,0,100);



    glColor3f(0.0f, 0.0f, 0.0f);

    circle(5,3.8,0,7,0,100);

    glColor3f(1.0f, 1.0f, 1.0f);

    circle(4.7,3.5,0,7,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(1.5,2.3,-3,9.5,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(1.5,2.3,3,9.5,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(1.5,2.3,-2.9,9,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(1.5,2.3,2.9,9,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(0.6,0.7,-2,6.5,0,100);


     glColor3f(0.0f, 0.0f, 0.0f);

    circle(0.6,0.7,2,6.5,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(0.7,0.5,0,5.5,0,100);


    glColor3f(1.0f, 1.0f, 0.0f);

    circle(0.5,0.3,0,5.5,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(0.8,2,1.5,10.5,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(2,0.8,1.5,10.5,0,100);


    glColor3f(0.96f, 0.29f, 0.6f);

    circle(0.5,1.7,1.5,10.5,0,100);


     glColor3f(0.96f, 0.29f, 0.6f);

    circle(1.7,0.5,1.5,10.5,0,100);


    glColor3f(0.0f, 0.0f, 0.0f);

    circle(0.6,0.6,1.5,10.5,0,100);


    glColor3f(1.0f, 1.0f, 0.0f);

    circle(0.3,0.3,1.5,10.5,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(0.7,1.1,5.2,-0.6,0,100);


    glColor3f(1.0f, 1.0f, 1.0f);

    circle(0.7,1.1,-5.2,-0.6,0,100);


    glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Computer Graphics");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
