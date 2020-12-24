#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void halfcircle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=50;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void eye(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void triangleLeft1(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-4.0,0.5);
    glVertex2f(-4.0,-0.5);
    glVertex2f(-8.0,-0.25);

    glEnd();

    glFlush();
}
void triangleRight1(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(4.0,0.5);
    glVertex2f(4.0,-0.5);
    glVertex2f(8.0,-0.25);

    glEnd();

    glFlush();
}
void triangleLeft11(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-8.0,-0.25);
    glVertex2f(-7.25,-2.5);
    glVertex2f(-7.2,-0.25);

    glEnd();

    glFlush();
}
void triangleRight11(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(8.0,-0.25);
    glVertex2f(7.25,-2.5);
    glVertex2f(7.2,-0.25);

    glEnd();

    glFlush();
}

void triangleLeft2(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-4.0,-1.0);
    glVertex2f(-3.5,-1.5);
    glVertex2f(-7.0,-1.35);

    glEnd();

    glFlush();
}
void triangleRight2(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(4.0,-1.0);
    glVertex2f(3.5,-1.5);
    glVertex2f(7.0,-1.35);

    glEnd();

    glFlush();
}

void triangleLeft22(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-6.8,-1.35);
    glVertex2f(-6.0,-1.35);
    glVertex2f(-6.0,-3.25);
    glEnd();

    glFlush();
}
void triangleRight22(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(6.8,-1.35);
    glVertex2f(6.0,-1.35);
    glVertex2f(6.0,-3.25);

    glEnd();

    glFlush();
}

void triangleLeft3(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-2.0,-2.0);
    glVertex2f(-1.5,-2.5);
    glVertex2f(-5.5,-2.35);

    glEnd();

    glFlush();
}
void triangleRight3(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(2.0,-2.0);
    glVertex2f(1.5,-2.5);
    glVertex2f(5.5,-2.35);

    glEnd();

    glFlush();
}
void triangleLeft33(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(-5.5,-2.35);
    glVertex2f(-4.5,-2.35);
    glVertex2f(-4.0,-3.25);
    glEnd();

    glFlush();
}
void triangleRight33(void)
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.16f, 0.0f);
    glVertex2f(5.5,-2.35);
    glVertex2f(4.5,-2.35);
    glVertex2f(4.0,-3.25);

    glEnd();

    glFlush();
}
void eyeLeft(void)
{


    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8,4.9);
    glVertex2f(-0.8,4.6);
    glVertex2f(-2.5,4.2);

    glEnd();

    glFlush();
}
void eyeRight(void)
{

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8,4.9);
    glVertex2f(0.8,4.6);
    glVertex2f(2.5,4.2);

    glEnd();

    glFlush();
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.16f, 0.0f);
    circle(4.5,3,0,0);
    glColor3f(1.0f, 0.87f, 0.60f);
    eye(1,1.5,-1,3);
    eye(1,1.5,1,3);
    glColor3f(0.0f, 0.28f, 0.73f);
    circle(0.3,0.3,-0.5,3);
    circle(0.3,0.3,1,3);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(0.15,0.15,-0.5,3);
    circle(0.15,0.15,1,3);
    glColor3f(1.0f, 0.87f, 0.60f);
    circle(0.1,0.1,-0.4,3.1);
    circle(0.1,0.1,1.1,3.1);
    triangleLeft1();
    triangleRight1();
    triangleLeft11();
    triangleRight11();
    triangleLeft2();
    triangleRight2();
    triangleLeft22();
    triangleRight22();
    triangleLeft3();
    triangleRight3();
    triangleLeft33();
    triangleRight33();
    eyeLeft();
    eyeRight();
    glColor3f(1.0f, 1.0f, 1.0f);
    halfcircle(3,1.8,0,0);
    glColor3f(1.0f, 0.16f, 1.0f);


    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("LAb Final");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
