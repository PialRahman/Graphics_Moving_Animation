
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.01f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void display1_view()
{

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glBegin(GL_QUADS);
              glColor3f(.211,.211,.211);
              glVertex2f(-1.0,0);
              glVertex2f(-1.0,1.0);
              glVertex2f(1.0,1.0);
              glVertex2f(1.0,0);
              glEnd();
	          glFlush();
              glBegin(GL_QUADS);
              glColor3f(0,1,1);
              glVertex2f(-1.0,-1.0);
              glVertex2f(-1.0,0);
              glVertex2f(1.0,0);
              glVertex2f(1.0,-1.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-1.0,0.0);
              glVertex2f(-1.0,0.2);
              glVertex2f(-0.6,0.2);
              glVertex2f(-0.6,0.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1.0,0.2);
              glVertex2f(-1.0,0.4);
              glVertex2f(-0.65,0.4);
              glVertex2f(-0.65,0.2);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(0,0.8,0);
              glVertex2f(0.5,0.0);
              glVertex2f(0.5,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,0.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(1,1,0);
              glVertex2f(0.6,0.2);
              glVertex2f(0.6,0.4);
              glVertex2f(1.0,0.4);
              glVertex2f(1.0,0.2);
              glEnd();
	          glFlush();

	                    glBegin(GL_QUADS);
              glColor3f(0.8,0.6,0.5);
              glVertex2f(-1.0,0.0);
              glVertex2f(-0.4,0.0);
              glVertex2f(-0.8,-0.3);
              glVertex2f(-1.0,-0.3);
              glEnd();
	          glFlush();

	             glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(position,position, 0.0f);
                 glBegin(GL_LINES);
                  glColor3f(0,0,0);
    glVertex2f(0.2,0.1);
              glVertex2f(0.3,0.2);
              glVertex2f(0.0,0.2);
              glVertex2f(0.2,0.3);
                glVertex2f(0.0,-0.1);
              glVertex2f(0.2,0.0);
                glVertex2f(-0.2,0.0);
              glVertex2f(-0.4,-0.2);
                glVertex2f(0.0,0.5);
              glVertex2f(0.1,0.6);
                glVertex2f(-0.3,0.0);
              glVertex2f(-0.2,0.1);
                glVertex2f(0.0,-0.5);
              glVertex2f(0.1,-0.4);
                glVertex2f(0.4,-0.5);
              glVertex2f(0.5,-0.4);
                 glVertex2f(-0.4,0.5);
              glVertex2f(-0.5,0.4);

              glEnd();
              glPopMatrix();
	          glFlush();
	             glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(position,0.0f, 0.0f);
	            glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,0);
              glVertex2f(-0.5,0.1);
              glVertex2f(0.5,0.1);
              glVertex2f(0.4,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(-0.4,0.1);
              glVertex2f(-0.4,0.3);
              glVertex2f(0.4,0.3);
              glVertex2f(0.4,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-0.25,0.3);
              glVertex2f(-0.25,0.5);
              glVertex2f(0.25,0.5);
              glVertex2f(0.25,0.3);
              glEnd();
              glPopMatrix();
	          glFlush();
               glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(-position,0.0f, 0.0f);

              glTranslatef(-0.5,-0.8,0);
              glScalef(1,1,0);
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,0);
              glVertex2f(-0.5,0.1);
              glVertex2f(0.5,0.1);
              glVertex2f(0.4,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(-0.4,0.1);
              glVertex2f(-0.4,0.3);
              glVertex2f(0.4,0.3);
              glVertex2f(0.4,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-0.25,0.3);
              glVertex2f(-0.25,0.5);
              glVertex2f(0.25,0.5);
              glVertex2f(0.25,0.3);
              glEnd();
              glPopMatrix();
	          glFlush();
	            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(position,-position, 0.0f);
                glBegin(GL_QUADS);
              glColor3f(2.55,0.69,0);
              glVertex2f(0.7,0.0);
              glVertex2f(0.7,0.1);
              glVertex2f(0.75,0.1);
              glVertex2f(0.8,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(0.8,0.0);
              glVertex2f(0.77,0.02);
              glVertex2f(0.9,0.1);
              glVertex2f(0.9,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(0.7,0.08);
              glVertex2f(0.68,0.08);
              glVertex2f(0.7,0.1);
              glVertex2f(0.7,0.1);
              glEnd();
              glPopMatrix();
	          glFlush();



}
void display1(int b)
{
    glutDisplayFunc(display1_view);
}

void display() {

glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glBegin(GL_QUADS);
              glColor3f(2.55,2.47,0);
              glVertex2f(-1.0,0);
              glVertex2f(-1.0,1.0);
              glVertex2f(1.0,1.0);
              glVertex2f(1.0,0);
              glEnd();
	          glFlush();
              glBegin(GL_QUADS);
              glColor3f(0,1,1);
              glVertex2f(-1.0,-1.0);
              glVertex2f(-1.0,0);
              glVertex2f(1.0,0);
              glVertex2f(1.0,-1.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-1.0,0.0);
              glVertex2f(-1.0,0.2);
              glVertex2f(-0.6,0.2);
              glVertex2f(-0.6,0.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1.0,0.2);
              glVertex2f(-1.0,0.4);
              glVertex2f(-0.65,0.4);
              glVertex2f(-0.65,0.2);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(0,0.8,0);
              glVertex2f(0.5,0.0);
              glVertex2f(0.5,0.2);
              glVertex2f(1.0,0.2);
              glVertex2f(1.0,0.0);
              glEnd();
	          glFlush();
	                    glBegin(GL_QUADS);
              glColor3f(1,1,0);
              glVertex2f(0.6,0.2);
              glVertex2f(0.6,0.4);
              glVertex2f(1.0,0.4);
              glVertex2f(1.0,0.2);
              glEnd();
	          glFlush();

	                    glBegin(GL_QUADS);
              glColor3f(0.8,0.6,0.5);
              glVertex2f(-1.0,0.0);
              glVertex2f(-0.4,0.0);
              glVertex2f(-0.8,-0.3);
              glVertex2f(-1.0,-0.3);
              glEnd();
	          glFlush();


	             glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(position,0.0f, 0.0f);
	            glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,0);
              glVertex2f(-0.5,0.1);
              glVertex2f(0.5,0.1);
              glVertex2f(0.4,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(-0.4,0.1);
              glVertex2f(-0.4,0.3);
              glVertex2f(0.4,0.3);
              glVertex2f(0.4,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-0.25,0.3);
              glVertex2f(-0.25,0.5);
              glVertex2f(0.25,0.5);
              glVertex2f(0.25,0.3);
              glEnd();
              glPopMatrix();
	          glFlush();
               glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(-position,0.0f, 0.0f);

              glTranslatef(-0.5,-0.8,0);
              glScalef(1,1,0);
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,0);
              glVertex2f(-0.5,0.1);
              glVertex2f(0.5,0.1);
              glVertex2f(0.4,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(-0.4,0.1);
              glVertex2f(-0.4,0.3);
              glVertex2f(0.4,0.3);
              glVertex2f(0.4,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-0.25,0.3);
              glVertex2f(-0.25,0.5);
              glVertex2f(0.25,0.5);
              glVertex2f(0.25,0.3);
              glEnd();
              glPopMatrix();
	          glFlush();
	            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
                //glClear(GL_COLOR_BUFFER_BIT);
                 glPushMatrix();
                 glTranslatef(position,-position, 0.0f);
                glBegin(GL_QUADS);
              glColor3f(2.55,0.69,0);
              glVertex2f(0.7,0.0);
              glVertex2f(0.7,0.1);
              glVertex2f(0.75,0.1);
              glVertex2f(0.8,0);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(1,0,1);
              glVertex2f(0.8,0.0);
              glVertex2f(0.77,0.02);
              glVertex2f(0.9,0.1);
              glVertex2f(0.9,0.1);
              glEnd();
	          glFlush();
	              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(0.7,0.08);
              glVertex2f(0.68,0.08);
              glVertex2f(0.7,0.1);
              glVertex2f(0.7,0.1);
              glEnd();
              glPopMatrix();
	          glFlush();
	          glColor3f(1,1,1);
	int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glutTimerFunc(3500,display1,0);
	glFlush();
}

    void handlekeypress(unsigned char key,int i,int j)
        {
        switch(key){
        case 'R':
        glLoadIdentity();
        glutDisplayFunc(display1_view);
        glBegin(GL_LINES);
        glutPostRedisplay();

        break;


        }
        }
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   glutKeyboardFunc(handlekeypress);
   glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
   glutMainLoop();
   return 0;
}









