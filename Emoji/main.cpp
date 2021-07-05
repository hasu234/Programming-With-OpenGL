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

    glColor3f(1.0f, 1.1f, 0.0f);
    circle(10,10,0,0);
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(9.8,10,-0.7,-0.7);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(1.5,1.5,-5.8,3.5);
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(2,1.5,-5.8,3.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(1,1,-6,2.7);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.8,0.8,-6,2.7);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(0.5,0.5,-5.8,2.8);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(1.5,1.5,3,3.5);
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(2,1.5,3,3.1);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(1,1,3,2.7);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(0.8,0.8,3,2.7);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(0.5,0.5,3.18,2.8);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(5,4,-1,-4);
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(5.5,4,-1,-1.5);

    
    
    

    glFlush();

}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200,100);
    glutCreateWindow("STAR");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
