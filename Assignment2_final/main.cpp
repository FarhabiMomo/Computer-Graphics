#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include<cstdio>
#include <GL/gl.h>
# define PI 3.14159265358979323846

GLfloat speed=.3f;
GLfloat i = 0.1f;

void Idle()
{
    glutPostRedisplay();
}

void display1() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
glRotatef(i,0.0,0.0,0.1f);

    glBegin(GL_QUADS);		// blade right
  glColor3ub(204, 204, 204);	// Red
  glVertex2f(-0.55f, 0.6f);	// x, y
  glVertex2f(-0.1f, 0.0f);	// x, y
  glVertex2f(0.0f, 0.1f);	// x, y
  glVertex2f(-0.48f, 0.77f);
  glEnd ();




  glBegin(GL_QUADS);		// blade right
  glColor3ub(204, 204, 204);	// Red
  glVertex2f(-0.55f, -0.6f);	// x, y
  glVertex2f(-0.1f, 0.0f);	// x, y
  glVertex2f(0.0f, -0.1f);	// x, y
  glVertex2f(-0.48f, -0.77f);
  glEnd();

    glBegin(GL_QUADS);		// blade right
  glColor3ub(204, 204, 204);	// Red
  glVertex2f(0.77f, -0.07f);
  glVertex2f(0.85f, 0.085f);	// x, y
  glVertex2f(0.0f, 0.085f);	// x, y
  glVertex2f(0.0f, -0.077f);	// x, y
  glEnd();

//fan code


glPopMatrix();
i+=speed;

  int i;
    glColor3ub(255, 214, 153);//fan circle
    GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.13f;
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
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
case 's':
    speed = 0.1f;
    break;
case 'f':
    speed = 5.5f;
    break;
case 'm':
    speed = 0.9f;
    break;
glutPostRedisplay();
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320,320);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Assignment");
    glutDisplayFunc(display1);
     glutKeyboardFunc(handleKeypress);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}



