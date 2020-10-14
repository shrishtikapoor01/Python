#include<stdlib.h>
#include<stdio.h>
#include <glut.h>
#include <conio.h>

float x,y,x1,y1,x2,y2;
void display(void)
{
     float dx,dy,inc,steps;
	int i;
	x=x1;
	y=y1;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	dx=x2-x1;
	dy=y2-y1;
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	if(dx>dy){
		steps=dx;
		inc=dy/dx;
		for(i=0;i<dx;i++){
			x=x+1;
			y=y+inc;
			glVertex2f(x,y);
      }
	}
	else{
		steps=dy;
		inc=dx/dy;
		for(i=0;i<dy;i++){
			y++;
			x=x+inc;
			glVertex2f(x,y);
         }
	}
	glEnd();
	glFlush();
}
int main(int argc,char *argv[])
{
	
system("cls");
	printf("Enter value of x1: ");
	
	scanf("%f",&x1);
	printf("Enter value of y1: ");
	scanf("%f",&y1);
	printf("Enter value of x2: ");
	scanf("%f",&x2);
	printf("Enter value of y2: ");
	scanf("%f",&y2);
      glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("DDA Line");
	glClearColor(1.0,1.0,1.0,0.0);  
	glMatrixMode (GL_PROJECTION);
            gluOrtho2D (0.0, 200.0, 0.0, 150.0);
	glutDisplayFunc(display);
           glutMainLoop();  
        
}

