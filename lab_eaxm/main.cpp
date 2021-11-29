#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              //root big triangle 1st house
              glBegin(GL_TRIANGLES);
              glColor3ub(179, 134, 0);
              glVertex2f(-.8,.2);
              glVertex2f(.4,.2);
              glVertex2f(-.2,.8);
              glEnd();
              //base 1st house
              glBegin(GL_QUADS);
              glColor3ub(255, 245, 204);


              glVertex2f(-.7,.2);
              glVertex2f(-.7,-.5);
              glVertex2f(.3,-.5);
              glVertex2f(.3,.2);
              glEnd();


              //1st house window1
                glBegin(GL_QUADS);
              glColor3ub(0, 122, 204);


              glVertex2f(-.5,.1);
              glVertex2f(-.5,-.35);
              glVertex2f(-.4,-.35);
              glVertex2f(-.4,.1);
              glEnd();


              //1st house window2
                glBegin(GL_QUADS);
              glColor3ub(0, 122, 204);


              glVertex2f(-.55,.1);
              glVertex2f(-.55,-.35);
              glVertex2f(-.65,-.35);
              glVertex2f(-.65,.1);
              glEnd();


               //1st house window1 boundary line and middle line
                glBegin(GL_LINES);
              glColor3f(0, 0, 0);


              glVertex2f(-.5,.1);
              glVertex2f(-.5,-.35);

              glVertex2f(-.4,-.35);
              glVertex2f(-.4,.1);


              glVertex2f(-.5,.1);
              glVertex2f(-.4,.1);

              glVertex2f(-.5,-.35);
              glVertex2f(-.4,-.35);


              //middle line

              glVertex2f(-.5,-.13);
              glVertex2f(-.4,-.13);
              glEnd();


               //1st house window2 boundary and middle line
                glBegin(GL_LINES);
              glColor3f(0, 0, 0);


              glVertex2f(-.55,.1);
              glVertex2f(-.55,-.35);

              glVertex2f(-.65,-.35);
              glVertex2f(-.65,.1);


              glVertex2f(-.55,.1);
              glVertex2f(-.65,.1);

              glVertex2f(-.55,-.35);
              glVertex2f(-.65,-.35);


              //middle line

              glVertex2f(-.55,-.12);
              glVertex2f(-.65,-.12);
              glEnd();

                // root big  2nd triangle 2nd house
              glBegin(GL_POLYGON);
              glColor3ub(179, 134, 0);
              //glVertex2f(-.8,.2);


              glVertex2f(-.1,.7);
              glVertex2f(-.4,.2);
              glVertex2f(.8,.2);

              //glVertex2f(.5,.7);


              glVertex2f(.5,.7);
             // glVertex2f(-.1,.7);


              glEnd();


              //2nd house base
              glBegin(GL_QUADS);
              glColor3ub(255, 245, 204);


              glVertex2f(-.3,.2);
              glVertex2f(-.3,-.5);
              glVertex2f(.7,-.5);
              glVertex2f(.7,.2);
              glEnd();


              // boundary both house

              glBegin(GL_LINES);
              glColor3f(0,0,0);


              glVertex2f(-.7,.2);
              glVertex2f(-.7,-.5);

              glVertex2f(.7,-.5);
              glVertex2f(.7,.2);
              glEnd();
              glBegin(GL_QUADS);
              glColor3ub(255, 245, 204);


              glVertex2f(-.7,.2);
              glVertex2f(-.7,-.5);
              glVertex2f(.3,-.5);
              glVertex2f(.3,.2);
              glEnd();

              //2nd house base door
              glBegin(GL_QUADS);
              glColor3ub(255, 191, 0);


              glVertex2f(-.07,.1);
              glVertex2f(-.07,-.45);
              glVertex2f(.65,-.45);
              glVertex2f(.65,.1);
              glEnd();

 //2nd house base door many lines
              glBegin(GL_LINES);
              glColor3f(0, 0,0);

              glVertex2f(-.07,.1);
              glVertex2f(.65,.1);

              glVertex2f(-.07,.0);
              glVertex2f(.65,.0);

              glVertex2f(-.07,-.1);
              glVertex2f(.65,-.1);

              glVertex2f(-.07,-.2);
              glVertex2f(.65,-.2);

              glVertex2f(-.07,-.3);
              glVertex2f(.65,-.3);

              glVertex2f(-.07,-.4);
              glVertex2f(.65,-.4);

              glVertex2f(-.07,-.45);
              glVertex2f(.65,-.45);


              //side fillup

              glVertex2f(-.07,.1);
              glVertex2f(-.07,-.45);

              glVertex2f(.65,-.45);
              glVertex2f(.65,.1);
              glEnd();


              // house triangle lower boundary 1st
              glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-.8,.2);
              glVertex2f(-.8,.215);
              glVertex2f(.8,.215);
              glVertex2f(.8,.2);
              glEnd();

               // house triangle lower boundary 2nd
              glBegin(GL_QUADS);
              glColor3ub(173, 173, 133);
              glVertex2f(-.8,.2);
              glVertex2f(-.8,.17);
              glVertex2f(.8,.17);
              glVertex2f(.8,.2);
              glEnd();




              //small house triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(255, 191, 0);


              glVertex2f(-.4,.3);
              glVertex2f(-.1,.3);
              glVertex2f(-.25,.5);
              //glVertex2f(.3,.2);
              glEnd();


                 //small house triangle boundary
              glBegin(GL_LINES);
              glColor3f(0, 0, 0);


              glVertex2f(-.4,.3);
              glVertex2f(-.1,.3);

              glVertex2f(-.1,.3);
              glVertex2f(-.25,.5);

              glVertex2f(-.25,.5);
              glVertex2f(-.4,.3);
              //glVertex2f(.3,.2);
              glEnd();


              //base of small house
              glBegin(GL_QUADS);
              glColor3ub(255, 235, 153);


              glVertex2f(-.37,.3);
              glVertex2f(-.13,.3);
              glVertex2f(-.13,-.5);
              glVertex2f(-.37,-.5);
              glEnd();


              //base of small house boundary
              glBegin(GL_LINES);
              glColor3f(0,0,0);


              glVertex2f(-.37,.3);
              glVertex2f(-.13,.3);

              glVertex2f(-.13,-.5);
              glVertex2f(-.37,-.5);

              glVertex2f(-.37,.3);
              glVertex2f(-.37,-.5);
              glVertex2f(-.13,.3);
              glVertex2f(-.13,-.5);

              glEnd();


               //small triangle lower part 1
              glBegin(GL_QUADS);
              glColor3ub(23, 0, 0);


              glVertex2f(-.41,.3);
              glVertex2f(-.41,.27);
              glVertex2f(-.09,.27);
              glVertex2f(-.09,.3);
              //glVertex2f(.3,.2);
              glEnd();


              //small triangle lower part 2
              glBegin(GL_QUADS);
              glColor3f(23, 10, 0);

              glVertex2f(-.4,.27);
              glVertex2f(-.4,.25);
              glVertex2f(-.1,.25);
              glVertex2f(-.1,.27);
              //glVertex2f(.3,.2);
              glEnd();

              //small triangle lower part 3
              glBegin(GL_QUADS);
              glColor3ub(23, 0, 65);

              glVertex2f(-.38,.25);
              glVertex2f(-.38,.23);

              glVertex2f(-.12,.23);
              glVertex2f(-.12,.25);
              //glVertex2f(.3,.2);
              glEnd();

             //base of small house door
              glBegin(GL_QUADS);
              glColor3ub(191, 191, 191);


              glVertex2f(-.32,.1);
              glVertex2f(-.17,.1);
              glVertex2f(-.17,-.45);
              glVertex2f(-.32,-.45);
              glEnd();


              //base of small house door boundary
              glBegin(GL_LINES);
              glColor3f(0, 0,0);


              glVertex2f(-.32,.1);
              glVertex2f(-.17,.1);

              glVertex2f(-.17,-.45);
              glVertex2f(-.32,-.45);

              glVertex2f(-.32,.1);
              glVertex2f(-.32,-.45);

              glVertex2f(-.17,.1);
              glVertex2f(-.17,-.45);
              glEnd();

                //base of small house door inside door
              glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);


              glVertex2f(-.29,.05);
              glVertex2f(-.2,.05);
              glVertex2f(-.2,-.4);
              glVertex2f(-.29,-.4);
              glEnd();


               //base of small house door inside door ,inside door quads
              glBegin(GL_QUADS);
              glColor3ub(0, 122, 204);


              glVertex2f(-.26,.0);
              glVertex2f(-.23,.0);
              glVertex2f(-.23,-.35);
              glVertex2f(-.26,-.35);
              glEnd();

               //base of small house door lowerside base
              glBegin(GL_QUADS);
              glColor3ub(204, 204, 204);
              glVertex2f(-.37,-.45);
              glVertex2f(-.37,-.5);
              glVertex2f(-.13,-.5);
              glVertex2f(-.13,-.45);
              glEnd();


              //base of small house door lowerside base  boundary
              glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(-.37,-.45);
              glVertex2f(-.37,-.5);

              glVertex2f(-.13,-.5);
              glVertex2f(-.13,-.45);

              glVertex2f(-.37,-.45);
              glVertex2f(-.13,-.45);

              glVertex2f(-.37,-.5);
              glVertex2f(-.13,-.5);
              glEnd();


                // house base lower boundary
              glBegin(GL_QUADS);
              glColor3f(0, 0, 0);

              glVertex2f(-.8,-.5);
              glVertex2f(-.8,-.53);
              glVertex2f(.8,-.53);
              glVertex2f(.8,-.5);
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
