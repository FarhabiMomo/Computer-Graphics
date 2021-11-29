#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
# define PI           3.14159265358979323846

// cloud
GLfloat position = 0.0f;

GLfloat speed = 0.19f;

//human
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.08f;

//bird speed up
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.02f;

//bird speed down
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.036f;

//human
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.08f;
//sun
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.085f;

void sound1();

void init2() {
sound1();
}

void update(int value) {

    if(position > 8.0)
        position = -8.8f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 < -4.0)
        position1 = 4.8f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}
void update3(int value) {

    if(position3 < -4.0)
        position3 = 4.8f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
void update4(int value) {

    if(position4 < -4.0)
        position4 = 4.8f;

    position4 -= speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}


void update2(int value) {

    if(position2 < -4.0)
        position2 = 4.8f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update5(int value) {

    if(position5 < -4.0)
        position5 = 4.8f;

    position5 -= speed5;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}

void Idle()
{

glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed = 0.0f;
			}
	glutPostRedisplay();}






void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':
    speed4 = 0.0f;
    break;
case 'r':
    speed4 = 0.1f;
    break;

    case 'f':
    speed4 = 0.3f;
    break;
glutPostRedisplay();
	}
}











 void day();
void disback1(int val)
{
    glutDisplayFunc(day);
}


void late_night1()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);


// sky
            glBegin(GL_QUADS);
              glColor3ub(42,42,53);
              glVertex2f(-4,0);
              glVertex2f(-4,4);
              glVertex2f(4,4);
              glVertex2f(4,0);
             glEnd();

               //moon


                GLfloat  x=3.0f;  GLfloat y=3.2f;GLfloat  radius =.40f;
int	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 128);
	//GLfloat radius = 0.8f; //radius
GLfloat	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




	            x=3.2f;  y=3.3f;  radius =.40f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(42,42,53);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//moon end





             //clound start
glPushMatrix();

   glTranslatef(position,0,0);
         x=-2.93f;  y=3.2f;  radius =.2f;
	  triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=-2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=-2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=-2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=-1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//right side


	  x=2.93f; y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


//cloud end


/*

// birds
 glPushMatrix();

   glTranslatef(position1,0,0);

    glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();


          glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();

               glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();

              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1.1,3.2);
              glVertex2f(-1.0,3.0);
               glVertex2f(-.9,3.2);
              glVertex2f(-1.0,3.1);
              glEnd();

            glPopMatrix();


            //bird slow
             glPushMatrix();

   glTranslatef(position3,0,0);


 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();



 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


               glPopMatrix();
             //birds end
*/

             //wall

             //outer filler middle wall
//green color wall
                glBegin(GL_QUADS);
              glColor3ub(0, 153, 51);
              glVertex2f(-4.0,-.8);
              glVertex2f(-4.0,.0);
              glVertex2f(4.0,.0);
              glVertex2f(4.0,-.8);
                glEnd();



                //gumbuj color
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-2.8,-.8);
              glVertex2f(-2.8,.0);
              glVertex2f(2.8,.0);
              glVertex2f(2.8,-.8);
                glEnd();



            //ittt color wall
                glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(-4.0,-.4);
              glVertex2f(-4.0,-.8);
              glVertex2f(4.0,-.8);
              glVertex2f(4.0,-.4);
                glEnd();
            //middle half wall white
             glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.72,-.4);
              glVertex2f(-2.72,-.8);
              glVertex2f(2.72,-.8);
              glVertex2f(2.72,-.4);
                glEnd();


            //outer side filler right
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.94,-.8);
              glVertex2f(2.7,-.8);
              glVertex2f(2.75,2);
              glVertex2f(2.9,2);
              glEnd();

              //outer side piller right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(2.93,-.2);
              glVertex2f(2.71,-.2);
              glVertex2f(2.93,-.24);
              glVertex2f(2.71,-.24);


              glVertex2f(2.921,.3);
              glVertex2f(2.723,.3);
              glVertex2f(2.92,.34);
              glVertex2f(2.721,.34);

              glVertex2f(2.92,.9);
              glVertex2f(2.73,.9);
              glVertex2f(2.92,.94);
              glVertex2f(2.73,.94);

              glVertex2f(2.902,1.4);
              glVertex2f(2.73,1.4);
              glVertex2f(2.902,1.44);
              glVertex2f(2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();

           //inner small filler right
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.3,0);
              glVertex2f(2,0);
              glVertex2f(2.1,1.25);
              glVertex2f(2.25,1.25);
                glEnd();
            //inner small filler right(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(2.08,1.0);
              glVertex2f(2.26,1.0);
              glVertex2f(2.08,.97);
              glVertex2f(2.26,.97);


              glVertex2f(2.05,.65);
              glVertex2f(2.28,.65);
              glVertex2f(2.05,.62);
              glVertex2f(2.28,.62);


              glVertex2f(2.02,.3);
              glVertex2f(2.29,.3);
              glVertex2f(2.02,.27);
              glVertex2f(2.29,.27);
                glEnd();
           //outer side filler left
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.94,-.8);
              glVertex2f(-2.7,-.8);
              glVertex2f(-2.75,2);
              glVertex2f(-2.9,2);
              glEnd();

                //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(-2.93,-.2);
              glVertex2f(-2.71,-.2);
              glVertex2f(-2.93,-.24);
              glVertex2f(-2.71,-.24);


              glVertex2f(-2.921,.3);
              glVertex2f(-2.723,.3);
              glVertex2f(-2.92,.34);
              glVertex2f(-2.721,.34);

              glVertex2f(-2.92,.9);
              glVertex2f(-2.73,.9);
              glVertex2f(-2.92,.94);
              glVertex2f(-2.73,.94);

              glVertex2f(-2.902,1.4);
              glVertex2f(-2.73,1.4);
              glVertex2f(-2.902,1.44);
              glVertex2f(-2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();




                 //inner small filler left
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.3,0);
              glVertex2f(-2,0);
              glVertex2f(-2.1,1.25);
              glVertex2f(-2.25,1.25);

              glEnd();


              //inner small filler left(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(-2.08,1.0);
              glVertex2f(-2.26,1.0);
              glVertex2f(-2.08,.97);
              glVertex2f(-2.26,.97);


              glVertex2f(-2.05,.65);
              glVertex2f(-2.28,.65);
              glVertex2f(-2.05,.62);
              glVertex2f(-2.28,.62);


              glVertex2f(-2.02,.3);
              glVertex2f(-2.29,.3);
              glVertex2f(-2.02,.27);
              glVertex2f(-2.29,.27);
                glEnd();
                    //224, 224, 209

                    //inner side
                       glBegin(GL_QUADS);
              glColor3ub(204, 255, 242);
              glVertex2f(.16,-.8);
              glVertex2f(.33,-4);
              glVertex2f(-.33,-4);
              glVertex2f(-.16,-.8);

              glEnd();

//
//main gambuj

              x=.0f; y=1.7f;  radius =.84f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj main triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.5,2.39);
              glVertex2f(.5,2.39);
              glVertex2f(0,2.8);

              glEnd();

	//main taj 1st small circle
	 x=.0f; y=2.83f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//main taj 2nd big circle
	 x=.0f; y=2.89f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-.02,2.8);
              glVertex2f(.02,2.8);
              glVertex2f(0,3.3);

              glEnd();


	//base taj up circle inside degin quard
                    glBegin(GL_QUADS);
              glColor3f(1,1,1);
              //glVertex2f(.8,-.4);
              glVertex2f(-.83,1.8);
              glVertex2f(-.82,1.5);
              glVertex2f(.82,1.5);
              glVertex2f(.83,1.8);
                    glEnd();

                //taj


               // main base center of quard
                glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.8,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();

                    /*// main base center of quard 2nd quard
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.8,-.48);
              glVertex2f(-.8,-.48);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();*/


                //right angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.9,-.4);
              glVertex2f(1.2,-.4);
              glVertex2f(1.2,1.175);
              glVertex2f(1.9,1.26);
              glEnd();


              //right base quard yellow
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.4,1.2);
              glVertex2f(1.4,-.4);
              glVertex2f(.8,-.4);
              glVertex2f(.8,1.2);
             glEnd();


   //left angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.9,-.4);
              glVertex2f(-1.2,-.4);
              glVertex2f(-1.2,1.175);
              glVertex2f(-1.9,1.26);
              glEnd();

        //left  base quard yellow
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.4,1.2);
              glVertex2f(-1.4,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.2);

               glEnd();



 // center quard door outer line white
glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.73,-.4);
              glVertex2f(-.73,-.4);
              glVertex2f(-.73,1.3);
              glVertex2f(.73,1.3);

              glEnd();


//main gombuj base yellow

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(.67,-.4);
              glVertex2f(-.67,-.4);
              glVertex2f(-.67,1.13);
              glVertex2f(.67,1.13);



              glEnd();


            // center quard  inter line black
              glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.61,-.4);
              glVertex2f(-.61,-.4);
              glVertex2f(-.61,1);
              glVertex2f(.61,1);

             glEnd();


             // main gombuj under main door quard

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.3,.75);
              glVertex2f(.3,.75);
              glVertex2f(.0,.9);

              glEnd();

             //door under circle


               x=.0f;  y=.23f;  radius =.6f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//end

             //main door quard
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
             glVertex2f(.6,-.4);
              glVertex2f(-.6,-.4);
              glVertex2f(-.6,.3);
              glVertex2f(.6,.3);

             glEnd();


            //inside line
             glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.6,.2);
              glVertex2f(-.6,.2);
              glVertex2f(-.6,.25);
              glVertex2f(.6,.25);

             glEnd();


             //inside line upper quard door
             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);

             glEnd();

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);
              glVertex2f(.0,.7);

              glEnd();

              //inside line upper quard door(multiple line)

              //left to right
             glBegin(GL_LINES);
             //triangle
              glColor3f(0,0,0);
              glVertex2f(-.08,.65);
              glVertex2f(.08,.65);
             // glVertex2f(-.15,.6);
              //glVertex2f(.15,.6);
              glVertex2f(-.23,.55);
              glVertex2f(.23,.55);

            //quard
             //glVertex2f(-.3,.5);
              //glVertex2f(.3,.5);
              glVertex2f(-.3,.45);
              glVertex2f(.3,.45);
              //glVertex2f(-.3,.4);
              //glVertex2f(.3,.4);
              glVertex2f(-.293,.35);
              glVertex2f(.293,.35);
              //glVertex2f(-.3,.3);
              //glVertex2f(.3,.3);
              glVertex2f(-.295,.25);
              glVertex2f(.3,.25);

             glEnd();


             //top to bottom
glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.2,.57);
              glVertex2f(.2,.25);
              glVertex2f(.1,.64);
              glVertex2f(.1,.25);
              glVertex2f(0,.7);
              glVertex2f(0,.25);
              glVertex2f(-.1,.64);
              glVertex2f(-.1,.25);
              glVertex2f(-.2,.57);
              glVertex2f(-.2,.25);
              glEnd();


             //inside line lower quard door

             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,-.4);
              glVertex2f(-.3,-.4);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);

             glEnd();

             //lower triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);
              glVertex2f(.0,.1);

              glEnd();

             //inside line lower quard door(multiple line)
               glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.3,-.3);
              glVertex2f(-.3,-.3);
              glVertex2f(.3,-.2);
              glVertex2f(-.3,-.2);
              glVertex2f(.295,-.1);
              glVertex2f(-.295,-.1);
              glVertex2f(.2,.0);
              glVertex2f(-.2,.0);
             glEnd();

             //top to bottom
             glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.2,.0);
             glVertex2f(.2,-.4);
             glVertex2f(.1,.04);
              glVertex2f(.1,-.4);
              glVertex2f(.0,.1);
              glVertex2f(.0,-.4);
              glVertex2f(-.1,.04);
              glVertex2f(-.1,-.4);
              glVertex2f(-.2,.0);
              glVertex2f(-.2,-.4);

             glEnd();

             //main gombuj side right gombuj(base,triangle--)

// right side small gombuj circle(main side)
  x=1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//end of gg

 //right base

glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.3,1.2);
              glVertex2f(1.3,1.6);
              glVertex2f(.9,1.6);
              glVertex2f(.9,1.2);

                glEnd();
//right base under
 glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.25,1.2);
              glVertex2f(1.25,1.4);
              glVertex2f(.95,1.4);
              glVertex2f(.95,1.2);

                glEnd();


                 // right side gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(.9,1.8);
              glVertex2f(1.3,1.8);
              glVertex2f(1.1,2.1);
                glEnd();

  // right sided gumbuj upper 1st small circle
	 x=1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right sided gumbuj upper 2st big circle
	 x=1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(1.093,2.2);
              glVertex2f(1.113,2.2);
              glVertex2f(1.1,2.4);

              glEnd();


//main gombuj side left gombuj(base,triangle--)


// left side small gombuj circle(main side)
  x=-1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //left base

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.3,1.2);
              glVertex2f(-1.3,1.6);
              glVertex2f(-.9,1.6);
              glVertex2f(-.9,1.2);

                glEnd();

                //left base under
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.26,1.2);
              glVertex2f(-1.26,1.4);
              glVertex2f(-.95,1.4);
              glVertex2f(-.95,1.2);

                glEnd();


// left side  gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.9,1.8);
              glVertex2f(-1.3,1.8);
              glVertex2f(-1.1,2.1);


              glEnd();

              // left sided gumbuj upper 1st small circle
	 x=-1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left sided gumbuj upper 2st big circle
	 x=-1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-1.093,2.2);
              glVertex2f(-1.113,2.2);
              glVertex2f(-1.1,2.4);

              glEnd();




	//yellow right quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(1.3,1.0);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,1.0);
              glEnd();

               //upper part inner circle


               x=1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.97,.81);
              glVertex2f(1.23,.81);
              glVertex2f(1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,.7);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(1.3,.3);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,.3);
                glEnd();

                //right side gumbuj


  x=1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.965,.05);
              glVertex2f(1.24,.05);
              glVertex2f(1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,-.05);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,-.05);
              glEnd();









              //yellow left quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(-1.3,1.0);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,1.0);
              glEnd();

               //upper part inner circle


               x=-1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.97,.81);
              glVertex2f(-1.23,.81);
              glVertex2f(-1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,.7);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(-1.3,.3);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,.3);
                glEnd();

                //left side gumbuj


  x=-1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.965,.05);
              glVertex2f(-1.24,.05);
              glVertex2f(-1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,-.05);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,-.05);
              glEnd();


//red part end










           //right side small piller small gumbuj

//circle right side piller gombuj
  x=2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(2.07,1.4);
              glVertex2f(2.28,1.4);
              glVertex2f(2.17,1.55);
                glEnd();
	//end


	//right small piller 1st small circle
	 x=2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.16,1.5);
              glVertex2f(2.18,1.5);
              glVertex2f(2.17,1.7);

              glEnd();


            //left side small piller small gumbuj

  //circle left side piller gombuj
  x=-2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small left piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-2.07,1.4);
              glVertex2f(-2.28,1.4);
              glVertex2f(-2.17,1.55);
                glEnd();
	//end
	//left small piller 1st small circle
	 x=-2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.16,1.5);
              glVertex2f(-2.18,1.5);
              glVertex2f(-2.17,1.7);

              glEnd();



	//big piller gombuj work for right side

//right side big piller gumbuj circel

x=2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  right gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(2.73,1.99);
              glVertex2f(2.91,1.99);
              glVertex2f(2.815,2.1);


              glEnd();
	//end


		//right big piller 1st small circle
	 x=2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.82,2.086);
              glVertex2f(2.83,2.086);
              glVertex2f(2.8,2.4);

              glEnd();




			          //big piller gombuj work for left side

//left side big piller gumbuj circel

x=-2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  left gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(-2.73,1.99);
              glVertex2f(-2.91,1.99);
              glVertex2f(-2.815,2.1);


              glEnd();
	//end


		//left big piller 1st small circle
	 x=-2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.82,2.086);
              glVertex2f(-2.83,2.086);
              glVertex2f(-2.8,2.4);

              glEnd();
	//end of big piller






	// left lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(1.23,-.05);
              glVertex2f(1.23,-.4);
              glVertex2f(.97,-.4);
              glVertex2f(.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(1.23,.7);
              glVertex2f(1.23,.37);
              glVertex2f(.97,.37);
              glVertex2f(.97,.7);
              glEnd();


               //left angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(1.83,1.0);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,1.0);
               glEnd();

                //upper part inner quard


               x=1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.54,.84);
              glVertex2f(1.77,.84);
              glVertex2f(1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(1.83,.73);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(1.77,.7);
              glVertex2f(1.77,.37);
              glVertex2f(1.54,.37);
              glVertex2f(1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(1.83,.3);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.3);
              glEnd();

              //lower part inner quard


               x=1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.5,.1);
              glVertex2f(1.8,.1);
              glVertex2f(1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(1.83,.03);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(1.77,-.04);
              glVertex2f(1.77,-.4);
              glVertex2f(1.54,-.4);
              glVertex2f(1.54,-.04);
              glEnd();//end





              // right lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(-1.23,-.05);
              glVertex2f(-1.23,-.4);
              glVertex2f(-.97,-.4);
              glVertex2f(-.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.23,.7);
              glVertex2f(-1.23,.37);
              glVertex2f(-.97,.37);
              glVertex2f(-.97,.7);
              glEnd();


               //right angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(-1.83,1.0);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,1.0);
               glEnd();

                //upper part inner quard


               x=-1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.54,.84);
              glVertex2f(-1.77,.84);
              glVertex2f(-1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.73);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,.7);
              glVertex2f(-1.77,.37);
              glVertex2f(-1.54,.37);
              glVertex2f(-1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(-1.83,.3);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.3);
              glEnd();

              //lower part inner quard


               x=-1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.5,.1);
              glVertex2f(-1.8,.1);
              glVertex2f(-1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.03);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,-.04);
              glVertex2f(-1.77,-.4);
              glVertex2f(-1.54,-.4);
              glVertex2f(-1.54,-.04);
              glEnd();//end






               //background grass
                       glBegin(GL_QUADS);
              glColor3ub(0, 153, 51);
              glVertex2f(-4,-4);
              glVertex2f(-4,-.8);
              glVertex2f(4,-.8);
              glVertex2f(4,-4);
             glEnd();








              //road beside pond
              //left

            glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(-.41,-.8);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
              glEnd();


               glBegin(GL_QUADS);

              //right

              glColor3ub(71,71,71 );
              glVertex2f(.41,-.8);
              glVertex2f(.8,-4);
              glVertex2f(.4,-4);
              glVertex2f(.24,-.8);
              glEnd();
              //end of road beside pond


              //road beside field
              //right
                glBegin(GL_QUADS);
              glColor3ub(0, 128, 0);
              glVertex2f(.8,-.8);
              glVertex2f(2.0,-4);
              glVertex2f(.8,-4);
              glVertex2f(.4,-.8);

                //left
              glColor3ub(0, 128, 0);
              glVertex2f(-.8,-.8);
              glVertex2f(-2.0,-4);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-.8);

              glEnd();
        //end road beside pond

                           //road tree

glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {1.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.



//tree 1 (up ) (positive )
                glBegin(GL_QUADS);
                glColor3ub(139, 69, 19);
              glVertex2f(.7,-1.3);
              glVertex2f(.7,-1.6);
              glVertex2f(.75,-1.6);
              glVertex2f(.75,-1.3);
               glEnd();

glDisable(GL_LIGHTING);//Enable Light Effect
//1
    glBegin(GL_TRIANGLES);
               glColor3ub(0, 77, 0);
              glVertex2f(.5,-1.3);
              glVertex2f(.93,-1.3);
              glVertex2f(.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
              glVertex2f(.53,-1.19);
              glVertex2f(.91,-1.19);
              glVertex2f(.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(.55,-1.05);
              glVertex2f(.9,-1.05);
              glVertex2f(.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(.59,-0.9);
              glVertex2f(.86,-0.9);
              glVertex2f(.72,-0.7);
              glEnd();




        //tree 1 (up )(positive )end

glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {1.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.



                //tree 2 (up ) (negative )
                glBegin(GL_QUADS);
                 glColor3ub(139, 69, 19);
              glVertex2f(-.7,-1.3);
              glVertex2f(-.7,-1.6);
              glVertex2f(-.75,-1.6);
              glVertex2f(-.75,-1.3);
               glEnd();
glDisable(GL_LIGHTING);//Enable Light Effect

//1
    glBegin(GL_TRIANGLES);
               glColor3ub(0, 77, 0);
              glVertex2f(-.5,-1.3);
              glVertex2f(-.93,-1.3);
              glVertex2f(-.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
              glVertex2f(-.53,-1.19);
              glVertex2f(-.91,-1.19);
              glVertex2f(-.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(-.55,-1.05);
              glVertex2f(-.9,-1.05);
              glVertex2f(-.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(-.59,-0.9);
              glVertex2f(-.86,-0.9);
              glVertex2f(-.72,-0.7);
              glEnd();




        //tree 2 (up )(negative )end



       //tree3 (middle ) (positive )
                glBegin(GL_QUADS);
               glColor3ub(139, 69, 19);
              glVertex2f(.95,-2.5);
              glVertex2f(.95,-2.8);
              glVertex2f(1,-2.8);
              glVertex2f(1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3ub(0, 77, 0);
              glVertex2f(.75,-2.5);
              glVertex2f(1.18,-2.5);
              glVertex2f(.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
              glVertex2f(.78,-2.39);
              glVertex2f(1.16,-2.39);
              glVertex2f(.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(.81,-2.25);
              glVertex2f(1.16,-2.25);
              glVertex2f(.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(.85,-2.1);
              glVertex2f(1.12,-2.1);
              glVertex2f(.98,-1.9);
              glEnd();




        //tree 3 (middle )(positive )end



       //tree4 (middle ) (negative )
                glBegin(GL_QUADS);
              glColor3ub(139, 69, 19);
              glVertex2f(-.95,-2.5);
              glVertex2f(-.95,-2.8);
              glVertex2f(-1,-2.8);
              glVertex2f(-1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3ub(0, 77, 0);
              glVertex2f(-.75,-2.5);
              glVertex2f(-1.18,-2.5);
              glVertex2f(-.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
              glVertex2f(-.78,-2.39);
              glVertex2f(-1.16,-2.39);
              glVertex2f(-.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(-.81,-2.25);
              glVertex2f(-1.16,-2.25);
              glVertex2f(-.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(-.85,-2.1);
              glVertex2f(-1.12,-2.1);
              glVertex2f(-.98,-1.9);
              glEnd();




        //tree 4 (middle )(negative )end





         //tree5 (down ) (positive )
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(1.13,-3.6);
              glVertex2f(1.13,-3.9);
              glVertex2f(1.18,-3.9);
              glVertex2f(1.18,-3.6);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3ub(0, 77, 0);
              glVertex2f(.93,-3.6);
              glVertex2f(1.36,-3.6);
              glVertex2f(1.14,-3.3);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
              glVertex2f(.96,-3.49);
              glVertex2f(1.34,-3.49);
              glVertex2f(1.15,-3.2);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(.99,-3.35);
              glVertex2f(1.34,-3.35);
              glVertex2f(1.16,-3.13);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3ub(0, 77, 0);
             glVertex2f(1.03,-3.2);
              glVertex2f(1.3,-3.2);
              glVertex2f(1.16,-3);
              glEnd();







          //end road tree

         //pond beside light

     glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(.32,-.8);
              glVertex2f(.6,-4);
              glVertex2f(-.6,-4);
              glVertex2f(-.32,-.8);
              glEnd();

                            // pond

                //outer side
                    glBegin(GL_QUADS);
              glColor3f(0, 191, 255);
              glVertex2f(.24,-.8);
              glVertex2f(.4,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
               glEnd();



              //road beside pond

              //main road (where human is walking )
              glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(-4,-4);
              glVertex2f(-4,-3);
              glVertex2f(4,-3);
              glVertex2f(4,-4);
              glEnd();


// road end



//light (positive down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.46,-2.12);
              glVertex2f(.46,-3);
              glVertex2f(.5,-3);
              glVertex2f(.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.6,-2.12);
              glVertex2f(.6,-2.22);
              glVertex2f(.35,-2.22);
              glVertex2f(.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.61,-2.12);
              glVertex2f(.61,-2.33);
              glVertex2f(.58,-2.33);
              glVertex2f(.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.34,-2.12);
              glVertex2f(.34,-2.33);
              glVertex2f(.37,-2.33);
              glVertex2f(.37,-2.12);
               glEnd();


//light bulb


               x=.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



////
//light (negative down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.46,-2.12);
              glVertex2f(-.46,-3);
              glVertex2f(-.5,-3);
              glVertex2f(-.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.6,-2.12);
              glVertex2f(-.6,-2.22);
              glVertex2f(-.35,-2.22);
              glVertex2f(-.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.61,-2.12);
              glVertex2f(-.61,-2.33);
              glVertex2f(-.58,-2.33);
              glVertex2f(-.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.34,-2.12);
              glVertex2f(-.34,-2.33);
              glVertex2f(-.37,-2.33);
              glVertex2f(-.37,-2.12);
               glEnd();


//light bulb


               x=-.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



//light (positive up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.35,-.8);
              glVertex2f(.35,-1.4);
              glVertex2f(.39,-1.4);
              glVertex2f(.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.49,-.8);
              glVertex2f(.49,-.9);
              glVertex2f(.24,-.9);
              glVertex2f(.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.5,-.8);
              glVertex2f(.5,-1.01);
              glVertex2f(.47,-1.01);
              glVertex2f(.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.23,-.8);
              glVertex2f(.23,-1.01);
              glVertex2f(.26,-1.01);
              glVertex2f(.26,-.8);
               glEnd();


//light bulb


               x=.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


//////

//light (negative up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.35,-.8);
              glVertex2f(-.35,-1.4);
              glVertex2f(-.39,-1.4);
              glVertex2f(-.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.49,-.8);
              glVertex2f(-.49,-.9);
              glVertex2f(-.24,-.9);
              glVertex2f(-.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.5,-.8);
              glVertex2f(-.5,-1.01);
              glVertex2f(-.47,-1.01);
              glVertex2f(-.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.23,-.8);
              glVertex2f(-.23,-1.01);
              glVertex2f(-.26,-1.01);
              glVertex2f(-.26,-.8);
               glEnd();


//light bulb


               x=-.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 255, 0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end

/*
////////////////////////////////////////
//human start

glPushMatrix();
glTranslatef(position4,0,0);

//Mundu1
            x=2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


           //body1
            glBegin(GL_QUADS);
            glColor3ub(0,179,255);
            glVertex2f(2.9f, -3.6f);
            glVertex2f(2.9f, -3.8f);
            glVertex2f(3.03f, -3.8f);
            glVertex2f(3.03f, -3.6f);
            glEnd();

            	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(3.025f, -3.6f);
	glVertex2f(3.025f, -3.64f);
	glVertex2f(3.085f, -3.7f);
	glVertex2f(3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.9f, -3.6f);
	glVertex2f(2.9f, -3.64f);
	glVertex2f(2.86f, -3.7f);
	glVertex2f(2.86f, -3.6f);

            //left foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(2.9f,-3.8f);
            glVertex2f(2.9f, -4.0f);
            glVertex2f(2.93f, -4.0f);
            glVertex2f(2.93f, -3.8f);
            glEnd();

            //right foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(3.0f,-3.8f);
            glVertex2f(3.0f, -4.0f);
            glVertex2f(3.03f, -4.0f);
            glVertex2f(3.03f, -3.8f);
            glEnd();




//Mundu2
            x=-2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body2
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-2.9f, -3.6f);
glVertex2f(-2.9f, -3.8f);
glVertex2f(-3.03f, -3.8f);
glVertex2f(-3.03f, -3.6f);
glEnd();

	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-3.025f, -3.6f);
	glVertex2f(-3.025f, -3.64f);
	glVertex2f(-3.085f, -3.7f);
	glVertex2f(-3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.9f, -3.6f);
	glVertex2f(-2.9f, -3.64f);
	glVertex2f(-2.86f, -3.7f);
	glVertex2f(-2.86f, -3.6f);

 //left foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-2.9f,-3.8f);
            glVertex2f(-2.9f, -4.0f);
            glVertex2f(-2.93f, -4.0f);
            glVertex2f(-2.93f, -3.8f);
            glEnd();

            //right foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-3.0f,-3.8f);
            glVertex2f(-3.0f, -4.0f);
            glVertex2f(-3.03f, -4.0f);
            glVertex2f(-3.03f, -3.8f);
            glEnd();






                        //Mundu5
            x=1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body5
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.9f);
glVertex2f(1.47f, -2.9f);
glVertex2f(1.47f, -2.7f);
glEnd();


//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.74f);
glVertex2f(1.3f, -2.83f);
glVertex2f(1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.47f, -2.7f);
glVertex2f(1.47f, -2.74f);
glVertex2f(1.51f, -2.83f);
glVertex2f(1.51f, -2.7f);


 //left foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.34f,-2.9f);
            glVertex2f(1.34f, -3.1f);
            glVertex2f(1.37f, -3.1f);
            glVertex2f(1.37f, -2.9f);
            glEnd();

            //right foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.44f,-2.9f);
            glVertex2f(1.44f, -3.1f);
            glVertex2f(1.47f, -3.1f);
            glVertex2f(1.47f, -2.9f);
            glEnd();



                                    //Mundu6
            x=-1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body6
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.9f);
glVertex2f(-1.47f, -2.9f);
glVertex2f(-1.47f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.74f);
glVertex2f(-1.3f, -2.83f);
glVertex2f(-1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.47f, -2.7f);
glVertex2f(-1.47f, -2.74f);
glVertex2f(-1.51f, -2.83f);
glVertex2f(-1.51f, -2.7f);

 //left foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.34f,-2.9f);
            glVertex2f(-1.34f, -3.1f);
            glVertex2f(-1.37f, -3.1f);
            glVertex2f(-1.37f, -2.9f);
            glEnd();

            //right foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.44f,-2.9f);
            glVertex2f(-1.44f, -3.1f);
            glVertex2f(-1.47f, -3.1f);
            glVertex2f(-1.47f, -2.9f);
            glEnd();



                                    //Mundu7
            x=3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body7
glBegin(GL_QUADS);
glColor3ub(255,2,255);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.74f);
glVertex2f(3.39f, -2.83f);
glVertex2f(3.39f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.57f, -2.7f);
glVertex2f(3.57f, -2.74f);
glVertex2f(3.61f, -2.83f);
glVertex2f(3.61f, -2.7f);


//left foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.467f, -2.9f);
glVertex2f(3.467f, -3.12f);
glVertex2f(3.43f, -3.12f);
glEnd();


//right foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.531f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -3.12f);
glVertex2f(3.531f, -3.12f);
glEnd();

glPopMatrix();





glPushMatrix();

   glTranslatef(position5,0,0);

                                    //Mundu8
            x=-3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body8
glBegin(GL_QUADS);
glColor3ub(0,2,255);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -2.7f);
glEnd();

//left hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.74f);
glVertex2f(-3.39f, -2.83f);
glVertex2f(-3.39f, -2.7f);


//right hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.57f, -2.7f);
glVertex2f(-3.57f, -2.74f);
glVertex2f(-3.61f, -2.83f);
glVertex2f(-3.61f, -2.7f);

//left foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.467f, -2.9f);
glVertex2f(-3.467f, -3.12f);
glVertex2f(-3.43f, -3.12f);
glEnd();


//right foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.531f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -3.12f);
glVertex2f(-3.531f, -3.12f);
glEnd();






                                    //Mundu9
            x=2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body9
glBegin(GL_QUADS);
glColor3ub(255, 100, 0);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -2.7f);
glEnd();

//left hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.74f);
glVertex2f(2.39f, -2.83f);
glVertex2f(2.39f, -2.7f);


//right hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.57f, -2.7f);
glVertex2f(2.57f, -2.74f);
glVertex2f(2.61f, -2.83f);
glVertex2f(2.61f, -2.7f);


//left foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.467f, -2.9f);
glVertex2f(2.467, -3.12f);
glVertex2f(2.43f, -3.12f);
glEnd();


//right foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.531f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -3.12f);
glVertex2f(2.531f, -3.12f);
glEnd();






                                    //Mundu10
            x=-2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body10
glBegin(GL_QUADS);
glColor3ub(150, 130, 200);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -2.7f);
glEnd();

//left hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.74f);
glVertex2f(-2.39f, -2.83f);
glVertex2f(-2.39f, -2.7f);


//right hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.57f, -2.7f);
glVertex2f(-2.57f, -2.74f);
glVertex2f(-2.61f, -2.83f);
glVertex2f(-2.61f, -2.7f);

//left foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.467f, -2.9f);
glVertex2f(-2.467, -3.12f);
glVertex2f(-2.43f, -3.12f);
glEnd();


//right foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.531f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -3.12f);
glVertex2f(-2.531f, -3.12f);
glEnd();





//Mundu11
            x=2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body11
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(2.08f, -3.8f);
	glVertex2f(2.08f, -3.6f);
	glEnd();

		//left hand11
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(2.08f, -3.6f);
	glVertex2f(2.08f, -3.64f);
	glVertex2f(2.125f, -3.7f);
	glVertex2f(2.125f, -3.6f);

	//right hand11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.64f);
	glVertex2f(1.88f, -3.7f);
	glVertex2f(1.88f, -3.6f);

	//left foot11
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(1.92f, -4.0f);
	glVertex2f(1.96f, -4.0f);
	glVertex2f(1.96f, -3.8f);
	glEnd();


	//right foot11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.04f, -3.8f);
	glVertex2f(2.04f, -4.0f);
	glVertex2f(2.08f, -4.0f);
	glVertex2f(2.08f, -3.8f);
	glEnd();














//Mundu12
            x=-2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body12
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-2.08f, -3.8f);
	glVertex2f(-2.08f, -3.6f);
	glEnd();


	//left hand12
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-2.08f, -3.6f);
	glVertex2f(-2.08f, -3.64f);
	glVertex2f(-2.125f, -3.7f);
	glVertex2f(-2.125f, -3.6f);

	//right hand12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.64f);
	glVertex2f(-1.88f, -3.7f);
	glVertex2f(-1.88f, -3.6f);

	//left foot12
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-1.92f, -4.0f);
	glVertex2f(-1.96f, -4.0f);
	glVertex2f(-1.96f, -3.8f);
	glEnd();


	//right foot12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.04f, -3.8f);
	glVertex2f(-2.04f, -4.0f);
	glVertex2f(-2.08f, -4.0f);
	glVertex2f(-2.08f, -3.8f);
	glEnd();
	glPopMatrix();


	//human end
	*/

	   glutTimerFunc(5000,disback1,0);






 glFlush();
}










































//2nd view

void disback(int val) {

 glutDisplayFunc(late_night1);


}

void late_night()

 {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);


// sky
            glBegin(GL_QUADS);
              glColor3ub(250, 198, 108);//255, 153, 153
              glVertex2f(-4,0);
              glVertex2f(-4,4);
              glVertex2f(4,4);
              glVertex2f(4,0);
             glEnd();


               //sun

             glPushMatrix();

   glTranslatef(position2,position2,0);

GLfloat               x=3.0f; GLfloat  y=3.2f; GLfloat  radius =.40f;
	int triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 51, 0);
	//GLfloat radius = 0.8f; //radius
GLfloat	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

//sun end






             //clound start
glPushMatrix();

   glTranslatef(position,0,0);
         x=-2.93f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=-2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=-2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=-2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=-1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//right side


	  x=2.93f; y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(116,116,116);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


//cloud end




// birds
 glPushMatrix();

   glTranslatef(position1,0,0);

    glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();


       /*   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();

               glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();   */

              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1.1,3.2);
              glVertex2f(-1.0,3.0);
               glVertex2f(-.9,3.2);
              glVertex2f(-1.0,3.1);
              glEnd();

            glPopMatrix();


            //bird slow
             glPushMatrix();

   glTranslatef(position3,0,0);


 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();



 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


               glPopMatrix();
             //birds end


             //wall

             //outer filler middle wall
//green color wall
                glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4.0,-.8);
              glVertex2f(-4.0,.0);
              glVertex2f(4.0,.0);
              glVertex2f(4.0,-.8);
                glEnd();



                //gumbuj color
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-2.8,-.8);
              glVertex2f(-2.8,.0);
              glVertex2f(2.8,.0);
              glVertex2f(2.8,-.8);
                glEnd();



            //ittt color wall
                glBegin(GL_QUADS);
              glColor3ub(71,71,71);
              glVertex2f(-4.0,-.4);
              glVertex2f(-4.0,-.8);
              glVertex2f(4.0,-.8);
              glVertex2f(4.0,-.4);
                glEnd();
            //middle half wall white
             glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.72,-.4);
              glVertex2f(-2.72,-.8);
              glVertex2f(2.72,-.8);
              glVertex2f(2.72,-.4);
                glEnd();


            //outer side filler right
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.94,-.8);
              glVertex2f(2.7,-.8);
              glVertex2f(2.75,2);
              glVertex2f(2.9,2);
              glEnd();

              //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(2.93,-.2);
              glVertex2f(2.71,-.2);
              glVertex2f(2.93,-.24);
              glVertex2f(2.71,-.24);


              glVertex2f(2.921,.3);
              glVertex2f(2.723,.3);
              glVertex2f(2.92,.34);
              glVertex2f(2.721,.34);

              glVertex2f(2.92,.9);
              glVertex2f(2.73,.9);
              glVertex2f(2.92,.94);
              glVertex2f(2.73,.94);

              glVertex2f(2.902,1.4);
              glVertex2f(2.73,1.4);
              glVertex2f(2.902,1.44);
              glVertex2f(2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();

           //inner small filler right
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.3,0);
              glVertex2f(2,0);
              glVertex2f(2.1,1.25);
              glVertex2f(2.25,1.25);
                glEnd();
            //inner small filler right(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(2.08,1.0);
              glVertex2f(2.26,1.0);
              glVertex2f(2.08,.97);
              glVertex2f(2.26,.97);


              glVertex2f(2.05,.65);
              glVertex2f(2.28,.65);
              glVertex2f(2.05,.62);
              glVertex2f(2.28,.62);


              glVertex2f(2.02,.3);
              glVertex2f(2.29,.3);
              glVertex2f(2.02,.27);
              glVertex2f(2.29,.27);
                glEnd();
           //outer side filler left
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.94,-.8);
              glVertex2f(-2.7,-.8);
              glVertex2f(-2.75,2);
              glVertex2f(-2.9,2);
              glEnd();

                //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(-2.93,-.2);
              glVertex2f(-2.71,-.2);
              glVertex2f(-2.93,-.24);
              glVertex2f(-2.71,-.24);


              glVertex2f(-2.921,.3);
              glVertex2f(-2.723,.3);
              glVertex2f(-2.92,.34);
              glVertex2f(-2.721,.34);

              glVertex2f(-2.92,.9);
              glVertex2f(-2.73,.9);
              glVertex2f(-2.92,.94);
              glVertex2f(-2.73,.94);

              glVertex2f(-2.902,1.4);
              glVertex2f(-2.73,1.4);
              glVertex2f(-2.902,1.44);
              glVertex2f(-2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();




                 //inner small filler left
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.3,0);
              glVertex2f(-2,0);
              glVertex2f(-2.1,1.25);
              glVertex2f(-2.25,1.25);

              glEnd();


              //inner small filler left(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(-2.08,1.0);
              glVertex2f(-2.26,1.0);
              glVertex2f(-2.08,.97);
              glVertex2f(-2.26,.97);


              glVertex2f(-2.05,.65);
              glVertex2f(-2.28,.65);
              glVertex2f(-2.05,.62);
              glVertex2f(-2.28,.62);


              glVertex2f(-2.02,.3);
              glVertex2f(-2.29,.3);
              glVertex2f(-2.02,.27);
              glVertex2f(-2.29,.27);
                glEnd();
                    //224, 224, 209

                    //inner side
                       glBegin(GL_QUADS);
              glColor3ub(204, 255, 242);
              glVertex2f(.16,-.8);
              glVertex2f(.33,-4);
              glVertex2f(-.33,-4);
              glVertex2f(-.16,-.8);

              glEnd();

//
//main gambuj

              x=.0f; y=1.7f;  radius =.84f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj main triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.5,2.39);
              glVertex2f(.5,2.39);
              glVertex2f(0,2.8);

              glEnd();

	//main taj 1st small circle
	 x=.0f; y=2.83f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//main taj 2nd big circle
	 x=.0f; y=2.89f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-.02,2.8);
              glVertex2f(.02,2.8);
              glVertex2f(0,3.3);

              glEnd();


	//base taj up circle inside degin quard
                    glBegin(GL_QUADS);
              glColor3f(1,1,1);
              //glVertex2f(.8,-.4);
              glVertex2f(-.83,1.8);
              glVertex2f(-.82,1.5);
              glVertex2f(.82,1.5);
              glVertex2f(.83,1.8);
                    glEnd();

                //taj


               // main base center of quard
                glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.8,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();

                    /*// main base center of quard 2nd quard
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.8,-.48);
              glVertex2f(-.8,-.48);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();*/


                //right angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.9,-.4);
              glVertex2f(1.2,-.4);
              glVertex2f(1.2,1.175);
              glVertex2f(1.9,1.26);
              glEnd();


              //right base quard yellow
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.4,1.2);
              glVertex2f(1.4,-.4);
              glVertex2f(.8,-.4);
              glVertex2f(.8,1.2);
             glEnd();


   //left angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.9,-.4);
              glVertex2f(-1.2,-.4);
              glVertex2f(-1.2,1.175);
              glVertex2f(-1.9,1.26);
              glEnd();

        //left  base quard yellow
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.4,1.2);
              glVertex2f(-1.4,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.2);

               glEnd();



 // center quard door outer line white
glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.73,-.4);
              glVertex2f(-.73,-.4);
              glVertex2f(-.73,1.3);
              glVertex2f(.73,1.3);

              glEnd();


//main gombuj base yellow

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(.67,-.4);
              glVertex2f(-.67,-.4);
              glVertex2f(-.67,1.13);
              glVertex2f(.67,1.13);



              glEnd();


            // center quard  inter line black
              glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.61,-.4);
              glVertex2f(-.61,-.4);
              glVertex2f(-.61,1);
              glVertex2f(.61,1);

             glEnd();


             // main gombuj under main door quard

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.3,.75);
              glVertex2f(.3,.75);
              glVertex2f(.0,.9);

              glEnd();

             //door under circle


               x=.0f;  y=.23f;  radius =.6f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//end

             //main door quard
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
             glVertex2f(.6,-.4);
              glVertex2f(-.6,-.4);
              glVertex2f(-.6,.3);
              glVertex2f(.6,.3);

             glEnd();


            //inside line
             glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.6,.2);
              glVertex2f(-.6,.2);
              glVertex2f(-.6,.25);
              glVertex2f(.6,.25);

             glEnd();


             //inside line upper quard door
             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);

             glEnd();

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);
              glVertex2f(.0,.7);

              glEnd();

              //inside line upper quard door(multiple line)

              //left to right
             glBegin(GL_LINES);
             //triangle
              glColor3f(0,0,0);
              glVertex2f(-.08,.65);
              glVertex2f(.08,.65);
             // glVertex2f(-.15,.6);
              //glVertex2f(.15,.6);
              glVertex2f(-.23,.55);
              glVertex2f(.23,.55);

            //quard
             //glVertex2f(-.3,.5);
              //glVertex2f(.3,.5);
              glVertex2f(-.3,.45);
              glVertex2f(.3,.45);
              //glVertex2f(-.3,.4);
              //glVertex2f(.3,.4);
              glVertex2f(-.293,.35);
              glVertex2f(.293,.35);
              //glVertex2f(-.3,.3);
              //glVertex2f(.3,.3);
              glVertex2f(-.295,.25);
              glVertex2f(.3,.25);

             glEnd();


             //top to bottom
glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.2,.57);
              glVertex2f(.2,.25);
              glVertex2f(.1,.64);
              glVertex2f(.1,.25);
              glVertex2f(0,.7);
              glVertex2f(0,.25);
              glVertex2f(-.1,.64);
              glVertex2f(-.1,.25);
              glVertex2f(-.2,.57);
              glVertex2f(-.2,.25);
              glEnd();


             //inside line lower quard door

             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,-.4);
              glVertex2f(-.3,-.4);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);

             glEnd();

             //lower triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);
              glVertex2f(.0,.1);

              glEnd();

             //inside line lower quard door(multiple line)
               glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.3,-.3);
              glVertex2f(-.3,-.3);
              glVertex2f(.3,-.2);
              glVertex2f(-.3,-.2);
              glVertex2f(.295,-.1);
              glVertex2f(-.295,-.1);
              glVertex2f(.2,.0);
              glVertex2f(-.2,.0);
             glEnd();

             //top to bottom
             glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.2,.0);
             glVertex2f(.2,-.4);
             glVertex2f(.1,.04);
              glVertex2f(.1,-.4);
              glVertex2f(.0,.1);
              glVertex2f(.0,-.4);
              glVertex2f(-.1,.04);
              glVertex2f(-.1,-.4);
              glVertex2f(-.2,.0);
              glVertex2f(-.2,-.4);

             glEnd();

             //main gombuj side right gombuj(base,triangle--)

// right side small gombuj circle(main side)
  x=1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//end of gg

 //right base

glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.3,1.2);
              glVertex2f(1.3,1.6);
              glVertex2f(.9,1.6);
              glVertex2f(.9,1.2);

                glEnd();
//right base under
 glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.25,1.2);
              glVertex2f(1.25,1.4);
              glVertex2f(.95,1.4);
              glVertex2f(.95,1.2);

                glEnd();


                 // right side gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(.9,1.8);
              glVertex2f(1.3,1.8);
              glVertex2f(1.1,2.1);
                glEnd();

  // right sided gumbuj upper 1st small circle
	 x=1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right sided gumbuj upper 2st big circle
	 x=1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(1.093,2.2);
              glVertex2f(1.113,2.2);
              glVertex2f(1.1,2.4);

              glEnd();


//main gombuj side left gombuj(base,triangle--)


// left side small gombuj circle(main side)
  x=-1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //left base

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.3,1.2);
              glVertex2f(-1.3,1.6);
              glVertex2f(-.9,1.6);
              glVertex2f(-.9,1.2);

                glEnd();

                //left base under
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.26,1.2);
              glVertex2f(-1.26,1.4);
              glVertex2f(-.95,1.4);
              glVertex2f(-.95,1.2);

                glEnd();


// left side  gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.9,1.8);
              glVertex2f(-1.3,1.8);
              glVertex2f(-1.1,2.1);


              glEnd();

              // left sided gumbuj upper 1st small circle
	 x=-1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left sided gumbuj upper 2st big circle
	 x=-1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-1.093,2.2);
              glVertex2f(-1.113,2.2);
              glVertex2f(-1.1,2.4);

              glEnd();




	//yellow right quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(1.3,1.0);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,1.0);
              glEnd();

               //upper part inner circle


               x=1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.97,.81);
              glVertex2f(1.23,.81);
              glVertex2f(1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,.7);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(1.3,.3);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,.3);
                glEnd();

                //right side gumbuj


  x=1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.965,.05);
              glVertex2f(1.24,.05);
              glVertex2f(1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,-.05);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,-.05);
              glEnd();









              //yellow left quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(-1.3,1.0);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,1.0);
              glEnd();

               //upper part inner circle


               x=-1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.97,.81);
              glVertex2f(-1.23,.81);
              glVertex2f(-1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,.7);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(-1.3,.3);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,.3);
                glEnd();

                //left side gumbuj


  x=-1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.965,.05);
              glVertex2f(-1.24,.05);
              glVertex2f(-1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,-.05);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,-.05);
              glEnd();


//red part end










           //right side small piller small gumbuj

//circle right side piller gombuj
  x=2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(2.07,1.4);
              glVertex2f(2.28,1.4);
              glVertex2f(2.17,1.55);
                glEnd();
	//end


	//right small piller 1st small circle
	 x=2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.16,1.5);
              glVertex2f(2.18,1.5);
              glVertex2f(2.17,1.7);

              glEnd();


            //left side small piller small gumbuj

  //circle left side piller gombuj
  x=-2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small left piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-2.07,1.4);
              glVertex2f(-2.28,1.4);
              glVertex2f(-2.17,1.55);
                glEnd();
	//end
	//left small piller 1st small circle
	 x=-2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.16,1.5);
              glVertex2f(-2.18,1.5);
              glVertex2f(-2.17,1.7);

              glEnd();



	//big piller gombuj work for right side

//right side big piller gumbuj circel

x=2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  right gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(2.73,1.99);
              glVertex2f(2.91,1.99);
              glVertex2f(2.815,2.1);


              glEnd();
	//end


		//right big piller 1st small circle
	 x=2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.82,2.086);
              glVertex2f(2.83,2.086);
              glVertex2f(2.8,2.4);

              glEnd();




			          //big piller gombuj work for left side

//left side big piller gumbuj circel

x=-2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  left gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(-2.73,1.99);
              glVertex2f(-2.91,1.99);
              glVertex2f(-2.815,2.1);


              glEnd();
	//end


		//left big piller 1st small circle
	 x=-2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.82,2.086);
              glVertex2f(-2.83,2.086);
              glVertex2f(-2.8,2.4);

              glEnd();
	//end of big piller






	// left lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(1.23,-.05);
              glVertex2f(1.23,-.4);
              glVertex2f(.97,-.4);
              glVertex2f(.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(1.23,.7);
              glVertex2f(1.23,.37);
              glVertex2f(.97,.37);
              glVertex2f(.97,.7);
              glEnd();


               //left angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(1.83,1.0);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,1.0);
               glEnd();

                //upper part inner quard


               x=1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.54,.84);
              glVertex2f(1.77,.84);
              glVertex2f(1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(1.83,.73);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(1.77,.7);
              glVertex2f(1.77,.37);
              glVertex2f(1.54,.37);
              glVertex2f(1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(1.83,.3);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.3);
              glEnd();

              //lower part inner quard


               x=1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.5,.1);
              glVertex2f(1.8,.1);
              glVertex2f(1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(1.83,.03);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(1.77,-.04);
              glVertex2f(1.77,-.4);
              glVertex2f(1.54,-.4);
              glVertex2f(1.54,-.04);
              glEnd();//end





              // right lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(-1.23,-.05);
              glVertex2f(-1.23,-.4);
              glVertex2f(-.97,-.4);
              glVertex2f(-.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.23,.7);
              glVertex2f(-1.23,.37);
              glVertex2f(-.97,.37);
              glVertex2f(-.97,.7);
              glEnd();


               //right angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(-1.83,1.0);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,1.0);
               glEnd();

                //upper part inner quard


               x=-1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.54,.84);
              glVertex2f(-1.77,.84);
              glVertex2f(-1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.73);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,.7);
              glVertex2f(-1.77,.37);
              glVertex2f(-1.54,.37);
              glVertex2f(-1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(-1.83,.3);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.3);
              glEnd();

              //lower part inner quard


               x=-1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.5,.1);
              glVertex2f(-1.8,.1);
              glVertex2f(-1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.03);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,-.04);
              glVertex2f(-1.77,-.4);
              glVertex2f(-1.54,-.4);
              glVertex2f(-1.54,-.04);
              glEnd();//end






               //background grass
                       glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4,-4);
              glVertex2f(-4,-.8);
              glVertex2f(4,-.8);
              glVertex2f(4,-4);
             glEnd();








              //road beside pond
              //left

            glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(-.41,-.8);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
              glEnd();


               glBegin(GL_QUADS);

              //right

              glColor3ub(71,71,71 );
              glVertex2f(.41,-.8);
              glVertex2f(.8,-4);
              glVertex2f(.4,-4);
              glVertex2f(.24,-.8);
              glEnd();
              //end of road beside pond


              //road beside field
              //right
                glBegin(GL_QUADS);
              glColor3ub(0, 128, 0);
              glVertex2f(.8,-.8);
              glVertex2f(2.0,-4);
              glVertex2f(.8,-4);
              glVertex2f(.4,-.8);

                //left
              glColor3ub(0, 128, 0);
              glVertex2f(-.8,-.8);
              glVertex2f(-2.0,-4);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-.8);

              glEnd();
        //end road beside pond

                           //road tree


//tree 1 (up ) (positive )
                glBegin(GL_QUADS);
                glColor3ub(139, 69, 19);
              glVertex2f(.7,-1.3);
              glVertex2f(.7,-1.6);
              glVertex2f(.75,-1.6);
              glVertex2f(.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.5,-1.3);
              glVertex2f(.93,-1.3);
              glVertex2f(.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.53,-1.19);
              glVertex2f(.91,-1.19);
              glVertex2f(.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.55,-1.05);
              glVertex2f(.9,-1.05);
              glVertex2f(.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.59,-0.9);
              glVertex2f(.86,-0.9);
              glVertex2f(.72,-0.7);
              glEnd();




        //tree 1 (up )(positive )end




                //tree 2 (up ) (negative )
                glBegin(GL_QUADS);
                 glColor3ub(139, 69, 19);
              glVertex2f(-.7,-1.3);
              glVertex2f(-.7,-1.6);
              glVertex2f(-.75,-1.6);
              glVertex2f(-.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.5,-1.3);
              glVertex2f(-.93,-1.3);
              glVertex2f(-.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.53,-1.19);
              glVertex2f(-.91,-1.19);
              glVertex2f(-.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.55,-1.05);
              glVertex2f(-.9,-1.05);
              glVertex2f(-.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.59,-0.9);
              glVertex2f(-.86,-0.9);
              glVertex2f(-.72,-0.7);
              glEnd();




        //tree 2 (up )(negative )end



       //tree3 (middle ) (positive )
                glBegin(GL_QUADS);
               glColor3ub(139, 69, 19);
              glVertex2f(.95,-2.5);
              glVertex2f(.95,-2.8);
              glVertex2f(1,-2.8);
              glVertex2f(1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.75,-2.5);
              glVertex2f(1.18,-2.5);
              glVertex2f(.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.78,-2.39);
              glVertex2f(1.16,-2.39);
              glVertex2f(.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.81,-2.25);
              glVertex2f(1.16,-2.25);
              glVertex2f(.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.85,-2.1);
              glVertex2f(1.12,-2.1);
              glVertex2f(.98,-1.9);
              glEnd();




        //tree 3 (middle )(positive )end



       //tree4 (middle ) (negative )
                glBegin(GL_QUADS);
              glColor3ub(139, 69, 19);
              glVertex2f(-.95,-2.5);
              glVertex2f(-.95,-2.8);
              glVertex2f(-1,-2.8);
              glVertex2f(-1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.75,-2.5);
              glVertex2f(-1.18,-2.5);
              glVertex2f(-.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.78,-2.39);
              glVertex2f(-1.16,-2.39);
              glVertex2f(-.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.81,-2.25);
              glVertex2f(-1.16,-2.25);
              glVertex2f(-.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.85,-2.1);
              glVertex2f(-1.12,-2.1);
              glVertex2f(-.98,-1.9);
              glEnd();




        //tree 4 (middle )(negative )end





         //tree5 (down ) (positive )
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(1.13,-3.6);
              glVertex2f(1.13,-3.9);
              glVertex2f(1.18,-3.9);
              glVertex2f(1.18,-3.6);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.93,-3.6);
              glVertex2f(1.36,-3.6);
              glVertex2f(1.14,-3.3);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.96,-3.49);
              glVertex2f(1.34,-3.49);
              glVertex2f(1.15,-3.2);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.99,-3.35);
              glVertex2f(1.34,-3.35);
              glVertex2f(1.16,-3.13);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(1.03,-3.2);
              glVertex2f(1.3,-3.2);
              glVertex2f(1.16,-3);
              glEnd();







          //end road tree

         //pond beside light

     glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(.32,-.8);
              glVertex2f(.6,-4);
              glVertex2f(-.6,-4);
              glVertex2f(-.32,-.8);
              glEnd();

                            // pond

                //outer side
                    glBegin(GL_QUADS);
              glColor3f(0, 191, 255);
              glVertex2f(.24,-.8);
              glVertex2f(.4,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
               glEnd();



              //road beside pond

              //main road (where human is walking )
              glBegin(GL_QUADS);
              glColor3ub(71,71,71 );
              glVertex2f(-4,-4);
              glVertex2f(-4,-3);
              glVertex2f(4,-3);
              glVertex2f(4,-4);
              glEnd();


// road end



//light (positive down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.46,-2.12);
              glVertex2f(.46,-3);
              glVertex2f(.5,-3);
              glVertex2f(.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.6,-2.12);
              glVertex2f(.6,-2.22);
              glVertex2f(.35,-2.22);
              glVertex2f(.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.61,-2.12);
              glVertex2f(.61,-2.33);
              glVertex2f(.58,-2.33);
              glVertex2f(.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.34,-2.12);
              glVertex2f(.34,-2.33);
              glVertex2f(.37,-2.33);
              glVertex2f(.37,-2.12);
               glEnd();


//light bulb


               x=.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



////
//light (negative down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.46,-2.12);
              glVertex2f(-.46,-3);
              glVertex2f(-.5,-3);
              glVertex2f(-.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.6,-2.12);
              glVertex2f(-.6,-2.22);
              glVertex2f(-.35,-2.22);
              glVertex2f(-.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.61,-2.12);
              glVertex2f(-.61,-2.33);
              glVertex2f(-.58,-2.33);
              glVertex2f(-.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.34,-2.12);
              glVertex2f(-.34,-2.33);
              glVertex2f(-.37,-2.33);
              glVertex2f(-.37,-2.12);
               glEnd();


//light bulb


               x=-.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



//light (positive up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.35,-.8);
              glVertex2f(.35,-1.4);
              glVertex2f(.39,-1.4);
              glVertex2f(.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.49,-.8);
              glVertex2f(.49,-.9);
              glVertex2f(.24,-.9);
              glVertex2f(.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.5,-.8);
              glVertex2f(.5,-1.01);
              glVertex2f(.47,-1.01);
              glVertex2f(.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.23,-.8);
              glVertex2f(.23,-1.01);
              glVertex2f(.26,-1.01);
              glVertex2f(.26,-.8);
               glEnd();


//light bulb


               x=.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


//////

//light (negative up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.35,-.8);
              glVertex2f(-.35,-1.4);
              glVertex2f(-.39,-1.4);
              glVertex2f(-.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.49,-.8);
              glVertex2f(-.49,-.9);
              glVertex2f(-.24,-.9);
              glVertex2f(-.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.5,-.8);
              glVertex2f(-.5,-1.01);
              glVertex2f(-.47,-1.01);
              glVertex2f(-.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.23,-.8);
              glVertex2f(-.23,-1.01);
              glVertex2f(-.26,-1.01);
              glVertex2f(-.26,-.8);
               glEnd();


//light bulb


               x=-.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(230,230,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


////////////////////////////////////////
//human start

glPushMatrix();
glTranslatef(position4,0,0);

//Mundu1
            x=2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


           //body1
            glBegin(GL_QUADS);
            glColor3ub(0,179,255);
            glVertex2f(2.9f, -3.6f);
            glVertex2f(2.9f, -3.8f);
            glVertex2f(3.03f, -3.8f);
            glVertex2f(3.03f, -3.6f);
            glEnd();

            	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(3.025f, -3.6f);
	glVertex2f(3.025f, -3.64f);
	glVertex2f(3.085f, -3.7f);
	glVertex2f(3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.9f, -3.6f);
	glVertex2f(2.9f, -3.64f);
	glVertex2f(2.86f, -3.7f);
	glVertex2f(2.86f, -3.6f);

            //left foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(2.9f,-3.8f);
            glVertex2f(2.9f, -4.0f);
            glVertex2f(2.93f, -4.0f);
            glVertex2f(2.93f, -3.8f);
            glEnd();

            //right foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(3.0f,-3.8f);
            glVertex2f(3.0f, -4.0f);
            glVertex2f(3.03f, -4.0f);
            glVertex2f(3.03f, -3.8f);
            glEnd();




//Mundu2
            x=-2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body2
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-2.9f, -3.6f);
glVertex2f(-2.9f, -3.8f);
glVertex2f(-3.03f, -3.8f);
glVertex2f(-3.03f, -3.6f);
glEnd();

	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-3.025f, -3.6f);
	glVertex2f(-3.025f, -3.64f);
	glVertex2f(-3.085f, -3.7f);
	glVertex2f(-3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.9f, -3.6f);
	glVertex2f(-2.9f, -3.64f);
	glVertex2f(-2.86f, -3.7f);
	glVertex2f(-2.86f, -3.6f);

 //left foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-2.9f,-3.8f);
            glVertex2f(-2.9f, -4.0f);
            glVertex2f(-2.93f, -4.0f);
            glVertex2f(-2.93f, -3.8f);
            glEnd();

            //right foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-3.0f,-3.8f);
            glVertex2f(-3.0f, -4.0f);
            glVertex2f(-3.03f, -4.0f);
            glVertex2f(-3.03f, -3.8f);
            glEnd();






                        //Mundu5
            x=1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body5
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.9f);
glVertex2f(1.47f, -2.9f);
glVertex2f(1.47f, -2.7f);
glEnd();


//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.74f);
glVertex2f(1.3f, -2.83f);
glVertex2f(1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.47f, -2.7f);
glVertex2f(1.47f, -2.74f);
glVertex2f(1.51f, -2.83f);
glVertex2f(1.51f, -2.7f);


 //left foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.34f,-2.9f);
            glVertex2f(1.34f, -3.1f);
            glVertex2f(1.37f, -3.1f);
            glVertex2f(1.37f, -2.9f);
            glEnd();

            //right foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.44f,-2.9f);
            glVertex2f(1.44f, -3.1f);
            glVertex2f(1.47f, -3.1f);
            glVertex2f(1.47f, -2.9f);
            glEnd();



                                    //Mundu6
            x=-1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body6
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.9f);
glVertex2f(-1.47f, -2.9f);
glVertex2f(-1.47f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.74f);
glVertex2f(-1.3f, -2.83f);
glVertex2f(-1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.47f, -2.7f);
glVertex2f(-1.47f, -2.74f);
glVertex2f(-1.51f, -2.83f);
glVertex2f(-1.51f, -2.7f);

 //left foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.34f,-2.9f);
            glVertex2f(-1.34f, -3.1f);
            glVertex2f(-1.37f, -3.1f);
            glVertex2f(-1.37f, -2.9f);
            glEnd();

            //right foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.44f,-2.9f);
            glVertex2f(-1.44f, -3.1f);
            glVertex2f(-1.47f, -3.1f);
            glVertex2f(-1.47f, -2.9f);
            glEnd();



                                    //Mundu7
            x=3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body7
glBegin(GL_QUADS);
glColor3ub(255,2,255);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.74f);
glVertex2f(3.39f, -2.83f);
glVertex2f(3.39f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.57f, -2.7f);
glVertex2f(3.57f, -2.74f);
glVertex2f(3.61f, -2.83f);
glVertex2f(3.61f, -2.7f);


//left foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.467f, -2.9f);
glVertex2f(3.467f, -3.12f);
glVertex2f(3.43f, -3.12f);
glEnd();


//right foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.531f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -3.12f);
glVertex2f(3.531f, -3.12f);
glEnd();

glPopMatrix();





glPushMatrix();

   glTranslatef(position5,0,0);

                                    //Mundu8
            x=-3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body8
glBegin(GL_QUADS);
glColor3ub(0,2,255);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -2.7f);
glEnd();

//left hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.74f);
glVertex2f(-3.39f, -2.83f);
glVertex2f(-3.39f, -2.7f);


//right hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.57f, -2.7f);
glVertex2f(-3.57f, -2.74f);
glVertex2f(-3.61f, -2.83f);
glVertex2f(-3.61f, -2.7f);

//left foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.467f, -2.9f);
glVertex2f(-3.467f, -3.12f);
glVertex2f(-3.43f, -3.12f);
glEnd();


//right foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.531f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -3.12f);
glVertex2f(-3.531f, -3.12f);
glEnd();






                                    //Mundu9
            x=2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body9
glBegin(GL_QUADS);
glColor3ub(255, 100, 0);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -2.7f);
glEnd();

//left hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.74f);
glVertex2f(2.39f, -2.83f);
glVertex2f(2.39f, -2.7f);


//right hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.57f, -2.7f);
glVertex2f(2.57f, -2.74f);
glVertex2f(2.61f, -2.83f);
glVertex2f(2.61f, -2.7f);


//left foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.467f, -2.9f);
glVertex2f(2.467, -3.12f);
glVertex2f(2.43f, -3.12f);
glEnd();


//right foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.531f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -3.12f);
glVertex2f(2.531f, -3.12f);
glEnd();






                                    //Mundu10
            x=-2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body10
glBegin(GL_QUADS);
glColor3ub(150, 130, 200);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -2.7f);
glEnd();

//left hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.74f);
glVertex2f(-2.39f, -2.83f);
glVertex2f(-2.39f, -2.7f);


//right hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.57f, -2.7f);
glVertex2f(-2.57f, -2.74f);
glVertex2f(-2.61f, -2.83f);
glVertex2f(-2.61f, -2.7f);

//left foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.467f, -2.9f);
glVertex2f(-2.467, -3.12f);
glVertex2f(-2.43f, -3.12f);
glEnd();


//right foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.531f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -3.12f);
glVertex2f(-2.531f, -3.12f);
glEnd();





//Mundu11
            x=2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body11
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(2.08f, -3.8f);
	glVertex2f(2.08f, -3.6f);
	glEnd();

		//left hand11
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(2.08f, -3.6f);
	glVertex2f(2.08f, -3.64f);
	glVertex2f(2.125f, -3.7f);
	glVertex2f(2.125f, -3.6f);

	//right hand11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.64f);
	glVertex2f(1.88f, -3.7f);
	glVertex2f(1.88f, -3.6f);

	//left foot11
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(1.92f, -4.0f);
	glVertex2f(1.96f, -4.0f);
	glVertex2f(1.96f, -3.8f);
	glEnd();


	//right foot11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.04f, -3.8f);
	glVertex2f(2.04f, -4.0f);
	glVertex2f(2.08f, -4.0f);
	glVertex2f(2.08f, -3.8f);
	glEnd();














//Mundu12
            x=-2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body12
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-2.08f, -3.8f);
	glVertex2f(-2.08f, -3.6f);
	glEnd();


	//left hand12
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-2.08f, -3.6f);
	glVertex2f(-2.08f, -3.64f);
	glVertex2f(-2.125f, -3.7f);
	glVertex2f(-2.125f, -3.6f);

	//right hand12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.64f);
	glVertex2f(-1.88f, -3.7f);
	glVertex2f(-1.88f, -3.6f);

	//left foot12
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-1.92f, -4.0f);
	glVertex2f(-1.96f, -4.0f);
	glVertex2f(-1.96f, -3.8f);
	glEnd();


	//right foot12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.04f, -3.8f);
	glVertex2f(-2.04f, -4.0f);
	glVertex2f(-2.08f, -4.0f);
	glVertex2f(-2.08f, -3.8f);
	glEnd();
	glPopMatrix();


	//human end





   glutTimerFunc(5000,disback,0);
   glFlush();

}













//3rd view






void demo_late_night(int val) {

 glutDisplayFunc(late_night);


}


//3thDay
void night()
 {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);


// sky
            glBegin(GL_QUADS);
              glColor3ub(179, 217, 255);
              glVertex2f(-4,0);
              glVertex2f(-4,4);
              glVertex2f(4,4);
              glVertex2f(4,0);
             glEnd();

              //sun

            // glPushMatrix();

   //glTranslatef(position2,position2,0);
  // glScalef(.5,.5,0);

GLfloat x=1.0f; GLfloat  y=3.2f; GLfloat radius =.40f;
	int triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 224, 163);
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glPopMatrix();
	//glLoadIdentity();

//sun end






             //clound start
glPushMatrix();

   glTranslatef(position,0,0);
        x=-2.93f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=-2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=-2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=-2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=-1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//right side


	  x=2.93f; y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(83, 120, 158);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


//cloud end



// birds
 /*glPushMatrix();

   glTranslatef(position1,0,0);

    glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();


       /*   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();

               glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();

              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1.1,3.2);
              glVertex2f(-1.0,3.0);
               glVertex2f(-.9,3.2);
              glVertex2f(-1.0,3.1);
              glEnd();

            glPopMatrix();


            //bird slow
             glPushMatrix();

   glTranslatef(position3,0,0);


 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();



 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


               glPopMatrix();*/
             //birds end


             //wall

             //outer filler middle wall
//green color wall
                glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4.0,-.8);
              glVertex2f(-4.0,.0);
              glVertex2f(4.0,.0);
              glVertex2f(4.0,-.8);
                glEnd();



                //gumbuj color
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-2.8,-.8);
              glVertex2f(-2.8,.0);
              glVertex2f(2.8,.0);
              glVertex2f(2.8,-.8);
                glEnd();



            //ittt color wall
                glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-4.0,-.4);
              glVertex2f(-4.0,-.8);
              glVertex2f(4.0,-.8);
              glVertex2f(4.0,-.4);
                glEnd();
            //middle half wall white
             glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.72,-.4);
              glVertex2f(-2.72,-.8);
              glVertex2f(2.72,-.8);
              glVertex2f(2.72,-.4);
                glEnd();


            //outer side filler right
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.94,-.8);
              glVertex2f(2.7,-.8);
              glVertex2f(2.75,2);
              glVertex2f(2.9,2);
              glEnd();

              //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(2.93,-.2);
              glVertex2f(2.71,-.2);
              glVertex2f(2.93,-.24);
              glVertex2f(2.71,-.24);


              glVertex2f(2.921,.3);
              glVertex2f(2.723,.3);
              glVertex2f(2.92,.34);
              glVertex2f(2.721,.34);

              glVertex2f(2.92,.9);
              glVertex2f(2.73,.9);
              glVertex2f(2.92,.94);
              glVertex2f(2.73,.94);

              glVertex2f(2.902,1.4);
              glVertex2f(2.73,1.4);
              glVertex2f(2.902,1.44);
              glVertex2f(2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();

           //inner small filler right
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.3,0);
              glVertex2f(2,0);
              glVertex2f(2.1,1.25);
              glVertex2f(2.25,1.25);
                glEnd();
            //inner small filler right(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(2.08,1.0);
              glVertex2f(2.26,1.0);
              glVertex2f(2.08,.97);
              glVertex2f(2.26,.97);


              glVertex2f(2.05,.65);
              glVertex2f(2.28,.65);
              glVertex2f(2.05,.62);
              glVertex2f(2.28,.62);


              glVertex2f(2.02,.3);
              glVertex2f(2.29,.3);
              glVertex2f(2.02,.27);
              glVertex2f(2.29,.27);
                glEnd();
           //outer side filler left
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.94,-.8);
              glVertex2f(-2.7,-.8);
              glVertex2f(-2.75,2);
              glVertex2f(-2.9,2);
              glEnd();

                //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(-2.93,-.2);
              glVertex2f(-2.71,-.2);
              glVertex2f(-2.93,-.24);
              glVertex2f(-2.71,-.24);


              glVertex2f(-2.921,.3);
              glVertex2f(-2.723,.3);
              glVertex2f(-2.92,.34);
              glVertex2f(-2.721,.34);

              glVertex2f(-2.92,.9);
              glVertex2f(-2.73,.9);
              glVertex2f(-2.92,.94);
              glVertex2f(-2.73,.94);

              glVertex2f(-2.902,1.4);
              glVertex2f(-2.73,1.4);
              glVertex2f(-2.902,1.44);
              glVertex2f(-2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();




                 //inner small filler left
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.3,0);
              glVertex2f(-2,0);
              glVertex2f(-2.1,1.25);
              glVertex2f(-2.25,1.25);

              glEnd();


              //inner small filler left(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(-2.08,1.0);
              glVertex2f(-2.26,1.0);
              glVertex2f(-2.08,.97);
              glVertex2f(-2.26,.97);


              glVertex2f(-2.05,.65);
              glVertex2f(-2.28,.65);
              glVertex2f(-2.05,.62);
              glVertex2f(-2.28,.62);


              glVertex2f(-2.02,.3);
              glVertex2f(-2.29,.3);
              glVertex2f(-2.02,.27);
              glVertex2f(-2.29,.27);
                glEnd();
                    //224, 224, 209

                    //inner side
                       glBegin(GL_QUADS);
              glColor3ub(204, 255, 242);
              glVertex2f(.16,-.8);
              glVertex2f(.33,-4);
              glVertex2f(-.33,-4);
              glVertex2f(-.16,-.8);

              glEnd();

//
//main gambuj

              x=.0f; y=1.7f;  radius =.84f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj main triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.5,2.39);
              glVertex2f(.5,2.39);
              glVertex2f(0,2.8);

              glEnd();

	//main taj 1st small circle
	 x=.0f; y=2.83f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//main taj 2nd big circle
	 x=.0f; y=2.89f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-.02,2.8);
              glVertex2f(.02,2.8);
              glVertex2f(0,3.3);

              glEnd();


	//base taj up circle inside degin quard
                    glBegin(GL_QUADS);
              glColor3f(1,1,1);
              //glVertex2f(.8,-.4);
              glVertex2f(-.83,1.8);
              glVertex2f(-.82,1.5);
              glVertex2f(.82,1.5);
              glVertex2f(.83,1.8);
                    glEnd();

                //taj


               // main base center of quard
                glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.8,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();

                    /*// main base center of quard 2nd quard
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.8,-.48);
              glVertex2f(-.8,-.48);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();*/


                //right angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.9,-.4);
              glVertex2f(1.2,-.4);
              glVertex2f(1.2,1.175);
              glVertex2f(1.9,1.26);
              glEnd();


              //right base quard yellow
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.4,1.2);
              glVertex2f(1.4,-.4);
              glVertex2f(.8,-.4);
              glVertex2f(.8,1.2);
             glEnd();


   //left angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.9,-.4);
              glVertex2f(-1.2,-.4);
              glVertex2f(-1.2,1.175);
              glVertex2f(-1.9,1.26);
              glEnd();

        //left  base quard yellow
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.4,1.2);
              glVertex2f(-1.4,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.2);

               glEnd();



 // center quard door outer line white
glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.73,-.4);
              glVertex2f(-.73,-.4);
              glVertex2f(-.73,1.3);
              glVertex2f(.73,1.3);

              glEnd();


//main gombuj base yellow

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(.67,-.4);
              glVertex2f(-.67,-.4);
              glVertex2f(-.67,1.13);
              glVertex2f(.67,1.13);



              glEnd();


            // center quard  inter line black
              glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.61,-.4);
              glVertex2f(-.61,-.4);
              glVertex2f(-.61,1);
              glVertex2f(.61,1);

             glEnd();


             // main gombuj under main door quard

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.3,.75);
              glVertex2f(.3,.75);
              glVertex2f(.0,.9);

              glEnd();

             //door under circle


               x=.0f;  y=.23f;  radius =.6f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//end

             //main door quard
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
             glVertex2f(.6,-.4);
              glVertex2f(-.6,-.4);
              glVertex2f(-.6,.3);
              glVertex2f(.6,.3);

             glEnd();


            //inside line
             glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.6,.2);
              glVertex2f(-.6,.2);
              glVertex2f(-.6,.25);
              glVertex2f(.6,.25);

             glEnd();


             //inside line upper quard door
             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);

             glEnd();

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);
              glVertex2f(.0,.7);

              glEnd();

              //inside line upper quard door(multiple line)

              //left to right
             glBegin(GL_LINES);
             //triangle
              glColor3f(0,0,0);
              glVertex2f(-.08,.65);
              glVertex2f(.08,.65);
             // glVertex2f(-.15,.6);
              //glVertex2f(.15,.6);
              glVertex2f(-.23,.55);
              glVertex2f(.23,.55);

            //quard
             //glVertex2f(-.3,.5);
              //glVertex2f(.3,.5);
              glVertex2f(-.3,.45);
              glVertex2f(.3,.45);
              //glVertex2f(-.3,.4);
              //glVertex2f(.3,.4);
              glVertex2f(-.293,.35);
              glVertex2f(.293,.35);
              //glVertex2f(-.3,.3);
              //glVertex2f(.3,.3);
              glVertex2f(-.295,.25);
              glVertex2f(.3,.25);

             glEnd();


             //top to bottom
glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.2,.57);
              glVertex2f(.2,.25);
              glVertex2f(.1,.64);
              glVertex2f(.1,.25);
              glVertex2f(0,.7);
              glVertex2f(0,.25);
              glVertex2f(-.1,.64);
              glVertex2f(-.1,.25);
              glVertex2f(-.2,.57);
              glVertex2f(-.2,.25);
              glEnd();


             //inside line lower quard door

             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,-.4);
              glVertex2f(-.3,-.4);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);

             glEnd();

             //lower triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);
              glVertex2f(.0,.1);

              glEnd();

             //inside line lower quard door(multiple line)
               glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.3,-.3);
              glVertex2f(-.3,-.3);
              glVertex2f(.3,-.2);
              glVertex2f(-.3,-.2);
              glVertex2f(.295,-.1);
              glVertex2f(-.295,-.1);
              glVertex2f(.2,.0);
              glVertex2f(-.2,.0);
             glEnd();

             //top to bottom
             glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.2,.0);
             glVertex2f(.2,-.4);
             glVertex2f(.1,.04);
              glVertex2f(.1,-.4);
              glVertex2f(.0,.1);
              glVertex2f(.0,-.4);
              glVertex2f(-.1,.04);
              glVertex2f(-.1,-.4);
              glVertex2f(-.2,.0);
              glVertex2f(-.2,-.4);

             glEnd();

             //main gombuj side right gombuj(base,triangle--)

// right side small gombuj circle(main side)
  x=1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//end of gg

 //right base

glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.3,1.2);
              glVertex2f(1.3,1.6);
              glVertex2f(.9,1.6);
              glVertex2f(.9,1.2);

                glEnd();
//right base under
 glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.25,1.2);
              glVertex2f(1.25,1.4);
              glVertex2f(.95,1.4);
              glVertex2f(.95,1.2);

                glEnd();


                 // right side gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(.9,1.8);
              glVertex2f(1.3,1.8);
              glVertex2f(1.1,2.1);
                glEnd();

  // right sided gumbuj upper 1st small circle
	 x=1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right sided gumbuj upper 2st big circle
	 x=1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(1.093,2.2);
              glVertex2f(1.113,2.2);
              glVertex2f(1.1,2.4);

              glEnd();


//main gombuj side left gombuj(base,triangle--)


// left side small gombuj circle(main side)
  x=-1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //left base

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.3,1.2);
              glVertex2f(-1.3,1.6);
              glVertex2f(-.9,1.6);
              glVertex2f(-.9,1.2);

                glEnd();

                //left base under
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.26,1.2);
              glVertex2f(-1.26,1.4);
              glVertex2f(-.95,1.4);
              glVertex2f(-.95,1.2);

                glEnd();


// left side  gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.9,1.8);
              glVertex2f(-1.3,1.8);
              glVertex2f(-1.1,2.1);


              glEnd();

              // left sided gumbuj upper 1st small circle
	 x=-1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left sided gumbuj upper 2st big circle
	 x=-1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-1.093,2.2);
              glVertex2f(-1.113,2.2);
              glVertex2f(-1.1,2.4);

              glEnd();




	//yellow right quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(1.3,1.0);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,1.0);
              glEnd();

               //upper part inner circle


               x=1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.97,.81);
              glVertex2f(1.23,.81);
              glVertex2f(1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,.7);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(1.3,.3);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,.3);
                glEnd();

                //right side gumbuj


  x=1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.965,.05);
              glVertex2f(1.24,.05);
              glVertex2f(1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,-.05);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,-.05);
              glEnd();









              //yellow left quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(-1.3,1.0);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,1.0);
              glEnd();

               //upper part inner circle


               x=-1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.97,.81);
              glVertex2f(-1.23,.81);
              glVertex2f(-1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,.7);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(-1.3,.3);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,.3);
                glEnd();

                //left side gumbuj


  x=-1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.965,.05);
              glVertex2f(-1.24,.05);
              glVertex2f(-1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,-.05);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,-.05);
              glEnd();


//red part end










           //right side small piller small gumbuj

//circle right side piller gombuj
  x=2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(2.07,1.4);
              glVertex2f(2.28,1.4);
              glVertex2f(2.17,1.55);
                glEnd();
	//end


	//right small piller 1st small circle
	 x=2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.16,1.5);
              glVertex2f(2.18,1.5);
              glVertex2f(2.17,1.7);

              glEnd();


            //left side small piller small gumbuj

  //circle left side piller gombuj
  x=-2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small left piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-2.07,1.4);
              glVertex2f(-2.28,1.4);
              glVertex2f(-2.17,1.55);
                glEnd();
	//end
	//left small piller 1st small circle
	 x=-2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.16,1.5);
              glVertex2f(-2.18,1.5);
              glVertex2f(-2.17,1.7);

              glEnd();



	//big piller gombuj work for right side

//right side big piller gumbuj circel

x=2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  right gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(2.73,1.99);
              glVertex2f(2.91,1.99);
              glVertex2f(2.815,2.1);


              glEnd();
	//end


		//right big piller 1st small circle
	 x=2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.82,2.086);
              glVertex2f(2.83,2.086);
              glVertex2f(2.8,2.4);

              glEnd();




			          //big piller gombuj work for left side

//left side big piller gumbuj circel

x=-2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  left gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(-2.73,1.99);
              glVertex2f(-2.91,1.99);
              glVertex2f(-2.815,2.1);


              glEnd();
	//end


		//left big piller 1st small circle
	 x=-2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.82,2.086);
              glVertex2f(-2.83,2.086);
              glVertex2f(-2.8,2.4);

              glEnd();
	//end of big piller






	// left lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(1.23,-.05);
              glVertex2f(1.23,-.4);
              glVertex2f(.97,-.4);
              glVertex2f(.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(1.23,.7);
              glVertex2f(1.23,.37);
              glVertex2f(.97,.37);
              glVertex2f(.97,.7);
              glEnd();


               //left angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(1.83,1.0);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,1.0);
               glEnd();

                //upper part inner quard


               x=1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.54,.84);
              glVertex2f(1.77,.84);
              glVertex2f(1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(1.83,.73);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(1.77,.7);
              glVertex2f(1.77,.37);
              glVertex2f(1.54,.37);
              glVertex2f(1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(1.83,.3);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.3);
              glEnd();

              //lower part inner quard


               x=1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.5,.1);
              glVertex2f(1.8,.1);
              glVertex2f(1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(1.83,.03);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(1.77,-.04);
              glVertex2f(1.77,-.4);
              glVertex2f(1.54,-.4);
              glVertex2f(1.54,-.04);
              glEnd();//end





              // right lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(-1.23,-.05);
              glVertex2f(-1.23,-.4);
              glVertex2f(-.97,-.4);
              glVertex2f(-.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.23,.7);
              glVertex2f(-1.23,.37);
              glVertex2f(-.97,.37);
              glVertex2f(-.97,.7);
              glEnd();


               //right angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(-1.83,1.0);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,1.0);
               glEnd();

                //upper part inner quard


               x=-1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.54,.84);
              glVertex2f(-1.77,.84);
              glVertex2f(-1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.73);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,.7);
              glVertex2f(-1.77,.37);
              glVertex2f(-1.54,.37);
              glVertex2f(-1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(-1.83,.3);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.3);
              glEnd();

              //lower part inner quard


               x=-1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.5,.1);
              glVertex2f(-1.8,.1);
              glVertex2f(-1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.03);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,-.04);
              glVertex2f(-1.77,-.4);
              glVertex2f(-1.54,-.4);
              glVertex2f(-1.54,-.04);
              glEnd();//end






               //background grass
                       glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4,-4);
              glVertex2f(-4,-.8);
              glVertex2f(4,-.8);
              glVertex2f(4,-4);
             glEnd();








              //road beside pond
              //left

            glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-.41,-.8);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
              glEnd();


               glBegin(GL_QUADS);

              //right

              glColor3ub(128,128,128);
              glVertex2f(.41,-.8);
              glVertex2f(.8,-4);
              glVertex2f(.4,-4);
              glVertex2f(.24,-.8);
              glEnd();
              //end of road beside pond


              //road beside field
              //right
                glBegin(GL_QUADS);
              glColor3ub(38,139,7);
              glVertex2f(.8,-.8);
              glVertex2f(2.0,-4);
              glVertex2f(.8,-4);
              glVertex2f(.4,-.8);

                //left
              glColor3ub(38,139,7);
              glVertex2f(-.8,-.8);
              glVertex2f(-2.0,-4);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-.8);

              glEnd();
        //end road beside pond

                           //road tree


//tree 1 (up ) (positive )
                glBegin(GL_QUADS);
                glColor3ub(139, 69, 19);
              glVertex2f(.7,-1.3);
              glVertex2f(.7,-1.6);
              glVertex2f(.75,-1.6);
              glVertex2f(.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.5,-1.3);
              glVertex2f(.93,-1.3);
              glVertex2f(.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.53,-1.19);
              glVertex2f(.91,-1.19);
              glVertex2f(.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.55,-1.05);
              glVertex2f(.9,-1.05);
              glVertex2f(.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.59,-0.9);
              glVertex2f(.86,-0.9);
              glVertex2f(.72,-0.7);
              glEnd();




        //tree 1 (up )(positive )end




                //tree 2 (up ) (negative )
                glBegin(GL_QUADS);
                 glColor3ub(139, 69, 19);
              glVertex2f(-.7,-1.3);
              glVertex2f(-.7,-1.6);
              glVertex2f(-.75,-1.6);
              glVertex2f(-.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.5,-1.3);
              glVertex2f(-.93,-1.3);
              glVertex2f(-.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.53,-1.19);
              glVertex2f(-.91,-1.19);
              glVertex2f(-.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.55,-1.05);
              glVertex2f(-.9,-1.05);
              glVertex2f(-.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.59,-0.9);
              glVertex2f(-.86,-0.9);
              glVertex2f(-.72,-0.7);
              glEnd();




        //tree 2 (up )(negative )end



       //tree3 (middle ) (positive )
                glBegin(GL_QUADS);
               glColor3ub(139, 69, 19);
              glVertex2f(.95,-2.5);
              glVertex2f(.95,-2.8);
              glVertex2f(1,-2.8);
              glVertex2f(1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.75,-2.5);
              glVertex2f(1.18,-2.5);
              glVertex2f(.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.78,-2.39);
              glVertex2f(1.16,-2.39);
              glVertex2f(.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.81,-2.25);
              glVertex2f(1.16,-2.25);
              glVertex2f(.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.85,-2.1);
              glVertex2f(1.12,-2.1);
              glVertex2f(.98,-1.9);
              glEnd();




        //tree 3 (middle )(positive )end



       //tree4 (middle ) (negative )
                glBegin(GL_QUADS);
              glColor3ub(139, 69, 19);
              glVertex2f(-.95,-2.5);
              glVertex2f(-.95,-2.8);
              glVertex2f(-1,-2.8);
              glVertex2f(-1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.75,-2.5);
              glVertex2f(-1.18,-2.5);
              glVertex2f(-.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.78,-2.39);
              glVertex2f(-1.16,-2.39);
              glVertex2f(-.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.81,-2.25);
              glVertex2f(-1.16,-2.25);
              glVertex2f(-.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.85,-2.1);
              glVertex2f(-1.12,-2.1);
              glVertex2f(-.98,-1.9);
              glEnd();




        //tree 4 (middle )(negative )end





         //tree5 (down ) (positive )
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(1.13,-3.6);
              glVertex2f(1.13,-3.9);
              glVertex2f(1.18,-3.9);
              glVertex2f(1.18,-3.6);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.93,-3.6);
              glVertex2f(1.36,-3.6);
              glVertex2f(1.14,-3.3);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.96,-3.49);
              glVertex2f(1.34,-3.49);
              glVertex2f(1.15,-3.2);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.99,-3.35);
              glVertex2f(1.34,-3.35);
              glVertex2f(1.16,-3.13);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(1.03,-3.2);
              glVertex2f(1.3,-3.2);
              glVertex2f(1.16,-3);
              glEnd();







          //end road tree

         //pond beside light

     glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(.32,-.8);
              glVertex2f(.6,-4);
              glVertex2f(-.6,-4);
              glVertex2f(-.32,-.8);
              glEnd();

                            // pond

                //outer side
                    glBegin(GL_QUADS);
              glColor3f(0, 191, 255);
              glVertex2f(.24,-.8);
              glVertex2f(.4,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
               glEnd();



              //road beside pond

              //main road (where human is walking )
              glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-4,-4);
              glVertex2f(-4,-3);
              glVertex2f(4,-3);
              glVertex2f(4,-4);
              glEnd();


// road end



//light (positive down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.46,-2.12);
              glVertex2f(.46,-3);
              glVertex2f(.5,-3);
              glVertex2f(.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.6,-2.12);
              glVertex2f(.6,-2.22);
              glVertex2f(.35,-2.22);
              glVertex2f(.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.61,-2.12);
              glVertex2f(.61,-2.33);
              glVertex2f(.58,-2.33);
              glVertex2f(.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.34,-2.12);
              glVertex2f(.34,-2.33);
              glVertex2f(.37,-2.33);
              glVertex2f(.37,-2.12);
               glEnd();


//light bulb


               x=.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



////
//light (negative down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.46,-2.12);
              glVertex2f(-.46,-3);
              glVertex2f(-.5,-3);
              glVertex2f(-.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.6,-2.12);
              glVertex2f(-.6,-2.22);
              glVertex2f(-.35,-2.22);
              glVertex2f(-.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.61,-2.12);
              glVertex2f(-.61,-2.33);
              glVertex2f(-.58,-2.33);
              glVertex2f(-.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.34,-2.12);
              glVertex2f(-.34,-2.33);
              glVertex2f(-.37,-2.33);
              glVertex2f(-.37,-2.12);
               glEnd();


//light bulb


               x=-.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



//light (positive up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.35,-.8);
              glVertex2f(.35,-1.4);
              glVertex2f(.39,-1.4);
              glVertex2f(.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.49,-.8);
              glVertex2f(.49,-.9);
              glVertex2f(.24,-.9);
              glVertex2f(.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.5,-.8);
              glVertex2f(.5,-1.01);
              glVertex2f(.47,-1.01);
              glVertex2f(.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.23,-.8);
              glVertex2f(.23,-1.01);
              glVertex2f(.26,-1.01);
              glVertex2f(.26,-.8);
               glEnd();


//light bulb


               x=.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


//////

//light (negative up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.35,-.8);
              glVertex2f(-.35,-1.4);
              glVertex2f(-.39,-1.4);
              glVertex2f(-.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.49,-.8);
              glVertex2f(-.49,-.9);
              glVertex2f(-.24,-.9);
              glVertex2f(-.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.5,-.8);
              glVertex2f(-.5,-1.01);
              glVertex2f(-.47,-1.01);
              glVertex2f(-.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.23,-.8);
              glVertex2f(-.23,-1.01);
              glVertex2f(-.26,-1.01);
              glVertex2f(-.26,-.8);
               glEnd();


//light bulb


               x=-.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


////////////////////////////////////////
//human start

glPushMatrix();
glTranslatef(position4,0,0);

//Mundu1
            x=2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


           //body1
            glBegin(GL_QUADS);
            glColor3ub(0,179,255);
            glVertex2f(2.9f, -3.6f);
            glVertex2f(2.9f, -3.8f);
            glVertex2f(3.03f, -3.8f);
            glVertex2f(3.03f, -3.6f);
            glEnd();

            	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(3.025f, -3.6f);
	glVertex2f(3.025f, -3.64f);
	glVertex2f(3.085f, -3.7f);
	glVertex2f(3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.9f, -3.6f);
	glVertex2f(2.9f, -3.64f);
	glVertex2f(2.86f, -3.7f);
	glVertex2f(2.86f, -3.6f);

            //left foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(2.9f,-3.8f);
            glVertex2f(2.9f, -4.0f);
            glVertex2f(2.93f, -4.0f);
            glVertex2f(2.93f, -3.8f);
            glEnd();

            //right foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(3.0f,-3.8f);
            glVertex2f(3.0f, -4.0f);
            glVertex2f(3.03f, -4.0f);
            glVertex2f(3.03f, -3.8f);
            glEnd();




//Mundu2
            x=-2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body2
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-2.9f, -3.6f);
glVertex2f(-2.9f, -3.8f);
glVertex2f(-3.03f, -3.8f);
glVertex2f(-3.03f, -3.6f);
glEnd();

	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-3.025f, -3.6f);
	glVertex2f(-3.025f, -3.64f);
	glVertex2f(-3.085f, -3.7f);
	glVertex2f(-3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.9f, -3.6f);
	glVertex2f(-2.9f, -3.64f);
	glVertex2f(-2.86f, -3.7f);
	glVertex2f(-2.86f, -3.6f);

 //left foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-2.9f,-3.8f);
            glVertex2f(-2.9f, -4.0f);
            glVertex2f(-2.93f, -4.0f);
            glVertex2f(-2.93f, -3.8f);
            glEnd();

            //right foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-3.0f,-3.8f);
            glVertex2f(-3.0f, -4.0f);
            glVertex2f(-3.03f, -4.0f);
            glVertex2f(-3.03f, -3.8f);
            glEnd();






                        //Mundu5
            x=1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body5
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.9f);
glVertex2f(1.47f, -2.9f);
glVertex2f(1.47f, -2.7f);
glEnd();


//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.74f);
glVertex2f(1.3f, -2.83f);
glVertex2f(1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.47f, -2.7f);
glVertex2f(1.47f, -2.74f);
glVertex2f(1.51f, -2.83f);
glVertex2f(1.51f, -2.7f);


 //left foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.34f,-2.9f);
            glVertex2f(1.34f, -3.1f);
            glVertex2f(1.37f, -3.1f);
            glVertex2f(1.37f, -2.9f);
            glEnd();

            //right foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.44f,-2.9f);
            glVertex2f(1.44f, -3.1f);
            glVertex2f(1.47f, -3.1f);
            glVertex2f(1.47f, -2.9f);
            glEnd();



                                    //Mundu6
            x=-1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body6
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.9f);
glVertex2f(-1.47f, -2.9f);
glVertex2f(-1.47f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.74f);
glVertex2f(-1.3f, -2.83f);
glVertex2f(-1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.47f, -2.7f);
glVertex2f(-1.47f, -2.74f);
glVertex2f(-1.51f, -2.83f);
glVertex2f(-1.51f, -2.7f);

 //left foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.34f,-2.9f);
            glVertex2f(-1.34f, -3.1f);
            glVertex2f(-1.37f, -3.1f);
            glVertex2f(-1.37f, -2.9f);
            glEnd();

            //right foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.44f,-2.9f);
            glVertex2f(-1.44f, -3.1f);
            glVertex2f(-1.47f, -3.1f);
            glVertex2f(-1.47f, -2.9f);
            glEnd();



                                    //Mundu7
            x=3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body7
glBegin(GL_QUADS);
glColor3ub(255,2,255);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.74f);
glVertex2f(3.39f, -2.83f);
glVertex2f(3.39f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.57f, -2.7f);
glVertex2f(3.57f, -2.74f);
glVertex2f(3.61f, -2.83f);
glVertex2f(3.61f, -2.7f);


//left foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.467f, -2.9f);
glVertex2f(3.467f, -3.12f);
glVertex2f(3.43f, -3.12f);
glEnd();


//right foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.531f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -3.12f);
glVertex2f(3.531f, -3.12f);
glEnd();

glPopMatrix();






	//human end


	   glutTimerFunc(5000,demo_late_night,0);
   glFlush();
}





//4thMorning

void night_demo(int val) {

 glutDisplayFunc(night);


}
void day()
 {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);


// sky
            glBegin(GL_QUADS);
              glColor3ub(77, 210, 255);
              glVertex2f(-4,0);
              glVertex2f(-4,4);
              glVertex2f(4,4);
              glVertex2f(4,0);
             glEnd();


             //sun

             //glPushMatrix();

   //glTranslatef(position2,position2,0);

             GLfloat  x=3.0f; GLfloat  y=3.2f; GLfloat radius =.40f;
	int triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255, 0, 0);
	//GLfloat radius = 0.8f; //radius
GLfloat	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glPopMatrix();

//sun end






             //clound start
glPushMatrix();

   glTranslatef(position,0,0);
         x=-2.93f; y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=-2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=-2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=-2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=-1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=-1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//right side


	  x=2.93f; y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
     glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


               x=2.8f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



              x=2.6f;  y=3.2f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=2.65f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=2.87f;  y=3.38f;  radius =.14f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	//small cloud


	 x=1.95f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.75f;  y=2.6f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=1.85f;  y=2.8f;  radius =.15f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();


//cloud end



// birds
 glPushMatrix();

   glTranslatef(position1,0,0);

    glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();


       /*   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(1,0,0);
              glVertex2f(-0.5,3.2);
              glVertex2f(-0.6,3.0);
               glVertex2f(-0.7,3.2);
              glVertex2f(-0.6,3.1);
              glEnd();

               glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();   */

              glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1.1,3.2);
              glVertex2f(-1.0,3.0);
               glVertex2f(-.9,3.2);
              glVertex2f(-1.0,3.1);
              glEnd();

            glPopMatrix();


            //bird slow
             glPushMatrix();

   glTranslatef(position3,0,0);


 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.4,3.4);
              glVertex2f(-0.5,3.2);
               glVertex2f(-0.6,3.4);
              glVertex2f(-0.5,3.3);
              glEnd();


             glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-1,3.4);
              glVertex2f(-1.1,3.2);
               glVertex2f(-1.2,3.4);
              glVertex2f(-1.1,3.3);
              glEnd();



 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-0.7,3.2);
              glVertex2f(-0.8,3.0);
               glVertex2f(-0.9,3.2);
              glVertex2f(-0.8,3.1);
              glEnd();


               glPopMatrix();
             //birds end


             //wall

             //outer filler middle wall
//green color wall
                glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4.0,-.8);
              glVertex2f(-4.0,.0);
              glVertex2f(4.0,.0);
              glVertex2f(4.0,-.8);
                glEnd();



                //gumbuj color
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-2.8,-.8);
              glVertex2f(-2.8,.0);
              glVertex2f(2.8,.0);
              glVertex2f(2.8,-.8);
                glEnd();



            //ittt color wall
                glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-4.0,-.4);
              glVertex2f(-4.0,-.8);
              glVertex2f(4.0,-.8);
              glVertex2f(4.0,-.4);
                glEnd();
            //middle half wall white
             glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.72,-.4);
              glVertex2f(-2.72,-.8);
              glVertex2f(2.72,-.8);
              glVertex2f(2.72,-.4);
                glEnd();


            //outer side filler right
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.94,-.8);
              glVertex2f(2.7,-.8);
              glVertex2f(2.75,2);
              glVertex2f(2.9,2);
              glEnd();

              //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(2.93,-.2);
              glVertex2f(2.71,-.2);
              glVertex2f(2.93,-.24);
              glVertex2f(2.71,-.24);


              glVertex2f(2.921,.3);
              glVertex2f(2.723,.3);
              glVertex2f(2.92,.34);
              glVertex2f(2.721,.34);

              glVertex2f(2.92,.9);
              glVertex2f(2.73,.9);
              glVertex2f(2.92,.94);
              glVertex2f(2.73,.94);

              glVertex2f(2.902,1.4);
              glVertex2f(2.73,1.4);
              glVertex2f(2.902,1.44);
              glVertex2f(2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();

           //inner small filler right
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(2.3,0);
              glVertex2f(2,0);
              glVertex2f(2.1,1.25);
              glVertex2f(2.25,1.25);
                glEnd();
            //inner small filler right(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(2.08,1.0);
              glVertex2f(2.26,1.0);
              glVertex2f(2.08,.97);
              glVertex2f(2.26,.97);


              glVertex2f(2.05,.65);
              glVertex2f(2.28,.65);
              glVertex2f(2.05,.62);
              glVertex2f(2.28,.62);


              glVertex2f(2.02,.3);
              glVertex2f(2.29,.3);
              glVertex2f(2.02,.27);
              glVertex2f(2.29,.27);
                glEnd();
           //outer side filler left
              glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.94,-.8);
              glVertex2f(-2.7,-.8);
              glVertex2f(-2.75,2);
              glVertex2f(-2.9,2);
              glEnd();

                //outer side filler right(multiple line)
              glBegin(GL_LINES);
              glColor3f(1,1,1);
              glVertex2f(-2.93,-.2);
              glVertex2f(-2.71,-.2);
              glVertex2f(-2.93,-.24);
              glVertex2f(-2.71,-.24);


              glVertex2f(-2.921,.3);
              glVertex2f(-2.723,.3);
              glVertex2f(-2.92,.34);
              glVertex2f(-2.721,.34);

              glVertex2f(-2.92,.9);
              glVertex2f(-2.73,.9);
              glVertex2f(-2.92,.94);
              glVertex2f(-2.73,.94);

              glVertex2f(-2.902,1.4);
              glVertex2f(-2.73,1.4);
              glVertex2f(-2.902,1.44);
              glVertex2f(-2.73,1.44);


              //glVertex2f(2.75,2);
             // glVertex2f(2.9,2);
              glEnd();




                 //inner small filler left
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-2.3,0);
              glVertex2f(-2,0);
              glVertex2f(-2.1,1.25);
              glVertex2f(-2.25,1.25);

              glEnd();


              //inner small filler left(multiple line)

            glBegin(GL_LINES);
              glColor3ub(255,255,255);
             // glVertex2f(2.3,0);
              //glVertex2f(2,0);
              glVertex2f(-2.08,1.0);
              glVertex2f(-2.26,1.0);
              glVertex2f(-2.08,.97);
              glVertex2f(-2.26,.97);


              glVertex2f(-2.05,.65);
              glVertex2f(-2.28,.65);
              glVertex2f(-2.05,.62);
              glVertex2f(-2.28,.62);


              glVertex2f(-2.02,.3);
              glVertex2f(-2.29,.3);
              glVertex2f(-2.02,.27);
              glVertex2f(-2.29,.27);
                glEnd();
                    //224, 224, 209

                    //inner side
                       glBegin(GL_QUADS);
              glColor3ub(204, 255, 242);
              glVertex2f(.16,-.8);
              glVertex2f(.33,-4);
              glVertex2f(-.33,-4);
              glVertex2f(-.16,-.8);

              glEnd();

//
//main gambuj

              x=.0f; y=1.7f;  radius =.84f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj main triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.5,2.39);
              glVertex2f(.5,2.39);
              glVertex2f(0,2.8);

              glEnd();

	//main taj 1st small circle
	 x=.0f; y=2.83f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//main taj 2nd big circle
	 x=.0f; y=2.89f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//main gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-.02,2.8);
              glVertex2f(.02,2.8);
              glVertex2f(0,3.3);

              glEnd();


	//base taj up circle inside degin quard
                    glBegin(GL_QUADS);
              glColor3f(1,1,1);
              //glVertex2f(.8,-.4);
              glVertex2f(-.83,1.8);
              glVertex2f(-.82,1.5);
              glVertex2f(.82,1.5);
              glVertex2f(.83,1.8);
                    glEnd();

                //taj


               // main base center of quard
                glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.8,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();

                    /*// main base center of quard 2nd quard
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.8,-.48);
              glVertex2f(-.8,-.48);
              glVertex2f(-.8,1.4);
              glVertex2f(.8,1.4);
                    glEnd();*/


                //right angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.9,-.4);
              glVertex2f(1.2,-.4);
              glVertex2f(1.2,1.175);
              glVertex2f(1.9,1.26);
              glEnd();


              //right base quard yellow
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.4,1.2);
              glVertex2f(1.4,-.4);
              glVertex2f(.8,-.4);
              glVertex2f(.8,1.2);
             glEnd();


   //left angle quard for red
                    glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.9,-.4);
              glVertex2f(-1.2,-.4);
              glVertex2f(-1.2,1.175);
              glVertex2f(-1.9,1.26);
              glEnd();

        //left  base quard yellow
                glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.4,1.2);
              glVertex2f(-1.4,-.4);
              glVertex2f(-.8,-.4);
              glVertex2f(-.8,1.2);

               glEnd();



 // center quard door outer line white
glBegin(GL_QUADS);
              glColor3f(1,1,1);
              glVertex2f(.73,-.4);
              glVertex2f(-.73,-.4);
              glVertex2f(-.73,1.3);
              glVertex2f(.73,1.3);

              glEnd();


//main gombuj base yellow

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(.67,-.4);
              glVertex2f(-.67,-.4);
              glVertex2f(-.67,1.13);
              glVertex2f(.67,1.13);



              glEnd();


            // center quard  inter line black
              glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.61,-.4);
              glVertex2f(-.61,-.4);
              glVertex2f(-.61,1);
              glVertex2f(.61,1);

             glEnd();


             // main gombuj under main door quard

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.3,.75);
              glVertex2f(.3,.75);
              glVertex2f(.0,.9);

              glEnd();

             //door under circle


               x=.0f;  y=.23f;  radius =.6f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//end

             //main door quard
             glBegin(GL_QUADS);
              glColor3ub(237,233,223);
             glVertex2f(.6,-.4);
              glVertex2f(-.6,-.4);
              glVertex2f(-.6,.3);
              glVertex2f(.6,.3);

             glEnd();


            //inside line
             glBegin(GL_QUADS);
              glColor3f(1,1,1);
             glVertex2f(.6,.2);
              glVertex2f(-.6,.2);
              glVertex2f(-.6,.25);
              glVertex2f(.6,.25);

             glEnd();


             //inside line upper quard door
             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,.25);
              glVertex2f(-.3,.25);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);

             glEnd();

             //upper triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,.5);
              glVertex2f(.3,.5);
              glVertex2f(.0,.7);

              glEnd();

              //inside line upper quard door(multiple line)

              //left to right
             glBegin(GL_LINES);
             //triangle
              glColor3f(0,0,0);
              glVertex2f(-.08,.65);
              glVertex2f(.08,.65);
             // glVertex2f(-.15,.6);
              //glVertex2f(.15,.6);
              glVertex2f(-.23,.55);
              glVertex2f(.23,.55);

            //quard
             //glVertex2f(-.3,.5);
              //glVertex2f(.3,.5);
              glVertex2f(-.3,.45);
              glVertex2f(.3,.45);
              //glVertex2f(-.3,.4);
              //glVertex2f(.3,.4);
              glVertex2f(-.293,.35);
              glVertex2f(.293,.35);
              //glVertex2f(-.3,.3);
              //glVertex2f(.3,.3);
              glVertex2f(-.295,.25);
              glVertex2f(.3,.25);

             glEnd();


             //top to bottom
glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(.2,.57);
              glVertex2f(.2,.25);
              glVertex2f(.1,.64);
              glVertex2f(.1,.25);
              glVertex2f(0,.7);
              glVertex2f(0,.25);
              glVertex2f(-.1,.64);
              glVertex2f(-.1,.25);
              glVertex2f(-.2,.57);
              glVertex2f(-.2,.25);
              glEnd();


             //inside line lower quard door

             glBegin(GL_QUADS);
              glColor3ub(90, 90, 63);
             glVertex2f(.3,-.4);
              glVertex2f(-.3,-.4);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);

             glEnd();

             //lower triangle
              glBegin(GL_TRIANGLES);
              glColor3ub(90, 90, 63);
              glVertex2f(-.3,-.05);
              glVertex2f(.3,-.05);
              glVertex2f(.0,.1);

              glEnd();

             //inside line lower quard door(multiple line)
               glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.3,-.3);
              glVertex2f(-.3,-.3);
              glVertex2f(.3,-.2);
              glVertex2f(-.3,-.2);
              glVertex2f(.295,-.1);
              glVertex2f(-.295,-.1);
              glVertex2f(.2,.0);
              glVertex2f(-.2,.0);
             glEnd();

             //top to bottom
             glBegin(GL_LINES);
              glColor3f(0,0,0);
             glVertex2f(.2,.0);
             glVertex2f(.2,-.4);
             glVertex2f(.1,.04);
              glVertex2f(.1,-.4);
              glVertex2f(.0,.1);
              glVertex2f(.0,-.4);
              glVertex2f(-.1,.04);
              glVertex2f(-.1,-.4);
              glVertex2f(-.2,.0);
              glVertex2f(-.2,-.4);

             glEnd();

             //main gombuj side right gombuj(base,triangle--)

// right side small gombuj circle(main side)
  x=1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//end of gg

 //right base

glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(1.3,1.2);
              glVertex2f(1.3,1.6);
              glVertex2f(.9,1.6);
              glVertex2f(.9,1.2);

                glEnd();
//right base under
 glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.25,1.2);
              glVertex2f(1.25,1.4);
              glVertex2f(.95,1.4);
              glVertex2f(.95,1.2);

                glEnd();


                 // right side gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(.9,1.8);
              glVertex2f(1.3,1.8);
              glVertex2f(1.1,2.1);
                glEnd();

  // right sided gumbuj upper 1st small circle
	 x=1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right sided gumbuj upper 2st big circle
	 x=1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(1.093,2.2);
              glVertex2f(1.113,2.2);
              glVertex2f(1.1,2.4);

              glEnd();


//main gombuj side left gombuj(base,triangle--)


// left side small gombuj circle(main side)
  x=-1.1f;  y=1.65f; radius =.25f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //left base

 glBegin(GL_QUADS);
              glColor3ub(237,233,223);
              glVertex2f(-1.3,1.2);
              glVertex2f(-1.3,1.6);
              glVertex2f(-.9,1.6);
              glVertex2f(-.9,1.2);

                glEnd();

                //left base under
                glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.26,1.2);
              glVertex2f(-1.26,1.4);
              glVertex2f(-.95,1.4);
              glVertex2f(-.95,1.2);

                glEnd();


// left side  gombuj  triangle

glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-.9,1.8);
              glVertex2f(-1.3,1.8);
              glVertex2f(-1.1,2.1);


              glEnd();

              // left sided gumbuj upper 1st small circle
	 x=-1.1f; y=2.1f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left sided gumbuj upper 2st big circle
	 x=-1.1f; y=2.16f;  radius =.035f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left gumbuj upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-1.093,2.2);
              glVertex2f(-1.113,2.2);
              glVertex2f(-1.1,2.4);

              glEnd();




	//yellow right quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(1.3,1.0);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,1.0);
              glEnd();

               //upper part inner circle


               x=1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.97,.81);
              glVertex2f(1.23,.81);
              glVertex2f(1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,.7);
              glVertex2f(1.3,.37);
              glVertex2f(.9,.37);
              glVertex2f(.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(1.3,.3);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,.3);
                glEnd();

                //right side gumbuj


  x=1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(.965,.05);
              glVertex2f(1.24,.05);
              glVertex2f(1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(1.3,-.05);
              glVertex2f(1.3,-.4);
              glVertex2f(.9,-.4);
              glVertex2f(.9,-.05);
              glEnd();









              //yellow left quard under quard .....



             glBegin(GL_QUADS);

             //upper
              glColor3f(1,1,1);
              glVertex2f(-1.3,1.0);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,1.0);
              glEnd();

               //upper part inner circle


               x=-1.1f;  y=.66f;  radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//end circle

//upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.97,.81);
              glVertex2f(-1.23,.81);
              glVertex2f(-1.1,.95);
                glEnd();

            //upper inner quard
            glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,.7);
              glVertex2f(-1.3,.37);
              glVertex2f(-.9,.37);
              glVertex2f(-.9,.7);

              //lower
              glColor3f(1,1,1);
              glVertex2f(-1.3,.3);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,.3);
                glEnd();

                //left side gumbuj


  x=-1.1f;  y=-.1f; radius =.2f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //lower part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-.965,.05);
              glVertex2f(-1.24,.05);
              glVertex2f(-1.094,.23);
                glEnd();

               //lower inder quard

               glBegin(GL_QUADS);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.3,-.05);
              glVertex2f(-1.3,-.4);
              glVertex2f(-.9,-.4);
              glVertex2f(-.9,-.05);
              glEnd();


//red part end










           //right side small piller small gumbuj

//circle right side piller gombuj
  x=2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(2.07,1.4);
              glVertex2f(2.28,1.4);
              glVertex2f(2.17,1.55);
                glEnd();
	//end


	//right small piller 1st small circle
	 x=2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.16,1.5);
              glVertex2f(2.18,1.5);
              glVertex2f(2.17,1.7);

              glEnd();


            //left side small piller small gumbuj

  //circle left side piller gombuj
  x=-2.18f;  y=1.35f; radius =.11f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

            //small left piller gombuj ( triangle )

            glBegin(GL_TRIANGLES);
              glColor3ub(237,233,223);
              glVertex2f(-2.07,1.4);
              glVertex2f(-2.28,1.4);
              glVertex2f(-2.17,1.55);
                glEnd();
	//end
	//left small piller 1st small circle
	 x=-2.17f; y=1.5f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side small piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.16,1.5);
              glVertex2f(-2.18,1.5);
              glVertex2f(-2.17,1.7);

              glEnd();



	//big piller gombuj work for right side

//right side big piller gumbuj circel

x=2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  right gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(2.73,1.99);
              glVertex2f(2.91,1.99);
              glVertex2f(2.815,2.1);


              glEnd();
	//end


		//right big piller 1st small circle
	 x=2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//right side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(2.82,2.086);
              glVertex2f(2.83,2.086);
              glVertex2f(2.8,2.4);

              glEnd();




			          //big piller gombuj work for left side

//left side big piller gumbuj circel

x=-2.82f;  y=1.95f; radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
 glColor3ub(237,233,223);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//big piller  left gombuj ( triangle )

  glBegin(GL_TRIANGLES);
               glColor3ub(237,233,223);
              glVertex2f(-2.73,1.99);
              glVertex2f(-2.91,1.99);
              glVertex2f(-2.815,2.1);


              glEnd();
	//end


		//left big piller 1st small circle
	 x=-2.82f; y=2.04f;  radius =.03f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3f(0,0,0);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//left side big piller upper small triangle
	glBegin(GL_TRIANGLES);
              glColor3f(0,0,0);
              glVertex2f(-2.82,2.086);
              glVertex2f(-2.83,2.086);
              glVertex2f(-2.8,2.4);

              glEnd();
	//end of big piller






	// left lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(1.23,-.05);
              glVertex2f(1.23,-.4);
              glVertex2f(.97,-.4);
              glVertex2f(.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(1.23,.7);
              glVertex2f(1.23,.37);
              glVertex2f(.97,.37);
              glVertex2f(.97,.7);
              glEnd();


               //left angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(1.83,1.0);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,1.0);
               glEnd();

                //upper part inner quard


               x=1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.54,.84);
              glVertex2f(1.77,.84);
              glVertex2f(1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(1.83,.73);
              glVertex2f(1.83,.37);
              glVertex2f(1.48,.37);
              glVertex2f(1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(1.77,.7);
              glVertex2f(1.77,.37);
              glVertex2f(1.54,.37);
              glVertex2f(1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(1.83,.3);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.3);
              glEnd();

              //lower part inner quard


               x=1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(1.5,.1);
              glVertex2f(1.8,.1);
              glVertex2f(1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(1.83,.03);
              glVertex2f(1.83,-.4);
              glVertex2f(1.48,-.4);
              glVertex2f(1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(1.77,-.04);
              glVertex2f(1.77,-.4);
              glVertex2f(1.54,-.4);
              glVertex2f(1.54,-.04);
              glEnd();//end





              // right lower inder quard door(914)
	 glBegin(GL_QUADS);
              glColor3ub(90,90,63);
              glVertex2f(-1.23,-.05);
              glVertex2f(-1.23,-.4);
              glVertex2f(-.97,-.4);
              glVertex2f(-.97,-.05);


                //upper inner quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.23,.7);
              glVertex2f(-1.23,.37);
              glVertex2f(-.97,.37);
              glVertex2f(-.97,.7);
              glEnd();


               //right angle quard for red


               glBegin(GL_QUADS);

             //upper part
              glColor3f(1,1,1);
              glVertex2f(-1.83,1.0);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,1.0);
               glEnd();

                //upper part inner quard


               x=-1.655f;  y=.7f;  radius =.176f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle

               //upper part triangle
	glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.54,.84);
              glVertex2f(-1.77,.84);
              glVertex2f(-1.65,.945);
                glEnd();


             //upper part inside quard
              glBegin(GL_QUADS);
               glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.73);
              glVertex2f(-1.83,.37);
              glVertex2f(-1.48,.37);
              glVertex2f(-1.48,.73);

             //upper part inside door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,.7);
              glVertex2f(-1.77,.37);
              glVertex2f(-1.54,.37);
              glVertex2f(-1.54,.7);


              //lower part
              glColor3f(1,1,1);
              glVertex2f(-1.83,.3);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.3);
              glEnd();

              //lower part inner quard


               x=-1.655f;  y=.00f;  radius =.175f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(224, 224, 209);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

               //end circle


               //lower part triangle
glBegin(GL_TRIANGLES);
              glColor3ub(224, 224, 209);
              glVertex2f(-1.5,.1);
              glVertex2f(-1.8,.1);
              glVertex2f(-1.65,.24);
                glEnd();

               glBegin(GL_QUADS);
            //lower inder quard
              glColor3ub(224, 224, 209);
              glVertex2f(-1.83,.03);
              glVertex2f(-1.83,-.4);
              glVertex2f(-1.48,-.4);
              glVertex2f(-1.48,.03);

               //lower inder quard door
              glColor3ub(90,90,63);
              glVertex2f(-1.77,-.04);
              glVertex2f(-1.77,-.4);
              glVertex2f(-1.54,-.4);
              glVertex2f(-1.54,-.04);
              glEnd();//end






               //background grass
                       glBegin(GL_QUADS);
              glColor3ub(65,152,10);
              glVertex2f(-4,-4);
              glVertex2f(-4,-.8);
              glVertex2f(4,-.8);
              glVertex2f(4,-4);
             glEnd();








              //road beside pond
              //left

            glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-.41,-.8);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
              glEnd();


               glBegin(GL_QUADS);

              //right

              glColor3ub(128,128,128);
              glVertex2f(.41,-.8);
              glVertex2f(.8,-4);
              glVertex2f(.4,-4);
              glVertex2f(.24,-.8);
              glEnd();
              //end of road beside pond


              //road beside field
              //right
                glBegin(GL_QUADS);
              glColor3ub(38,139,7);
              glVertex2f(.8,-.8);
              glVertex2f(2.0,-4);
              glVertex2f(.8,-4);
              glVertex2f(.4,-.8);

                //left
              glColor3ub(51, 102, 0);
              glVertex2f(-.8,-.8);
              glVertex2f(-2.0,-4);
              glVertex2f(-.8,-4);
              glVertex2f(-.4,-.8);

              glEnd();
        //end road beside pond

                           //road tree


//tree 1 (up ) (positive )
                glBegin(GL_QUADS);
                glColor3ub(139, 69, 19);
              glVertex2f(.7,-1.3);
              glVertex2f(.7,-1.6);
              glVertex2f(.75,-1.6);
              glVertex2f(.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.5,-1.3);
              glVertex2f(.93,-1.3);
              glVertex2f(.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.53,-1.19);
              glVertex2f(.91,-1.19);
              glVertex2f(.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.55,-1.05);
              glVertex2f(.9,-1.05);
              glVertex2f(.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.59,-0.9);
              glVertex2f(.86,-0.9);
              glVertex2f(.72,-0.7);
              glEnd();




        //tree 1 (up )(positive )end




                //tree 2 (up ) (negative )
                glBegin(GL_QUADS);
                 glColor3ub(139, 69, 19);
              glVertex2f(-.7,-1.3);
              glVertex2f(-.7,-1.6);
              glVertex2f(-.75,-1.6);
              glVertex2f(-.75,-1.3);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.5,-1.3);
              glVertex2f(-.93,-1.3);
              glVertex2f(-.71,-1);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.53,-1.19);
              glVertex2f(-.91,-1.19);
              glVertex2f(-.72,-.9);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.55,-1.05);
              glVertex2f(-.9,-1.05);
              glVertex2f(-.72,-0.83);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.59,-0.9);
              glVertex2f(-.86,-0.9);
              glVertex2f(-.72,-0.7);
              glEnd();




        //tree 2 (up )(negative )end



       //tree3 (middle ) (positive )
                glBegin(GL_QUADS);
               glColor3ub(139, 69, 19);
              glVertex2f(.95,-2.5);
              glVertex2f(.95,-2.8);
              glVertex2f(1,-2.8);
              glVertex2f(1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.75,-2.5);
              glVertex2f(1.18,-2.5);
              glVertex2f(.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.78,-2.39);
              glVertex2f(1.16,-2.39);
              glVertex2f(.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.81,-2.25);
              glVertex2f(1.16,-2.25);
              glVertex2f(.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.85,-2.1);
              glVertex2f(1.12,-2.1);
              glVertex2f(.98,-1.9);
              glEnd();




        //tree 3 (middle )(positive )end



       //tree4 (middle ) (negative )
                glBegin(GL_QUADS);
              glColor3ub(139, 69, 19);
              glVertex2f(-.95,-2.5);
              glVertex2f(-.95,-2.8);
              glVertex2f(-1,-2.8);
              glVertex2f(-1,-2.5);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(-.75,-2.5);
              glVertex2f(-1.18,-2.5);
              glVertex2f(-.96,-2.2);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(-.78,-2.39);
              glVertex2f(-1.16,-2.39);
              glVertex2f(-.97,-2.1);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.81,-2.25);
              glVertex2f(-1.16,-2.25);
              glVertex2f(-.98,-2.03);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(-.85,-2.1);
              glVertex2f(-1.12,-2.1);
              glVertex2f(-.98,-1.9);
              glEnd();




        //tree 4 (middle )(negative )end





         //tree5 (down ) (positive )
                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(1.13,-3.6);
              glVertex2f(1.13,-3.9);
              glVertex2f(1.18,-3.9);
              glVertex2f(1.18,-3.6);
               glEnd();


//1
    glBegin(GL_TRIANGLES);
               glColor3f(-1,15,.2);
              glVertex2f(.93,-3.6);
              glVertex2f(1.36,-3.6);
              glVertex2f(1.14,-3.3);
             glEnd();


//2
              glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
              glVertex2f(.96,-3.49);
              glVertex2f(1.34,-3.49);
              glVertex2f(1.15,-3.2);
               glEnd();
//3
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(.99,-3.35);
              glVertex2f(1.34,-3.35);
              glVertex2f(1.16,-3.13);

              glEnd();

//4
    glBegin(GL_TRIANGLES);
              glColor3f(-1,15,.2);
             glVertex2f(1.03,-3.2);
              glVertex2f(1.3,-3.2);
              glVertex2f(1.16,-3);
              glEnd();







          //end road tree

         //pond beside light

     glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(.32,-.8);
              glVertex2f(.6,-4);
              glVertex2f(-.6,-4);
              glVertex2f(-.32,-.8);
              glEnd();

                            // pond

                //outer side
                    glBegin(GL_QUADS);
              glColor3f(0, 191, 255);
              glVertex2f(.24,-.8);
              glVertex2f(.4,-4);
              glVertex2f(-.4,-4);
              glVertex2f(-.24,-.8);
               glEnd();



              //road beside pond

              //main road (where human is walking )
              glBegin(GL_QUADS);
              glColor3ub(128,128,128);
              glVertex2f(-4,-4);
              glVertex2f(-4,-3);
              glVertex2f(4,-3);
              glVertex2f(4,-4);
              glEnd();


// road end



//light (positive down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.46,-2.12);
              glVertex2f(.46,-3);
              glVertex2f(.5,-3);
              glVertex2f(.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.6,-2.12);
              glVertex2f(.6,-2.22);
              glVertex2f(.35,-2.22);
              glVertex2f(.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.61,-2.12);
              glVertex2f(.61,-2.33);
              glVertex2f(.58,-2.33);
              glVertex2f(.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.34,-2.12);
              glVertex2f(.34,-2.33);
              glVertex2f(.37,-2.33);
              glVertex2f(.37,-2.12);
               glEnd();


//light bulb


               x=.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



////
//light (negative down )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.46,-2.12);
              glVertex2f(-.46,-3);
              glVertex2f(-.5,-3);
              glVertex2f(-.5,-2.12);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.6,-2.12);
              glVertex2f(-.6,-2.22);
              glVertex2f(-.35,-2.22);
              glVertex2f(-.35,-2.12);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.61,-2.12);
              glVertex2f(-.61,-2.33);
              glVertex2f(-.58,-2.33);
              glVertex2f(-.58,-2.12);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.34,-2.12);
              glVertex2f(-.34,-2.33);
              glVertex2f(-.37,-2.33);
              glVertex2f(-.37,-2.12);
               glEnd();


//light bulb


               x=-.6f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.35f;  y=-2.38f;  radius =.09f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end



//light (positive up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.35,-.8);
              glVertex2f(.35,-1.4);
              glVertex2f(.39,-1.4);
              glVertex2f(.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.49,-.8);
              glVertex2f(.49,-.9);
              glVertex2f(.24,-.9);
              glVertex2f(.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.5,-.8);
              glVertex2f(.5,-1.01);
              glVertex2f(.47,-1.01);
              glVertex2f(.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(.23,-.8);
              glVertex2f(.23,-1.01);
              glVertex2f(.26,-1.01);
              glVertex2f(.26,-.8);
               glEnd();


//light bulb


               x=.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


//////

//light (negative up )
              //stand
                 glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.35,-.8);
              glVertex2f(-.35,-1.4);
              glVertex2f(-.39,-1.4);
              glVertex2f(-.39,-.8);
               glEnd();

               //light point

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.49,-.8);
              glVertex2f(-.49,-.9);
              glVertex2f(-.24,-.9);
              glVertex2f(-.24,-.8);
               glEnd();

                glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.5,-.8);
              glVertex2f(-.5,-1.01);
              glVertex2f(-.47,-1.01);
              glVertex2f(-.47,-.8);
               glEnd();

                   glBegin(GL_QUADS);
              glColor3f(0,0,0);
              glVertex2f(-.23,-.8);
              glVertex2f(-.23,-1.01);
              glVertex2f(-.26,-1.01);
              glVertex2f(-.26,-.8);
               glEnd();


//light bulb


               x=-.49f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//


               x=-.24f;  y=-1.06f;  radius =.07f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,255,255);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//end


////////////////////////////////////////
//human start

/*glPushMatrix();
glTranslatef(position4,0,0);

//Mundu1
            x=2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


           //body1
            glBegin(GL_QUADS);
            glColor3ub(0,179,255);
            glVertex2f(2.9f, -3.6f);
            glVertex2f(2.9f, -3.8f);
            glVertex2f(3.03f, -3.8f);
            glVertex2f(3.03f, -3.6f);
            glEnd();

            	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(3.025f, -3.6f);
	glVertex2f(3.025f, -3.64f);
	glVertex2f(3.085f, -3.7f);
	glVertex2f(3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.9f, -3.6f);
	glVertex2f(2.9f, -3.64f);
	glVertex2f(2.86f, -3.7f);
	glVertex2f(2.86f, -3.6f);

            //left foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(2.9f,-3.8f);
            glVertex2f(2.9f, -4.0f);
            glVertex2f(2.93f, -4.0f);
            glVertex2f(2.93f, -3.8f);
            glEnd();

            //right foot1
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(3.0f,-3.8f);
            glVertex2f(3.0f, -4.0f);
            glVertex2f(3.03f, -4.0f);
            glVertex2f(3.03f, -3.8f);
            glEnd();




//Mundu2
            x=-2.96f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body2
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-2.9f, -3.6f);
glVertex2f(-2.9f, -3.8f);
glVertex2f(-3.03f, -3.8f);
glVertex2f(-3.03f, -3.6f);
glEnd();

	//left hand2
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-3.025f, -3.6f);
	glVertex2f(-3.025f, -3.64f);
	glVertex2f(-3.085f, -3.7f);
	glVertex2f(-3.085f, -3.6f);

	//right hand2
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.9f, -3.6f);
	glVertex2f(-2.9f, -3.64f);
	glVertex2f(-2.86f, -3.7f);
	glVertex2f(-2.86f, -3.6f);

 //left foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-2.9f,-3.8f);
            glVertex2f(-2.9f, -4.0f);
            glVertex2f(-2.93f, -4.0f);
            glVertex2f(-2.93f, -3.8f);
            glEnd();

            //right foot2
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-3.0f,-3.8f);
            glVertex2f(-3.0f, -4.0f);
            glVertex2f(-3.03f, -4.0f);
            glVertex2f(-3.03f, -3.8f);
            glEnd();






                        //Mundu5
            x=1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body5
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.9f);
glVertex2f(1.47f, -2.9f);
glVertex2f(1.47f, -2.7f);
glEnd();


//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.34f, -2.7f);
glVertex2f(1.34f, -2.74f);
glVertex2f(1.3f, -2.83f);
glVertex2f(1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(1.47f, -2.7f);
glVertex2f(1.47f, -2.74f);
glVertex2f(1.51f, -2.83f);
glVertex2f(1.51f, -2.7f);


 //left foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.34f,-2.9f);
            glVertex2f(1.34f, -3.1f);
            glVertex2f(1.37f, -3.1f);
            glVertex2f(1.37f, -2.9f);
            glEnd();

            //right foot5
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(1.44f,-2.9f);
            glVertex2f(1.44f, -3.1f);
            glVertex2f(1.47f, -3.1f);
            glVertex2f(1.47f, -2.9f);
            glEnd();



                                    //Mundu6
            x=-1.4f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//body6
glBegin(GL_QUADS);
glColor3ub(255,255,0);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.9f);
glVertex2f(-1.47f, -2.9f);
glVertex2f(-1.47f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.34f, -2.7f);
glVertex2f(-1.34f, -2.74f);
glVertex2f(-1.3f, -2.83f);
glVertex2f(-1.3f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-1.47f, -2.7f);
glVertex2f(-1.47f, -2.74f);
glVertex2f(-1.51f, -2.83f);
glVertex2f(-1.51f, -2.7f);

 //left foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.34f,-2.9f);
            glVertex2f(-1.34f, -3.1f);
            glVertex2f(-1.37f, -3.1f);
            glVertex2f(-1.37f, -2.9f);
            glEnd();

            //right foot6
            glBegin(GL_QUADS);
            glColor3ub(255,194,138);
            glVertex2f(-1.44f,-2.9f);
            glVertex2f(-1.44f, -3.1f);
            glVertex2f(-1.47f, -3.1f);
            glVertex2f(-1.47f, -2.9f);
            glEnd();



                                    //Mundu7
            x=3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body7
glBegin(GL_QUADS);
glColor3ub(255,2,255);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -2.7f);
glEnd();

//left hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.7f);
glVertex2f(3.43f, -2.74f);
glVertex2f(3.39f, -2.83f);
glVertex2f(3.39f, -2.7f);


//right hand7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.57f, -2.7f);
glVertex2f(3.57f, -2.74f);
glVertex2f(3.61f, -2.83f);
glVertex2f(3.61f, -2.7f);


//left foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.43f, -2.9f);
glVertex2f(3.467f, -2.9f);
glVertex2f(3.467f, -3.12f);
glVertex2f(3.43f, -3.12f);
glEnd();


//right foot7
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(3.531f, -2.9f);
glVertex2f(3.57f, -2.9f);
glVertex2f(3.57f, -3.12f);
glVertex2f(3.531f, -3.12f);
glEnd();

glPopMatrix();





glPushMatrix();

   glTranslatef(position5,0,0);

                                    //Mundu8
            x=-3.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body8
glBegin(GL_QUADS);
glColor3ub(0,2,255);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -2.7f);
glEnd();

//left hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.7f);
glVertex2f(-3.43f, -2.74f);
glVertex2f(-3.39f, -2.83f);
glVertex2f(-3.39f, -2.7f);


//right hand8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.57f, -2.7f);
glVertex2f(-3.57f, -2.74f);
glVertex2f(-3.61f, -2.83f);
glVertex2f(-3.61f, -2.7f);

//left foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.43f, -2.9f);
glVertex2f(-3.467f, -2.9f);
glVertex2f(-3.467f, -3.12f);
glVertex2f(-3.43f, -3.12f);
glEnd();


//right foot8
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-3.531f, -2.9f);
glVertex2f(-3.57f, -2.9f);
glVertex2f(-3.57f, -3.12f);
glVertex2f(-3.531f, -3.12f);
glEnd();






                                    //Mundu9
            x=2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body9
glBegin(GL_QUADS);
glColor3ub(255, 100, 0);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -2.7f);
glEnd();

//left hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.7f);
glVertex2f(2.43f, -2.74f);
glVertex2f(2.39f, -2.83f);
glVertex2f(2.39f, -2.7f);


//right hand9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.57f, -2.7f);
glVertex2f(2.57f, -2.74f);
glVertex2f(2.61f, -2.83f);
glVertex2f(2.61f, -2.7f);


//left foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.43f, -2.9f);
glVertex2f(2.467f, -2.9f);
glVertex2f(2.467, -3.12f);
glVertex2f(2.43f, -3.12f);
glEnd();


//right foot9
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(2.531f, -2.9f);
glVertex2f(2.57f, -2.9f);
glVertex2f(2.57f, -3.12f);
glVertex2f(2.531f, -3.12f);
glEnd();






                                    //Mundu10
            x=-2.5f;  y=-2.6f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//body10
glBegin(GL_QUADS);
glColor3ub(150, 130, 200);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -2.7f);
glEnd();

//left hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.7f);
glVertex2f(-2.43f, -2.74f);
glVertex2f(-2.39f, -2.83f);
glVertex2f(-2.39f, -2.7f);


//right hand10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.57f, -2.7f);
glVertex2f(-2.57f, -2.74f);
glVertex2f(-2.61f, -2.83f);
glVertex2f(-2.61f, -2.7f);

//left foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.43f, -2.9f);
glVertex2f(-2.467f, -2.9f);
glVertex2f(-2.467, -3.12f);
glVertex2f(-2.43f, -3.12f);
glEnd();


//right foot10
glBegin(GL_QUADS);
glColor3ub(255,194,138);
glVertex2f(-2.531f, -2.9f);
glVertex2f(-2.57f, -2.9f);
glVertex2f(-2.57f, -3.12f);
glVertex2f(-2.531f, -3.12f);
glEnd();





//Mundu11
            x=2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body11
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(2.08f, -3.8f);
	glVertex2f(2.08f, -3.6f);
	glEnd();

		//left hand11
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(2.08f, -3.6f);
	glVertex2f(2.08f, -3.64f);
	glVertex2f(2.125f, -3.7f);
	glVertex2f(2.125f, -3.6f);

	//right hand11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(1.92f, -3.6f);
	glVertex2f(1.92f, -3.64f);
	glVertex2f(1.88f, -3.7f);
	glVertex2f(1.88f, -3.6f);

	//left foot11
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(1.92f, -3.8f);
	glVertex2f(1.92f, -4.0f);
	glVertex2f(1.96f, -4.0f);
	glVertex2f(1.96f, -3.8f);
	glEnd();


	//right foot11
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(2.04f, -3.8f);
	glVertex2f(2.04f, -4.0f);
	glVertex2f(2.08f, -4.0f);
	glVertex2f(2.08f, -3.8f);
	glEnd();














//Mundu12
            x=-2.0f;  y=-3.5f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle
glColor3ub(255,194,138);
	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//body12
	glBegin(GL_QUADS);
	glColor3ub(140,0,200);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-2.08f, -3.8f);
	glVertex2f(-2.08f, -3.6f);
	glEnd();


	//left hand12
	glBegin(GL_QUADS);
    glColor3ub(255,194,138);
	glVertex2f(-2.08f, -3.6f);
	glVertex2f(-2.08f, -3.64f);
	glVertex2f(-2.125f, -3.7f);
	glVertex2f(-2.125f, -3.6f);

	//right hand12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-1.92f, -3.6f);
	glVertex2f(-1.92f, -3.64f);
	glVertex2f(-1.88f, -3.7f);
	glVertex2f(-1.88f, -3.6f);

	//left foot12
	glBegin(GL_QUADS);
	glColor3ub(255, 194, 138);
	glVertex2f(-1.92f, -3.8f);
	glVertex2f(-1.92f, -4.0f);
	glVertex2f(-1.96f, -4.0f);
	glVertex2f(-1.96f, -3.8f);
	glEnd();


	//right foot12
	glBegin(GL_QUADS);
	glColor3ub(255,194,138);
	glVertex2f(-2.04f, -3.8f);
	glVertex2f(-2.04f, -4.0f);
	glVertex2f(-2.08f, -4.0f);
	glVertex2f(-2.08f, -3.8f);
	glEnd();
	glPopMatrix();


	//human end
	*/


	glutTimerFunc(5000,night_demo,0);
glFlush();

}

 void sound1()
{
    PlaySound("taj.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void sound()
{

    PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME);


}
void sound3()
{

    PlaySound("c.wav", NULL, SND_ASYNC|SND_FILENAME);


}
void sound4()
{

    PlaySound("d.wav", NULL, SND_ASYNC|SND_FILENAME);


}




void handleKeypress1(unsigned char key, int x, int y) {

	switch (key) {

case '1':

         glutDisplayFunc(day);
         sound();
         glutPostRedisplay();

    break;

case '2':
glutDisplayFunc(night);
sound2();
         glutPostRedisplay();
    break;

case '3':
glutDisplayFunc(late_night);
sound3();
         glutPostRedisplay();
    break;

case '4':
glutDisplayFunc(late_night1);
sound4();
         glutPostRedisplay();
    break;

	}


}


void screen(){
gluOrtho2D(-4,4,-4,4);
}

    int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Taj Mahal");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(day);
    glutIdleFunc(Idle);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, update5, 0);
    glutKeyboardFunc(handleKeypress);
   // glutKeyboardFunc(handleKeypress1);
    glutMouseFunc(handleMouse);
    init2();
    screen();
    glutMainLoop();
    return 0;   }
