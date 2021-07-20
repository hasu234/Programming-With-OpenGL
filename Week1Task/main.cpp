#include <GL/gl.h>
#include <GL/glut.h>

void display(void)

{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
glColor3f (1.0, 1.0, 1.0);
glVertex3f (0.3, 0.6, 0.0);
glVertex3f (0.3, 0.1, 0.0);
glVertex3f (0.7, 0.1, 0.0);
glVertex3f (0.7, 0.6, 0.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f (0.4,0.9,0.42);

glVertex3f (0.25, 0.6, 0.0);
glVertex3f (0.75, 0.6, 0.0);
glVertex3f (0.5, 0.9, 0.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f (0.05,0.05,0.00);
glVertex3f(0.45,0.1,0.0);
glVertex3f(0.45,0.45,0.0);
glVertex3f(0.55,0.45,0.0);
glVertex3f(0.55,0.1,0.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f (0.1,0.1,0.00);

glVertex3f(0.35,0.3,0.0);
glVertex3f(0.35, 0.4, 0.0);
glVertex3f(0.4,0.4,0.0);
glVertex3f(0.4,0.3,0.0);

glEnd();

glBegin(GL_POLYGON);
glColor3f (0.1,0.1,0.00);

glVertex3f(0.6,0.4,0.0);
glVertex3f(0.65, 0.4, 0.0);
glVertex3f(0.65,0.3,0.0);
glVertex3f(0.6,0.3,0.0);
glEnd();

glFlush ();

}




void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Hasu's House");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
