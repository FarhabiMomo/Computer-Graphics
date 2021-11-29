#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

              //root big triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(230, 57, 0);
              glVertex2f(-.8,.2);
              glVertex2f(.4,.2);
              glVertex2f(-.2,.8);
              glEnd();


               //root big triangle  bold boundary left right
              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.8,.2);
              glVertex2f(-.8,.22);
              glVertex2f(-.2,.8);
              glVertex2f(-.2,.78);


               glVertex2f(.4,.2);
               glVertex2f(.4,.22);
              glVertex2f(-.2,.8);
              glVertex2f(-.2,.78);

              glEnd();

              //root small triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(230, 57, 0);
              glVertex2f(-.8,.2);
              glVertex2f(-.2,.2);
              glVertex2f(-.5,.5);

              glEnd();


               //root small triangle bold boundary left right
              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.5,.5);
              glVertex2f(-.8,.2);
              glVertex2f(-.78,.2);
              glVertex2f(-.48,.5);

              glVertex2f(-.5,.5);
              glVertex2f(-.2,.2);
              glVertex2f(-.22,.2);
              glVertex2f(-.52,.5);

              glEnd();


                          //root big triangle left right boundary
              glBegin(GL_LINES);
              glColor3f(0,0,0);

              glVertex2f(-.8,.2);
              glVertex2f(-.2,.8);

               glVertex2f(.4,.2);
              glVertex2f(-.2,.8);

              glEnd();

              //both triangle  lower boundary quads
              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.79,.226);
              glVertex2f(-.79,.2);
              glVertex2f(.39,.2);
              glVertex2f(.39,.226);
              glEnd();


                //base big quads
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-.25,-.5);
              glVertex2f(-.25,.2);
              glVertex2f(.35,.2);
              glVertex2f(.35,-.5);

              glEnd();

             //base big quads door
              glBegin(GL_QUADS);
              glColor3ub(204, 255, 255);
              glVertex2f(-.2,-.45);
              glVertex2f(-.2,.1);
              glVertex2f(.3,.1);
              glVertex2f(.3,-.45);

              glEnd();


              //base big quads door boundary line
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.2,-.45);
              glVertex2f(-.2,.1);


              glVertex2f(.3,.1);
              glVertex2f(.3,-.45);

              //glVertex2f(-.2,-.5);
              //glVertex2f(.3,-.5);

              glVertex2f(-.2,.1);
            glVertex2f(.3,.1);

              glEnd();


              //base big quads door inside many line
              glBegin(GL_LINES);
              glColor3f(0,0,0);

              glVertex2f(-.2,.05);
            glVertex2f(.3,.05);
              glVertex2f(-.2,.0);
            glVertex2f(.3,.0);

              glVertex2f(-.2,-.05);
              glVertex2f(.3,-.05);

            glVertex2f(-.2,-.1);
            glVertex2f(.3,-.1);

            glVertex2f(-.2,-.15);
            glVertex2f(.3,-.15);

            glVertex2f(-.2,-.2);
            glVertex2f(.3,-.2);

            glVertex2f(-.2,-.25);
            glVertex2f(.3,-.25);

            glVertex2f(-.2,-.3);
            glVertex2f(.3,-.3);

            glVertex2f(-.2,-.35);
            glVertex2f(.3,-.35);

            glVertex2f(-.2,-.4);
            glVertex2f(.3,-.4);

            glVertex2f(-.2,-.45);
            glVertex2f(.3,-.45);

              glEnd();

               //base big quads boundary line
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.25,-.5);
              glVertex2f(-.25,.2);
              glVertex2f(.35,.2);
              glVertex2f(.35,-.5);

              glEnd();

              //base small quads
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-.75,.2);
              glVertex2f(-.75,-.5);
              glVertex2f(-.25,-.5);
              glVertex2f(-.25,.2);

              glEnd();

              //base small quads boundary line
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.75,.2);
              glVertex2f(-.75,-.5);

              glEnd();


              //both quads  lower boundary quads
              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.83,-.515);
              glVertex2f(-.83,-.5);
              glVertex2f(.43,-.5);
              glVertex2f(.43,-.515);
              glEnd();


              //base small quads door
              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.45,.1);
              glVertex2f(-.45,-.4);
              glVertex2f(-.3,-.4);
              glVertex2f(-.3,.1);

              glEnd();


              //base small quads door boundary line
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.47,.12);
              glVertex2f(-.47,-.42);

              glVertex2f(-.3,-.42);
              glVertex2f(-.3,.12);


               glVertex2f(-.47,.12);
               glVertex2f(-.3,.12);

               glVertex2f(-.47,-.42);
               glVertex2f(-.3,-.42);
              glEnd();


              //base small quads door under quads part
              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-.45,.05);
              glVertex2f(-.45,.00);
              glVertex2f(-.3,.00);
              glVertex2f(-.3,.05);
                glEnd();

              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-.45,-.04);
              glVertex2f(-.45,-.09);
              glVertex2f(-.3,-.09);
              glVertex2f(-.3,-.04);
                glEnd();
              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-.45,-.14);
              glVertex2f(-.45,-.19);
              glVertex2f(-.3,-.19);
              glVertex2f(-.3,-.14);
                glEnd();

              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-.45,-.24);
              glVertex2f(-.45,-.29);
              glVertex2f(-.3,-.29);
              glVertex2f(-.3,-.24);
                glEnd();

              glBegin(GL_QUADS);
              glColor3f(0,0,1);
              glVertex2f(-.45,-.32);
              glVertex2f(-.45,-.37);
              glVertex2f(-.3,-.37);
              glVertex2f(-.3,-.32);


              glEnd();


              //base small quads window
              glBegin(GL_QUADS);
              glColor3ub(204, 255, 255);
              glVertex2f(-.7,.08);
              glVertex2f(-.7,-.3);
              glVertex2f(-.52,-.3);
              glVertex2f(-.52,.08);

              glEnd();


              //base small quads window boundary line
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.7,.08);
              glVertex2f(-.7,-.3);

              glVertex2f(-.52,-.3);
              glVertex2f(-.52,.08);

              glVertex2f(-.7,-.3);
                glVertex2f(-.52,-.3);

                glVertex2f(-.7,.083);
                glVertex2f(-.52,.083);

              glEnd();


              //inside line
              glBegin(GL_QUADS);
              glColor3f(0,1,1);
              glVertex2f(-.7,.08);
              glVertex2f(-.7,-.3);
              glVertex2f(-.52,-.3);
              glVertex2f(-.52,.08);

              glEnd();

                //small base quads inside 2 top-bottom and left-right line
             glBegin(GL_LINES);
              glColor3f(0,0,1);
              glVertex2f(-.7,-.17);
              glVertex2f(-.52,-.17);


              glVertex2f(-.61,.08);
              glVertex2f(-.61,-.3);


              glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
