#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include<unistd.h>
#include <string.h>
#include<dos.h>
int flag = 0;
void *currentfont;

void setFont(void *font)
{
	currentfont = font;
}

void drawstring(float x, float y, float z,const char *string)
{
	//char *c;
	int len = (int)strlen(string);
	int i;
	glRasterPos3f(x, y, z);
	for (i = 0; i < len; i++)
	{
		glColor3f(0.0, 0.0, 0.0);
		glutBitmapCharacter(currentfont, string[i]);
	}
}

void frontscreen(void)
{
    glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 1, 0);
	drawstring(0.0 - 50, 90.0, 0.0, "MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING");
	glColor3f( 0, 1,0);
	drawstring(3 - 50, 70, 0.0, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1, 0.5, 0);
	drawstring(35 - 50, 50, 0.0, "A MINI PROJECT ON");
	glColor3f(1, 1, 1);
	drawstring(10 - 50, 40, 0.0, "GRAPHICAL SIMULATION OF DATA STRUCTURES");
	glColor3f(1, 0.5, 0);
	drawstring(45 - 50, 20, 0.0, "BY:");
	glColor3f(1,1,1);
	drawstring(15 - 50, 10, 0.0, "RAJATHA                                        4MT16CS066");
	glColor3f(1,1,1);
	drawstring(15 - 50, 0, 0.0, "REENA MARIA MACHADO         4MT16CS069");
	glColor3f(1, 0.5, 0);
	drawstring(45 - 50, -20, 0.0, "GUIDES:");
	glColor3f(1,1,1);
	drawstring(38 - 50, -30, 0.0, "PRASHANTH B S");
	glColor3f(1,1,1);
	drawstring(38 - 50, -40, 0.0, "SARANYA BABU");
	glColor3f(0,1,0);
	drawstring(32 - 50, -60, 0.0, "PRESS ENTER TO START");
	glutSwapBuffers();
	glFlush();
}

void stackdes()
{
    glClearColor(0,0,0,1);
    	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 1, 0);
	drawstring(20 - 50, 90.0, 0.0, "STACK DATA STRUCTURE");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 70.0, 0.0, "*    In computer science, a stack is an abstract");
		glColor3f(1, 0.1, 1);
	drawstring(010 - 50, 60.0, 0.0, "        data type that serves as a collection of");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 50.0, 0.0, "      elements, with two principal operations:");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 30.0, 0.0, "*    PUSH: which  adds an element to the collection.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 10.0, 0.0, "*    POP: which removes the most recently added element.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, -10.0, 0.0, "*    The order in which elements come off a stack gives");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, -20.0, 0.0, "       rise to its alternative name, FIFO(last in,first out)");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
}

void arraydes()
{
    glClearColor(0,0,0,1);
    	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 1, 0);
	drawstring(20 - 50, 90.0, 0.0, "ARRAY DATA STRUCTURE");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 70.0, 0.0, "*    An array is a container object that holds");
		glColor3f(1, 0.1, 1);
	drawstring(010 - 50, 60.0, 0.0, "         a fixed number of values of a single type.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 40.0, 0.0, "*    The length of an array is established when");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 30.0, 0.0, "       the array is created.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 10.0, 0.0, "*    After creation its length is fixed.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, -10.0, 0.0, "*    Each item in an array is called an element.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, -30.0, 0.0, "*    Each element is accessed by its numerical index.");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
}


void queuedes()
{
    glClearColor(0,0,0,1);
    	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0, 1);
	drawstring(20 - 50, 90.0, 0.0, "QUEUE DATA STRUCTURE");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 70.0, 0.0, "*    A queue is a linear structure which follows a");
		glColor3f(1, 0.1, 1);
	drawstring(010 - 50, 60.0, 0.0, "      particular order in which the operation are");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 50.0, 0.0, "      performed.");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 30.0, 0.0, "*    The order is first in first out(FIFO)");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 10.0, 0.0, "*    In a queue we remove the item the least recently ");
	glColor3f(1, 0.1, 1);
	drawstring(10 - 50, 0.0, 0.0, "      added.");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
}

int i,j,k,yr1=0,a=0;
//array block
void arrblk()
{
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-70+a+yr1,-10);
    glVertex2f(-50+a+yr1,-10);
    glVertex2f(-50+a+yr1,10);
    glVertex2f(-70+a+yr1,10);
    glEnd();
    glFlush();
}

void arrayid()
{
    glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                    1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 10
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(1, 0,0);
	drawstring(50-100, 60, 0.0, "elem = 10");
		glColor3f(1, 0,0);
	drawstring(20-90, 20, 0.0, "     i                ");
	 for(j=0;j<15000;j++)
      for(k=0;k<15000;k++);
        glColor3f(1, 0,1);
	drawstring(35-100, 0, 0.0, "10");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                    1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
	yr1=0;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
   for(j=0;j<15000;j++)
      for(k=0;k<15000;k++);
    //INSERT 20
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(1, 0,0);
	drawstring(50-100, 60, 0.0, "elem = 20");
	 glColor3f(1, 0,1);
	drawstring(35-100, 0, 0.0, "10");
	glColor3f(1, 0,0);
	drawstring(20-90, 20, 0.0, "                            i");
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(1, 0,1);
	drawstring(55-100, 0, 0.0, " 20");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                    1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
	yr1=0;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 30
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(1, 0,0);
	drawstring(50-100, 60, 0.0, "elem = 30");
	 glColor3f(1, 0,1);
	drawstring(35-100, 0, 0.0, "10                    20");
	glColor3f(1, 0,0);
	drawstring(20-90, 20, 0.0, "                                                 i");
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(1, 0,1);
	drawstring(75-100, 0, 0.0, "  30");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                    1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
	yr1=0;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 40
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(1, 0,0);
	drawstring(50-100, 60, 0.0, "elem = 40");
	 glColor3f(1, 0,1);
	drawstring(35-100, 0, 0.0, "10                    20                    30");
	glColor3f(1, 0,0);
	drawstring(20-90, 20, 0.0, "                                                                       i");
	 for(j=0;j<13000;j++)
    for(k=0;k<13000;k++);
    glColor3f(1, 0,1);
	drawstring(48-50, 0, 0.0, "  40");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                    1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
	yr1=0;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
  for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 50
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "ARRAY INSERT OPERATION");
	glColor3f(1, 0,0);
	drawstring(50-100, 60, 0.0, "elem = 50");
	 glColor3f(1, 0,1);
	drawstring(35-100, 0, 0.0, "10                    20                    30                     40");
	glColor3f(1, 0,0);
	drawstring(20-90, 20, 0.0, "                                                                                             i");
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(1, 0,1);
	drawstring(75-95, 0, 0.0, "                                          50");
	glColor3f(0, 0,0);
	drawstring(20-90, -20, 0.0, "     0                     1                    2                    3                    4");
	glutSwapBuffers();
	glFlush();
	yr1=0;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(30-50, 80, 0.0, "ARRAY INSERT OPERATION AND DISPLAY");
	 glColor3f(1, 0,1);
	drawstring(55-100, 0, 0.0, "10                  20                    30                     40                    50");
	glColor3f(0, 0,0);
	drawstring(40-90, -20, 0.0, "     0                     1                     2                      3                      4");
	  for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(50-90, -40, 0.0, "values = 10, 20, 30, 40, 50");
	  for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(1, 0, 0);
	drawstring(0-90, 70, 0.0, "LOGIC:-");
	glColor3f(0, 0, 1);
	drawstring(0-90, 50, 0.0, "void inst( )");
		glColor3f(0, 0, 1);
	drawstring(0-90, 40, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, 30, 0.0, "for(i=0;i<5;i++)");
			glColor3f(0, 0, 1);
	drawstring(20-90, 20, 0.0, "    a[i] = elem");
	glColor3f(0, 0, 1);
	drawstring(0-90, 10, 0.0, "}");
	glColor3f(0, 0, 1);
	drawstring(0-90, -10, 0.0, "void display( )");
	glColor3f(0, 0, 1);
	drawstring(0-90, -20, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, -30, 0.0, "for(i=0;i<5;i++)");
	glColor3f(0, 0, 1);
	drawstring(20-90, -40, 0.0, "     print (a[i])");
	glColor3f(0, 0, 1);
	drawstring(0-90, -50, 0.0, "}");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
	yr1=0,a=20;
   for(i=0;i<5;i++)
   {
       arrblk();
       yr1=yr1+20;
   }
}

//stack push operation
int yr=0;
void stkblk()
{
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-10,-50+yr);
    glVertex2f(-10,-30+yr);
    glVertex2f(10,-30+yr);
    glVertex2f(10,-50+yr);
    glEnd();
    glFlush();
}

int yy=0;
void stackpush()
{
    //EMPTY STACK
    glClearColor(1,1,1,0);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, -65, 0.0, "TOP=-1");
	glutSwapBuffers();
	glFlush();
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 10
   for(i=0;i<6;i++)
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0, 0);
	drawstring(20-50, -45, 0.0, "TOP= 0");
	yr=0;
	 for(j=0;j<5;j++)
   {
       stkblk();
       yr=yr+20;
   }
	glColor3f(1, 0, 1);
	drawstring(-1-1, 60-yy, 0.0, "10");
	yy+=20;
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
   }
   //INSERT 20
   int yy1=0;
   for(i=0;i<5;i++)
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0, 0);
	drawstring(20-50, -25, 0.0, "TOP= 1");
	yr=0;
	 for(j=0;j<5;j++)
   {
       stkblk();
       yr=yr+20;
   }
   glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
	glColor3f(1, 0, 1);
	drawstring(-1-1, 60-yy1, 0.0, "20");
	yy1+=20;
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
   }
   //INSERT 30
   int yy2=0;
   for(i=0;i<4;i++)
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0, 0);
	drawstring(20-50, -5, 0.0, "TOP= 2");
	yr=0;
	 for(j=0;j<5;j++)
   {
       stkblk();
       yr=yr+20;
   }
    glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	glColor3f(1, 0, 1);
	drawstring(-1-1, 60-yy2, 0.0, "30");
	yy2+=20;
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
   }
   //INSERT 40
   int yy3=0;
   for(i=0;i<3;i++)
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0, 0);
	drawstring(20-50, 15, 0.0, "TOP= 3");
	yr=0;
	 for(j=0;j<5;j++)
   {
       stkblk();
       yr=yr+20;
   }
    glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 0, 0.0, "30");
	glColor3f(1, 0, 1);
	drawstring(-1-1, 60-yy3, 0.0, "40");
	yy3+=20;
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
   }
   //INSERT 50
   int yy4=0;
   for(i=0;i<2;i++)
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK PUSH OPERATION");
	glColor3f(0, 0, 0);
	drawstring(20-50, 35, 0.0, "TOP= 4");
	yr=0;
	 for(j=0;j<5;j++)
   {
       stkblk();
       yr=yr+20;
   }
    glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 0, 0.0, "30");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 20, 0.0, "40");
	glColor3f(1, 0, 1);
	drawstring(-1-1, 60-yy4, 0.0, "50");
	yy4+=20;
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
   }
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.5, 0);
	drawstring(30-50, -70, 0.0, "STACK IS FULL");
	glColor3f(1, 0.5, 0);
	drawstring(20-50, -90, 0.0, "INSERTION NOT POSSIBLE");
	glutSwapBuffers();
	glFlush();
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	drawstring(0-90, 70, 0.0, "LOGIC:-");
	glColor3f(0, 0, 1);
	drawstring(0-90, 50, 0.0, "void push(int elem)");
		glColor3f(0, 0, 1);
	drawstring(0-90, 40, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, 30, 0.0, "if (top==size-1)");
			glColor3f(0, 0, 1);
	drawstring(20-90, 20, 0.0, "stack is full");
	glColor3f(0, 0, 1);
	drawstring(10-90, 10, 0.0, "else");
	glColor3f(0, 0, 1);
	drawstring(10-90, 0, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(20-90, -10, 0.0, "++top");
	glColor3f(0, 0, 1);
	drawstring(20-90, -20, 0.0, "s[top]=elem");
	glColor3f(0, 0, 1);
	drawstring(10-90, -30, 0.0, "}");
	glColor3f(0, 0, 1);
	drawstring(0-90, -40, 0.0, "}");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();

}
void spop()
{
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "TOP= 4");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 0, 0.0, "30");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 20, 0.0, "40");
	glColor3f(1, 0, 1);
	drawstring(-1-1, 40, 0.0, "50");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 60, 0.0, "50");
	glColor3f(0, 0,0);
	drawstring(20-50, 15, 0.0, "TOP= 3");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 0, 0.0, "30");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 20, 0.0, "40");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 60, 0.0, "50, 40");
	glColor3f(0, 0,0);
	drawstring(20-50, -5, 0.0, "TOP= 2");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, 0, 0.0, "30");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 60, 0.0, "50, 40, 30");
	glColor3f(0, 0,0);
	drawstring(20-50, -25, 0.0, "TOP= 1");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
   glColor3f(1, 0, 1);
	drawstring(-1-1, -20, 0.0, "20");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 60, 0.0, "50, 40, 30, 20");
	glColor3f(0, 0,0);
	drawstring(20-50, -45, 0.0, "TOP= 0");
	 glColor3f(1, 0, 1);
	drawstring(-1-1, -40, 0.0, "10");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "STACK POP OPERATION");
	glColor3f(0, 0,0);
	drawstring(20-50, 60, 0.0, "50, 40, 30, 20, 10");
	glColor3f(0, 0,0);
	drawstring(20-50, -65, 0.0, "TOP= -1");
	glutSwapBuffers();
	glFlush();
	yr=0;
   for(i=0;i<5;i++)
   {
       stkblk();
       yr=yr+20;
   }
   for(j=0;j<20000;j++)
    for(k=0;k<20000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.5, 0);
	drawstring(40-50, -70, 0.0, "STACK IS EMPTY");
	glColor3f(1, 0.5, 0);
	drawstring(30-50, -90, 0.0, "DELETION NOT POSSIBLE");
	glutSwapBuffers();
	glFlush();
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	drawstring(0-90, 70, 0.0, "LOGIC:-");
	glColor3f(0, 0, 1);
	drawstring(0-90, 50, 0.0, "void pop( )");
		glColor3f(0, 0, 1);
	drawstring(0-90, 40, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, 30, 0.0, "if (top==-1)");
			glColor3f(0, 0, 1);
	drawstring(20-90, 20, 0.0, "stack is empty");
	glColor3f(0, 0, 1);
	drawstring(10-90, 10, 0.0, "else");
	glColor3f(0, 0, 1);
	drawstring(10-90, 0, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(20-90, -10, 0.0, "elem = s[top]");
	glColor3f(0, 0, 1);
	drawstring(20-90, -20, 0.0, "--top");
	glColor3f(0, 0, 1);
	drawstring(10-90, -30, 0.0, "}");
	glColor3f(0, 0, 1);
	drawstring(0-90, -40, 0.0, "}");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
}



int yq=0;
  void qblk()
{
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-50+yq,-10);
    glVertex2f(-30+yq,-10);
    glVertex2f(-30+yq,10);
    glVertex2f(-50+yq,10);
    glEnd();
    glFlush();
}
void queueins()
{
    glClearColor(1,1,1,0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(-20-50, -20, 0.0, "REAR=-1");
		glutSwapBuffers();
	glFlush();
   for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 10
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(0-50, -20, 0.0, "REAR=0");
	 glColor3f(1, 0,1);
drawstring(48-50, 50, 0.0, "10");
	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }

    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 20

       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(20-50, -20, 0.0, "REAR=1");
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10");
	 glColor3f(1, 0,1);
drawstring(48-50, 50, 0.0, "20");
glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0,1);
	drawstring(23-50, 0, 0.0, "20");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //INSERT 30
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "REAR=2");
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10                    20");
	 glColor3f(1, 0,1);
drawstring(48-50, 50, 0.0, "30");
	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }

    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0,1);
	drawstring(43-50, 0, 0.0, "30");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);

   //INSERT 40

       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                       REAR=3");
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10                    20                    30");
	glColor3f(1, 0,1);
drawstring(48-50, 50, 0.0, "40");

	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }

    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0,1);
	drawstring(40-50, 0, 0.0, "                             40");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);

   //INSERT 50

       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE INSERT OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10                    20                    30                    40");
	   glColor3f(1, 0,1);
drawstring(48-50, 50, 0.0, "50");

	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }

    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    	glColor3f(1, 0,1);
	drawstring(40-50, 0, 0.0, "                                                 50");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.5, 0);
	drawstring(30-50, -70, 0.0, "QUEUE IS FULL");
	glColor3f(1, 0.5, 0);
	drawstring(20-50, -90, 0.0, "INSERTION NOT POSSIBLE");
	glutSwapBuffers();
	glFlush();
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	drawstring(0-90, 70, 0.0, "LOGIC:-");
	glColor3f(0, 0, 1);
	drawstring(0-90, 50, 0.0, "void insert(int elem)");
		glColor3f(0, 0, 1);
	drawstring(0-90, 40, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, 30, 0.0, "if (rear==size-1)");
			glColor3f(0, 0, 1);
	drawstring(20-90, 20, 0.0, "stack is full");
	glColor3f(0, 0, 1);
	drawstring(10-90, 10, 0.0, "else");
	glColor3f(0, 0, 1);
	drawstring(10-90, 0, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(20-90, -10, 0.0, "++rear");
	glColor3f(0, 0, 1);
	drawstring(20-90, -20, 0.0, "q[rear]=elem");
	glColor3f(0, 0, 1);
	drawstring(10-90, -30, 0.0, "}");
	glColor3f(0, 0, 1);
	drawstring(0-90, -40, 0.0, "}");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS n");
	glutSwapBuffers();
	glFlush();
}
void qdel()
{
           glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(0-50, -30, 0.0, "FRONT=0");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(3-50, 0, 0.0, "10                    20                    30                    40                   50");
	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    	//DELETE 10
    	  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(23-50, 0, 0.0, "20                    30                    40                   50");
yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
	for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(20-50, -30, 0.0, "FRONT=1");
	 glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "10");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //DELETE 20
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(43-50, 0, 0.0, "30                    40                   50");
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
	for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(40-50, -30, 0.0, "FRONT=2");
	glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "10, 20");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //DELETE 30
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(43-50, 0, 0.0, "                     40                   50");
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
	for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(40-50, -30, 0.0, "                       FRONT=3");
	glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "10, 20, 30");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //DELETE 40
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
	glColor3f(1, 0,1);
	drawstring(43-50, 0, 0.0, "                                                    50");
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(40-50, -30, 0.0, "                                                FRONT=4");
	glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "10, 20, 30, 40");
	glutSwapBuffers();
	glFlush();
	yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    //DELETE 50
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0, 0,0);
	drawstring(20-50, 80, 0.0, "QUEUE DELETE OPERATION");
	glColor3f(0, 0,0);
	drawstring(40-50, -20, 0.0, "                                              REAR=4");
yq=0;
	 for(i=0;i<5;i++)
   {
       qblk();
       yq=yq+20;
   }
   for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    glColor3f(0, 0,0);
	drawstring(40-50, -30, 0.0, "                                                                             FRONT=5");
	glColor3f(0, 0,0);
	drawstring(20-50, 40, 0.0, "10, 20, 30, 40, 50");
	glutSwapBuffers();
	glFlush();
    for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.5, 0);
	drawstring(30-50, -70, 0.0, "QUEUE IS EMPTY");
	glColor3f(1, 0.5, 0);
	drawstring(20-50, -90, 0.0, "DELETION NOT POSSIBLE");
	glutSwapBuffers();
	glFlush();
	 for(j=0;j<15000;j++)
    for(k=0;k<15000;k++);
    	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0, 0);
	drawstring(0-90, 70, 0.0, "LOGIC:-");
	glColor3f(0, 0, 1);
	drawstring(0-90, 50, 0.0, "void delete( )");
		glColor3f(0, 0, 1);
	drawstring(0-90, 40, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(10-90, 30, 0.0, "if (front>rear)");
			glColor3f(0, 0, 1);
	drawstring(20-90, 20, 0.0, "queue is empty");
	glColor3f(0, 0, 1);
	drawstring(10-90, 10, 0.0, "else");
	glColor3f(0, 0, 1);
	drawstring(10-90, 0, 0.0, "{");
	glColor3f(0, 0, 1);
	drawstring(20-90, -10, 0.0, "elem=q[rear]");
	glColor3f(0, 0, 1);
	drawstring(20-90, -20, 0.0, "front++");
	glColor3f(0, 0, 1);
	drawstring(10-90, -30, 0.0, "}");
	glColor3f(0, 0, 1);
	drawstring(0-90, -40, 0.0, "}");
	glColor3f(0, 1, 0);
	drawstring(20 - 50, -50, 0.0, "PRESS e");
	glutSwapBuffers();
	glFlush();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0,1,0);
	drawstring(10 - 50, 80, 0.0, "GRAPHICAL SIMULATION OF DATA STRUCTURES");
	glColor3f(1,1,1);
	drawstring(20 - 50, 60, 0.0, "PRESS 'n' : NEXT PAGE");
	glColor3f(1,1,1);
	drawstring(20 - 50, 40, 0.0, "PRESS 'p' : PREVIOUS PAGE");
	glColor3f(1,1,1);
	drawstring(20 - 50, 20, 0.0, "PRESS 'e' : EXIT");
	glutSwapBuffers();
	glFlush();
}

void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	if (flag == 0)
		frontscreen();
	if (flag == 1)
		display();
    if (flag ==2)
            arraydes();
    if (flag == 3)
        arrayid();
    if (flag ==4)
            stackdes();
    if (flag == 5)
        stackpush();
    if (flag == 6)
        spop();
    if (flag ==7)
            queuedes();
   if (flag == 8)
        queueins();
     if (flag == 9)
        qdel();

}

void myKeyboardFunc(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 13:if (flag == 0) //Ascii of 'enter' key is 13
		flag = 1;
		break;
    case 110:flag=flag+1;
             break;
     case 112:flag=flag-1;  //Ascii of 'p'
             break;

    case 101:exit(0);
	}
	mydisplay();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, h, 0);
	glMatrixMode(GL_MODELVIEW);
}

void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0, -50.0, 50.0);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(700, 700);
	glutCreateWindow("data structures");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(myKeyboardFunc);
	myinit();
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}


