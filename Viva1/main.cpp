#include <GL/glut.h>
#include <stdlib.h>

void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.1, 1.0);
    glBegin( GL_POLYGON);
	  glVertex2f( 7.0, 3.0 );
	  glVertex2f( 2.0, -5.0 );
	  glVertex2f( 4.0, 0.8 );
	  glVertex2f( 5.0, 8.8 );
	glEnd();
	glFlush();
}



int main(int argc, char *argv[])
{
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutCreateWindow("VIVA");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return EXIT_SUCCESS;
}
