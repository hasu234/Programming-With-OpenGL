#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1416
static GLfloat spin = 0;
static GLfloat spin1 = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;
static float	sx	=  2.8;
float p=-200.0;
float q= 120.0;
int f=0,g=0;



void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void spinDisplay_left(void)
{
   spin = spin + .45;
   if (spin > 120.0)
      spin = spin - 120.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - .45;
   if (spin < 0.0)
      spin = spin +120.0;
   glutPostRedisplay();
}

void spinDisplay_left1(void)
{
   spin1 = spin1 + 1;
   if (spin1 > 360.0)
      spin1 = spin1 - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right1(void)
{
   spin1 = spin1 - 1;
   if (spin1 < 0.0)
      spin1 = spin1 +360.0;
   glutPostRedisplay();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();


    if(p<=+50.0)
     p=p+0.05;

    else
        p=-200;
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);


    if(q>=-100.0)
     q=q-0.05;

    else
        q=120;
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);

//background
//sky
    glPushMatrix();
    glTranslatef(0,30,0);
    glBegin(GL_QUADS);
    glColor3f(0, 0, .50);
        glVertex2d(100, 74);
    glColor3f(.53, .81, .92);
        glVertex2d(-100, 74);
    glColor3f(0, 0, .50);
        glVertex2d(-100, 0);
    glColor3f(.94, .97, 1);
        glVertex2d(100, 0);
    glEnd();
    glPopMatrix();


//sun
    glPushMatrix();
    glTranslatef(20,60,0);
    glColor3f(1, .84, 0);
    circle(11,11);
    glPopMatrix();


//trees

    glPushMatrix();
    glTranslatef(-95,60,0);
    glColor3f(0, .80, 0);
    circle(12,15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-95,55,0);
    glColor3f(0.42, .56, 0.14);
    circle(10,8);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-80,55,0);
    glColor3f(0.133, .55, 0.133);
    circle(13,13);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-60,55,0);
    glColor3f(0, .80, 0);
    circle(13,15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-45,50,0);
    glColor3f(0.133, .55, 0.133);
    circle(10,15);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(82,45,0);
    glColor3f(0.133, .55, 0.133);
    circle(10,14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(95,55,0);
    glColor3f(0, .80, 0);
    circle(10,14);
    glPopMatrix();

//cloud

glPushMatrix();

    glTranslatef(q-100,0,0);
    glTranslatef(0,15,0);

    glPushMatrix();
    glTranslatef(51,79,0);
    glColor3f(.80, .80, .76);
    //glColor3f(0, 0, 0);
    circle(10,8);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(75,75,0);
    glColor3f(1, .98, .98);
    //glColor3f(0, 1, 0);
    circle(10,8);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(60,70,0);
    glColor3f(.80, .79, .65);
    glColor3f(.96, .96, .86);
        //glColor3f(1, 0, 0);
    circle(15,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(70,65,0);
    glColor3f(.93, .93, .88);
    //glColor3f(0, 0, 0);
    circle(12,10);
    glPopMatrix();

 glPopMatrix();


//hill
    glPushMatrix();
    glTranslatef(-100,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.55, .27, .075);
        glVertex2d(30, 0);
     glColor3f(.55, .27, .075);
        glVertex2d(0, 30);
    glColor3f(.96, .96, .86);
        glVertex2d(-30, -0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-60,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.55, .27, .075);
        glVertex2d(30, 0);
     glColor3f(.55, .27, .075);
        glVertex2d(0, 30);
    glColor3f(.96, .96, .86);
        glVertex2d(-30, -0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-82,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.55, .27, .075);
        glVertex2d(25, 0);
     glColor3f(.55, .27, .075);
        glVertex2d(0, 30);
    glColor3f(.96, .96, .86);
        glVertex2d(-25, -0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(92,30,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.96, .96, .86);
        glVertex2d(25, 0);
     glColor3f(.55, .27, .075);
        glVertex2d(0, 30);
    glColor3f(.55, .27, .075);
        glVertex2d(-25, -0);
    glEnd();
    glPopMatrix();


//river
    glPushMatrix();
    glTranslatef(0,-35,0);
    glBegin(GL_QUADS);
    glColor3f(.42, .65, .80);
        glVertex2d(100, 75);
    glColor3f(.53, .81, .98);
        glVertex2d(-100, 75);
     glColor3f(.25, .41, .88);
        glVertex2d(-100, 0);
    glColor3f(1, 1, 1);
        glVertex2d(100, 0);
    glEnd();
    glPopMatrix();

// beach
glPushMatrix();
    glTranslatef(0,-100,0);

    glBegin(GL_QUADS);

    glColor3f(0.55, .35, .17);
        glVertex2d(100, 74);
    glColor3f(1, .91, .73);
        glVertex2d(-100, 74);
    glColor3f(0.55, .35, .17);
        glVertex2d(-100, 0);
    glColor3f(0.96, .64, 0.38);
        glVertex2d(100, 0);
    glEnd();

//tress niche
 glRotatef(10, 0.0, 0.0, 1.0);
 glTranslatef(0,-45,0);

    glPushMatrix();
    glTranslatef(-90,60,0);
    glColor3f(0.42, .56, 0.14);
    circle(7,10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-80,65,0);
    glColor3f(0.42, .56, 0.14);
     glColor3f(0, .80, 0);
    //glColor3f(0.133, .55, 0.133);
    circle(10,12);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-65,55,0);
    glColor3f(0, .80, 0);
     glColor3f(0, .39, 0);
    circle(12,16);
    glPopMatrix();

//tree right side
    glTranslatef(160,-30,0);
    //glRotatef(10, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(-90,60,0);
    glColor3f(0.42, .56, 0.14);
    circle(7,10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-80,65,0);
    glColor3f(0.133, .55, 0.133);
    circle(10,12);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-65,55,0);
    glColor3f(0, .80, 0);
    circle(12,16);
    glPopMatrix();



glPopMatrix();

//lomba grass
//1
glPushMatrix();
    glTranslatef(10,-40,0);

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glTranslatef(-7,-2,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glColor3f(0, .39, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-1,0);
    glColor3f(0.42, .56, 0.14);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();
glPopMatrix();

//2
glPushMatrix();
    glTranslatef(60,-100,0);
    glRotatef(10, 0.0, 0.0, 1.0);

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glTranslatef(-7,-2,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.42, .56, 0.14);
    glColor3f(0, .39, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-1,0);
    glColor3f(0.42, .56, 0.14);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();
glPopMatrix();


//3
glPushMatrix();
    glTranslatef(-93,-98,0);
    glRotatef(-10, 0.0, 0.0, 1.0);

    glPushMatrix();
    //glColor3f(0.42, .56, 0.14);
    glColor3f(0.196, .80, 0.196);
    glTranslatef(-7,-2,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, .39, 0);
    glColor3f(0.133, .55, 0.133);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3,-1,0);
    //glColor3f(0.42, .56, 0.14);
    glColor3f(0.133, .55, 0.133);
    glColor3f(0, .39, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 20);
        glVertex2d(-5, 0);
    glEnd();
    glPopMatrix();
glPopMatrix();

//lomba grass ends

//other starts

    if (f==1 && f!=2)
    {
       glTranslatef(p+100,0,0);
    }


// boat

    glPushMatrix();

    if (f!=1 || f==2)
        glTranslatef(-65.8,5.5,0);

    glScalef(3,3,0);


//circle er mto ghurano
    glPushMatrix();

    if(f==1)
        glRotatef(spin, 1.0, 0.0, 0.0);

    glTranslatef(-6.2,-2,0);
    glColor3f(1, .84, 0); //propeler
    circle(2.4,1.7);

    glColor3f(0.55, .28, .14); //propeler
    circle(2.15,1.45);


    glTranslatef(-.8,-2,0);
    glRotatef(50, 0.0, 0.0, 1.0);//
    glColor3f(0.55, .28, .14); //propeler
    circle(1.2,.8);

    glTranslatef(2.5,3,0);
    glRotatef(-90, 0.0, 0.0, 1.0);
    glColor3f(0.55, .28, .14); //propeler
    circle(1.2,.8);

    glPopMatrix();

//upper portion
    glPushMatrix();
    glTranslatef(2.5,-1.5,0);
    glRotatef(3, 0.0, 0.0, 1.0);

    glPushMatrix();
    glTranslatef(5,10,0);
	glRotatef(95, 0.0, 0.0, 1.0);
	glColor3f(0, 0, 0);
    glRectf(5.2,7.7,-1,4.8);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,10,0);
	glRotatef(95, 0.0, 0.0, 1.0);
	glColor3f(1, .27, 0);
    glRectf(5,7.5,-1,5);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(8.2,10,0);
	glRotatef(95, 0.0, 0.0, 1.0);
    glColor3f(0, 0, 0);
    glRectf(4.2,7.7,-1,5.2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.2,10,0);
	glRotatef(95, 0.0, 0.0, 1.0);
    glColor3f(1, .27, 0);
    glRectf(4,7.5,-1,5.4);
    glPopMatrix();

//lower portion
    glTranslatef(0,2,0);
	glRotatef(5, 0.0, 0.0, 1.0);

    glColor3f(0, 0, 0);
    glRectf(10.2,8.2,-4.2,2.2);
    glColor3f(.933, .85, 0.72);
    glRectf(10,8,-4,2);
    glPopMatrix();

    glTranslatef(0,-2,0);
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(20, 8);
        glVertex2d(-7, 4);
        glVertex2d(-5.0, -2); //body of boat
        glVertex2d(15, -2);
    glEnd();


//circle

    glTranslatef(14,3,0);
    glColor3f(1, 1, 0);
    circle(1.7,1.7);

    glColor3f(.0f, 0.4f, 0.55f); //boat body er color
    circle(1.2,1.2);


    glTranslatef(-5,-.5,0);
    glColor3f(1, 1, 0);
    circle(1.7,1.7);

    glColor3f(.0f, 0.4f, 0.55f); //boat body er color
    circle(1.2,1.2);

glPopMatrix();

//boat ends

//olaf start

    if(f==1 && f!=2)
    {
          glScalef(1.3,1.3,0);
          glTranslatef(-10,10,0);
    }

    if(f!=1)
    {
        glTranslatef(tx,ty,0);
        glScalef(2.8,2.8,0);
        glTranslatef(-25,-22,0);
    }



//hands

//right hand......

    glPushMatrix();
    glTranslatef(4.11,3.2,0);
	glRotatef(57, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(6.5,.7,3.2,.3);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(3.5,5,0);
	glRotatef(30, 0.0, 0.0, 1.0);//right hand1
	glColor3f(0.54, .27, 0.075);
    glRectf(3.5,0.4,0,0);
	glPopMatrix();

	glPushMatrix();
    glTranslatef(6.4,.9,0);
	glRotatef(80, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.2,.9,8,.65);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-1,9,0);
	glRotatef(-7, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.5,.9,8,.65);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(2.5,1.7,0);
	glRotatef(50, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.5,.9,8,.65);
	glPopMatrix();


//left hand
    glPushMatrix();
    glTranslatef(-4,6.1,0);
	glRotatef(67, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(-6.5,.7,-3.2,.3);
	glPopMatrix();

	glPushMatrix();
    glTranslatef(-2.3,7.2,0);
	glRotatef(60, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(-9.5,.9,-8,.3);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-2,5.5,0);
	glRotatef(30, 0.0, 0.0, 1.0);//right hand1
	glColor3f(0.54, .27, 0.075);
    glRectf(-4.5,-0.4,0,0);
	glPopMatrix();

	glPushMatrix();
    glTranslatef(-7.6,8,0);
	glRotatef(100, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(-9.2,.9,-7.5,.65);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-1.56,6,0);
	glRotatef(50, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(-9.5,.9,-8,.65);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-2.46,6.7,0);
	glRotatef(60, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(-9.5,.9,-8.4,.65);
	glPopMatrix();



// legs
    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(-4, 0.0, 0.0, 1.0);//left leg
    glTranslatef(-1.7,-5,0);
    circle(1.39,1.24);//left leg
    glPopMatrix();

    glPushMatrix();
	glColor3f(1, .96, .93);
	//glRotatef(-4, 0.0, 0.0, 1.0);//left leg
    glTranslatef(-1.7,-5,0);
    circle(1.25,1.1);//left leg
    glPopMatrix();



    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(-4, 0.0, 0.0, 1.0);//right leg
    glTranslatef(1.7,-5,0);
    circle(1.39,1.24);//left leg
    glPopMatrix();

    glPushMatrix();
	glColor3f(0, 0, 0);
	//glRotatef(-4, 0.0, 0.0, 1.0);//right leg shadow
    glTranslatef(2,-5,0);
    circle(1.39,1.24);//left leg
    glPopMatrix();


    glPushMatrix();
	glColor3f(1.7, .96, .93);
	//glRotatef(-4, 0.0, 0.0, 1.0);//right leg
    glTranslatef(2,-5,0);
    circle(1.25,1.1);//left leg
    glPopMatrix();


//body............

    glPushMatrix();
	glColor3f(0, 0, 0); //lower body border
	circle(4.94,4.84);
    glPopMatrix();

    glPushMatrix();
	glColor3f(0, 0, 0);
    glTranslatef(-.8,0,0); //lower body shadow
	circle(4.14,4.84);
    glPopMatrix();

	glPushMatrix();
	glColor3f(1, .96, .93); //lower body
	circle(4.8,4.7);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 0, 0);
    glTranslatef(.6,5,0); //upper body border
	circle(3.14,3.64);
    glPopMatrix();

    glPushMatrix();
	glColor3f(1, .96, .93);
    glTranslatef(.6,5,0);  //upper body
	circle(3,3.5);
	glPopMatrix();

    glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(1,0,0);
	glRotatef(90, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON); // poly2
        glVertex2d(-0.8, .3);
        glVertex2d(-.8, -.3);
        glVertex2d(0, -.8);
        glVertex2d(.8, -.3);
        glVertex2d(.8, .3);
        glVertex2d(0, .8);
    glEnd();
   glPopMatrix();


    glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(1,-2.8,0);
    glRotatef(290, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON); //poly 3
        glVertex2d(-0.7, .2);
        glVertex2d(-.7, -.2);
        glVertex2d(0, -.7);
        glVertex2d(.7, -.2);
        glVertex2d(0, .7);
    glEnd();
    glPopMatrix();


    glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(1.2,4,0);
    glRotatef(30, 0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);  // poly1
        glVertex2d(-0.8, .3);
        glVertex2d(-.8, -.3);
        glVertex2d(0, -.8);
        glVertex2d(.8, -.3);
        glVertex2d(.8, .3);
        glVertex2d(0, .8);
    glEnd();
    glPopMatrix();

//head

    glPushMatrix();
    glColor3f(0, 0, 0);
	glRotatef(5, 0.0, 0.0, 1.0);//ellipse border
    glTranslatef(1.5,12.5,0);
    circle(3.14,7.14);//left leg
    glPopMatrix();


    glPushMatrix();
    glColor3f(1, .96, .93);
	glRotatef(5, 0.0, 0.0, 1.0);//1st ellipse
    glTranslatef(1.5,12.5,0);
    circle(3,7);//left leg
    glPopMatrix();


    glPushMatrix();
    glColor3f(0, 0, 0); //background
	glRotatef(30, 0.0, 0.0, 1.0);//
    glTranslatef(5,10,0);
    circle(2.14,4.14);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, .96, .93); //background1
	glRotatef(30, 0.0, 0.0, 1.0);//
    glTranslatef(5,10,0);
    circle(2,4);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0); //background2
	glRotatef(-18, 0.0, 0.0, 1.0);//
    glTranslatef(-2,11.6,0);
    circle(2.14,4.14);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, .96, .93); //background2
	glRotatef(-18, 0.0, 0.0, 1.0);//
    glTranslatef(-2,11.6,0);
    circle(2,4);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, .96, .93); //background2
	//glRotatef(-18, 0.0, 0.0, 1.0);//
    glTranslatef(.65,10,0);
    circle(2.75,3);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(.55, .54, .54);
	glRotatef(5, 0.0, 0.0, 1.0);//inside ellipse blue
    glTranslatef(1.5,12.5,0);
    circle(2.4,5.5);//left leg
    glPopMatrix();


//hair
//1
    glPushMatrix();
    glTranslatef(1.7,14.5,0);
   // glRotatef(90, 0.0, 0.0, 1.0);//right hand2
    glScalef(-.4,.7,0);

    glPushMatrix();
    glTranslatef(4.11,3.2,0);
	glRotatef(57, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(6.5,.7,3.2,.3);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(3.5,5,0);
	glRotatef(30, 0.0, 0.0, 1.0);//right hand1
	glColor3f(0.54, .27, 0.075);
    glRectf(3.5,0.4,0,0);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-1,9,0);
	glRotatef(-7, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.5,.9,8,.65);
	glPopMatrix();


    glPopMatrix();

 //2
    glPushMatrix();
    glTranslatef(.5,15,0);
    glRotatef(-20, 0.0, 0.0, 1.0);//right hand2
    glScalef(-.5,.7,0);

    glPushMatrix();
    glTranslatef(4.11,3.2,0);
	glRotatef(57, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(6.5,.7,3.2,.3);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(3.5,5,0);
	glRotatef(30, 0.0, 0.0, 1.0);//right hand1
	glColor3f(0.54, .27, 0.075);
    glRectf(3.5,0.4,0,0);
	glPopMatrix();

	glPushMatrix();
    glTranslatef(6.4,.9,0);
	glRotatef(80, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.2,.9,8,.65);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-1,9,0);
	glRotatef(-7, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.5,.9,8,.65);
	glPopMatrix();


    glPopMatrix();

//3

    glPushMatrix();
    glTranslatef(.1,16,0);
    glRotatef(22, 0.0, 0.0, 1.0);//right hand2
    glScalef(.4,.5,0);

    glPushMatrix();
    glTranslatef(4.11,3.2,0);
	glRotatef(57, 0.0, 0.0, 1.0);//right hand2
	glColor3f(0.54, .27, 0.075);
    glRectf(6.5,.7,3.2,.3);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(3.5,5,0);
	glRotatef(30, 0.0, 0.0, 1.0);//right hand1
	glColor3f(0.54, .27, 0.075);
    glRectf(3.5,0.4,0,0);
	glPopMatrix();


    glPushMatrix();
    glTranslatef(-1,9,0);
	glRotatef(-7, 0.0, 0.0, 1.0);//right hand2
    glColor3f(0.54, .27, 0.075);
    glRectf(9.5,.9,8,.65);
	glPopMatrix();

    glPopMatrix();


//hair ends

//teeth
    glPushMatrix();
    glColor3f(1, .96, .93);
    //glColor3f(1, .96, .93);
	//glRotatef(5, 0.0, 0.0, 1.0);//teeth
    glTranslatef(1.1,10.6,0);
    circle(1.6,1.1);
    //glRectf(1.2,.8,-1.2,-.8);
    glPopMatrix();


    glPushMatrix();
    glColor3f(.55, .54, .54);
    glRotatef(25, 0.0, 0.0, 1.0);//teeth remover
    glTranslatef(3.85,9.5,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, -1);
        glVertex2d(1, 1);
        glVertex2d(-1, 1);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(.55, .54, .54);
    //glColor3f(0, 0, 0);
    //glRotatef(90, 0.0, 0.0, 1.0);//teeth remover
    glTranslatef(2.25,9.8,0);
    glRectf(.5,1.5,0,0);
    glPopMatrix();


    glPushMatrix();
    glColor3f(.55, .54, .54);
	glRotatef(-5, 0.0, 0.0, 1.0);//teeth ellipse shadow
    glTranslatef(-.6,12.5,0);
    circle(2.75,1.35);//left leg
    glPopMatrix();


    glPushMatrix();
    glColor3f(1, .96, .93);
	glRotatef(-5, 0.0, 0.0, 1.0);//teeth elips
    glTranslatef(-.6,12.5,0);
    circle(2.6,1.2);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, .96, .93);
	glRotatef(-3, 0.0, 0.0, 1.0);//teeth elips
    glTranslatef(-.5,15.5,0);
    circle(2.5,2.5);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, .96, .93);
    glRotatef(25, 0.0, 0.0, 1.0);//forehead remover
    glTranslatef(7.5,15.5,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, -1.5);
        glVertex2d(1.5, 1.5);
        glVertex2d(-1.5, 1.5);

    glEnd();
    glPopMatrix();



    glPushMatrix();
    glColor3f(1, .96, .93);
	//glRotatef(5, 0.0, 0.0, 1.0);//hashi remover
    glTranslatef(-1.5,14,0);
    circle(.7,.9);//left leg
    glPopMatrix();


    glPushMatrix();
    glColor3f(1, .96, .93);
	//glRotatef(5, 0.0, 0.0, 1.0);//hashi remover
    glTranslatef(3,14,0);
    circle(.7,.9);//left leg
    glPopMatrix();


//eyes

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye black
    glTranslatef(-.7,15.66,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(.93, .91, .91);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye
    glTranslatef(-.7,15.3,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye moni
    glTranslatef(-.6,15.2,0);
    circle(.5,.6);//left leg
    glPopMatrix();


    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye black
    glTranslatef(1,15.76,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(.93, .91, .91);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye
    glTranslatef(1,15.4,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(1.1,15.3,0);
    circle(.5,.6);//left leg
    glPopMatrix();

//nose

    glPushMatrix();
    glColor3f(1, .27, 0);
    //glColor3f(1, .96, .93);
	glRotatef(55, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(11.8,6.5,0);
    circle(.9,2);
    glPopMatrix();

//new start

//eyebrow
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-1.5,17,0);
    glRectf(1.2,.4,0,0);  //left eyebrow
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, .4);
        glVertex2d(-.8, -1);

    glEnd();
    glPopMatrix();

    glTranslatef(1.7,17.77,0);
    glRectf(-1.2,-.4,0,0); //right eyebrow
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, -.4);
        glVertex2d(.8, -1);
    glEnd();
    glPopMatrix();

//new ends

//crab
glPushMatrix();


    glTranslatef(tx,ty,0);
    glTranslatef(-65,-4,0);
	glRotatef(22, 0.0, 0.0, 1.0);

    if (f!=1)
	glTranslatef(-64,-50,0);

    if (f==1)
    {
        tx=0;
        ty=0;

        glTranslatef(-34,-50,0);

    }


    glPushMatrix();
    glColor3f(.93, 0, 0); //crab body
    circle(5.3,4.2);
    glPopMatrix();


    glPushMatrix();
    glScalef(1.5,1.5,0);
    glTranslatef(0,-10,0);

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye black
    glTranslatef(-.7,15.66,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(.93, .91, .91);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye
    glTranslatef(-.7,15.3,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//left eye moni
    glTranslatef(-.6,15.2,0);
    circle(.5,.6);//left leg
    glPopMatrix();


    glTranslatef(1.2,0,0);

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye black
    glTranslatef(1,15.76,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(.93, .91, .91);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye
    glTranslatef(1,15.4,0);
    circle(.9,1);//left leg
    glPopMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
	//glRotatef(5, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(1.1,15.3,0);
    circle(.5,.6);//left leg
    glPopMatrix();

    glPopMatrix();


    glColor3f(0.0f, 0.0f, 0.0f); //RGB Color
    glBegin(GL_LINES); // It can be any type Gl_POINT,_LINE
        glVertex2d(4.0, 0.0);
        glVertex2d(-4.0, 0.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    //glRotatef(5, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(-1.1,3.5,0);
    glBegin(GL_LINES); // It can be any type Gl_POINT,_LINE
        glVertex2d(0, 2.7);
        glVertex2d(0, 0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glRotatef(-6, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(3.5,.5,0);
    glBegin(GL_LINES); // It can be any type Gl_POINT,_LINE
        glVertex2d(0, 3);
        glVertex2d(0, 0);
    glEnd();


    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-5,-8,0);
    glRectf(1.2,.4,0,0);  //left eyebrow
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 3);
        glVertex2d(-3, -3);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(2,-7,0);
    glRectf(1.2,.4,0,0);  //left eyebrow
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(0, 3);
        glVertex2d(3, -3);

    glEnd();
    glPopMatrix();

//left leg of crab

    glPushMatrix();
    glColor3f(0, 0, 0);
	glRotatef(.5, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(-8.1,-4,0);
    circle(1.2,.9);//left leg

    glTranslatef(-2,1,0);
    circle(1.2,.9);//left leg

    glTranslatef(-1.2,1.5,0);
    circle(1.1,.9);//left leg

    glTranslatef(0,1.2,0);
    circle(1.1,.9);//left leg


    glColor3f(.93, 0, 0);
    glTranslatef(-.5,2,0);
    circle(1.7,2.7);//l

    glPopMatrix();


    glPushMatrix();
    glColor3f(0, 0, 0);
	glRotatef(.5, 0.0, 0.0, 1.0);//right eye moni
    glTranslatef(4.1,-4,0);
    circle(1.2,.9);//left leg

    glTranslatef(2,1,0);
    circle(1.2,.9);//left leg

    glTranslatef(1.2,1.5,0);
    circle(1.1,.9);//left leg

    glTranslatef(0,1.2,0);
    circle(1.1,.9);//left leg


    glColor3f(.93, 0, 0);
    glTranslatef(.5,2,0);
    circle(1.7,2.7);//l

    glPopMatrix();

glPopMatrix();
//crab ends


//umbrella starts

glPushMatrix();
    glScalef(.94,.94,0);
    glTranslatef(8.5,0,0);

glPushMatrix();

    glColor3f(1, 0.188, 0.188);
    glScalef(4,4,0);
    glTranslatef(15,-5,0);
    glBegin(GL_TRIANGLES);

    glColor3f(1, 0.188, 0.188);
        glVertex2d(0, 7);
   glColor3f(1, .85, .14);
        glVertex2d(-8, 0);
    glColor3f(1, 0.188, 0.188);
        glVertex2d(8, 0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1, .498, 0);
        glVertex2d(0, 7);
     glColor3f(1, 0.188, 0.188);
        glVertex2d(-10, 1);
        glVertex2d(-8, 0);
    glEnd();

    glColor3f(1, .498, 0);
     glBegin(GL_TRIANGLES);
        glVertex2d(0, 7);
        glVertex2d(10, 1);
        glVertex2d(8, 0);
    glEnd();


    glTranslatef(0,-6,0);
    glColor3f(.31, .31, .31);
    circle(5,3);

    glTranslatef(0,.7,0);
    glColor3f(1, 0.188, 0.188);
    circle(5,3);


    glTranslatef(-.1,.4,0);
    glColor3f(.31, .31, .31);
    glRectf(.7,5,0,0);

    glTranslatef(.4,-8.4,0);
    glColor3f(0, 0.41, 0.55);
    circle(2,1);

    glColor3f(.31, .31, .31);
    glTranslatef(-.4,0,0);
    glRectf(.7,5,0,0);


    glPushMatrix();
    glTranslatef(6,2.5,0);
    glColor3f(.31, .31, .31);
    circle(2.5,1.5);
    glPopMatrix();

    glColor3f(1, .27, 0);//boshar table color
    glTranslatef(6,3,0);
    circle(2.5,1.5);

    glColor3f(.31, .31, .31);
    glTranslatef(-.1,-3.9,0);
    glRectf(.5,2.3,0,0);

    glColor3f(.31, .31, .31);
    glTranslatef(-1.5,-.74,0);
    glRotatef(-7, 0.0, 0.0, 1.0);
    glRectf(.5,3.2,0,0);


    glColor3f(.31, .31, .31);
    glTranslatef(3.1,.26,0);
    glRotatef(15, 0.0, 0.0, 1.0);
    glRectf(.5,3.4,0,0);




glPopMatrix();

//juice

glPushMatrix();

    glScalef(2,2,0);
    if(tx>=90 && ty==0)
    {
        glTranslatef(19,-18,0);
    }
    else
        glTranslatef(25,-18,0);

    //glScalef(2,2,0);
    //glTranslatef(25,-18,0);

    glPushMatrix();
    glTranslatef(0,3,0);
    glRotatef(-45, 0.0, 0.0, 1.0); //straw
    glColor3f(0, .81, .82);
    glRectf(.4,6,0,0);
    glPopMatrix();

    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, -.5);
        glVertex2d(2.5, 3.6);
        glVertex2d(-2.5, 3.6);
    glEnd();

    glColor3f(.45, 0.164, 0.164);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(2.1, 3.2);
        glVertex2d(-2.1, 3.2);
    glEnd();

    glTranslatef(-1,1.7,0);
    glColor3f(.96, .96, .86);
    glRectf(1,1,0,0);

    glTranslatef(.7,-.5,0);
    glColor3f(.96, .96, .86);
    glRectf(1,1,0,0);

    glTranslatef(0,-4,0);
    glColor3f(.82, .71, .55);
    glRectf(.5,3,0,0);

    glTranslatef(.2,0,0);
    glColor3f(0, 0, 0);
    circle(1.2,.9);

    glColor3f(.82, .71, .55);
    circle(1,.8);

    glPopMatrix();

//juice ends


//fan
glPushMatrix();
glTranslatef(78,-28,0);
glPushMatrix();

    glRotatef(spin1, 0.0, 0.0, 1.0);

    glColor3f(0, 0, 0);
    circle(2.9,2.9);

    glColor3f(1, 1, 0);
    circle(2.5,2.5);

    glPushMatrix();
    glTranslatef(0,1.8,0);
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(1.8, 4.5);
        glVertex2d(-1.8, 4.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.3,0,0);
    glRotatef(90, 0.0, 0.0, 1.0);
     glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(1.8, 4.5);
        glVertex2d(-1.8, 4.5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.3,0,0);
    glRotatef(-90, 0.0, 0.0, 1.0);
     glColor3f(0, 0, 0);
   // glColor3f(.45, 0.164, 0.164);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(1.8, 4.5);
        glVertex2d(-1.8, 4.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-2,0);
    glRotatef(180, 0.0, 0.0, 1.0);
     glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
        glVertex2d(0, 0);
        glVertex2d(1.8, 4.5);
        glVertex2d(-1.8, 4.5);
    glEnd();
    glPopMatrix();

glPopMatrix();

    glTranslatef(-6.7,-10,0);
    glRotatef(-30, 0.0, 0.0, 1.0);
    glColor3f(1, 0, 0);
    glRectf(.7,10,0,0);

glPopMatrix();

glPopMatrix();
// umbrella ends

    glPopMatrix(); //final stack
	glFlush();

}



void init(void)
{
	glClearColor (0.96, .64, 0.38, 0.0);
	glOrtho(-100.0, 100.0, -100.0,100.0, -1.0, 1.0);

}


void spe_key(int key, int x, int y)
{
	switch (key) {

		case GLUT_KEY_LEFT:

		    if(tx>=-100 && tx!=0)
            {
                tx -=2;
            }

            glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:

		    if(tx>=-100 && tx<=90)
            {
               tx +=2;
            }
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
          if (ty>=-70 && ty!=0)
				ty -=2;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
		    if(ty<=30)
				ty +=2;
				glutPostRedisplay();
				break;
	  default:
			break;
	}

}

void normal_key(unsigned char key, int x, int y)
{
	switch (key) {

	    case 'b':
			f=1;
			glutIdleFunc(spinDisplay_left);
			glutPostRedisplay();
			break;

        case 'n': //jump into boat
			f=2;
			glutPostRedisplay();
			break;

        case 'd':
			//spinDisplay_left();
			break;
        case 's':
			 glutIdleFunc(NULL);
			 break;
	    default:
			break;
	}

}
void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            spinDisplay_left1();
            glutIdleFunc(spinDisplay_left1);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
            spinDisplay_right1();
			glutIdleFunc(spinDisplay_right1);
         break;
      default:
         break;
   }
}

int main()
{
    PlaySound("Frozen_In_Summer_song_--_Official_HD.wav", NULL, SND_FILENAME| SND_ASYNC);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (850, 700);
	glutInitWindowPosition (250, 20);
	glutCreateWindow ("2D Olaf Cartoon");
	init();
	glutDisplayFunc(display);
	glutSpecialFunc(spe_key);
	glutKeyboardFunc(normal_key);
	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}
