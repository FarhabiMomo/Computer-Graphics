#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI  3.14159265358979323846

GLfloat p = 90.0f;
GLfloat s = 90.0f;
GLfloat m = 90.0f;
GLfloat h = 90.0f;

GLfloat position = 0.0f;

GLfloat speed = 0.04f;


GLfloat position1 = 0.0f;

GLfloat speed1 = 0.04f;
void sound();

void init() {
sound();
}
/*void sound3();
void init1() {
   sound3();
}*/

void update(int value) {

    if(position > 1.0)
        position = -1.8f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void update1(int value) {

    if(position1 > 1.0)
        position1 = -1.8f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void Idle()
{

glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed1 += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed1 -= 0.1f;
			}
	glutPostRedisplay();}


/*void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}
	}*/
/*void sound();
	void demo_late_day1(int val) {

 glutDisplayFunc(sound);


}*/
	void evening();


void demo_late_day(int val) {

 glutDisplayFunc(evening);


}

	void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

       //sky start

            glBegin(GL_QUADS);
              glColor3ub(42,42,53);
              glVertex2f(-99,99);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(99,99);
              glEnd();

              //star
             /*float x=.46f; float y=.87f; float radius =.004f;
   int triangleAmount = 20;
    int i;
	float twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 x=-.46f;  y=.87f;  radius =.004f;
    triangleAmount = 20;
twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-.4f;  y=.8f;  radius =.004f;
    triangleAmount = 20;
twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();*/




     //background green

            glBegin(GL_QUADS);
              glColor3ub(17,75,56);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
              glEnd();


	glLoadIdentity();


                //field
                 glBegin(GL_QUADS);
              glColor3ub(134, 89, 45);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
             glVertex2f(99,-99);
              glEnd();

              //field last thake half
                 glBegin(GL_QUADS);
              glColor3ub(59,95,60);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.75);
             glVertex2f(97,-.75);
             glVertex2f(99,-99);
              glEnd();

    //bulding right side
            //school base 1
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.9,-.0);
             glVertex2f(-.9,-.5);
             glVertex2f(-.5,-.5);
             glVertex2f(-.5,-.0);
              glEnd();

              //school door1 (top to bottom) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.85,-.2);
             glVertex2f(-.85,-.5);
             glVertex2f(-.75,-.5);
             glVertex2f(-.75,-.2);
              glEnd();


              //school door2(left to right) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.7,-.2);
             glVertex2f(-.7,-.33);
             glVertex2f(-.56,-.33);
             glVertex2f(-.56,-.2);
              glEnd();


              //school door2(left to right) right side
              //under it 2 lines draw

               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(-.7,-.265);
             glVertex2f(-.56,-.265);//end line(right to left  )

            glVertex2f(-.635,-.2);
             glVertex2f(-.635,-.33);//end line(top to bottom )
              glEnd();


              glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {1.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(-.7,.5);
             glVertex2f(-.9,.3);
             glVertex2f(-.5,.3);
              glEnd();
glDisable(GL_LIGHTING);//Enable Light Effect

                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(-.85,.3);
             glVertex2f(-.85,.0);
             glVertex2f(-.55,.0);
             glVertex2f(-.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.75,.22);
             glVertex2f(-.75,.1);
             glVertex2f(-.64,.1);
             glVertex2f(-.64,.22);
              glEnd();

    //road light1
              //road light lower part1
              glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);
              glVertex2f(-.4,-.1);
             glVertex2f(-.4,-.5);
             glVertex2f(-.38,-.5);
             glVertex2f(-.38,-.1);
              glEnd();

              //road light upper part1
              glBegin(GL_QUADS);
              glColor3ub(255, 255, 255);
              glVertex2f(-.42,-.0);
             glVertex2f(-.42,-.1);
             glVertex2f(-.36,-.1);
             glVertex2f(-.36,-.0);
              glEnd();//end road light1

               //road light2
                //road light lower part2
              glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);
              glVertex2f(.48,-.1);
             glVertex2f(.48,-.5);
             glVertex2f(.46,-.5);
             glVertex2f(.46,-.1);
              glEnd();

              //road light upper part2
              glBegin(GL_QUADS);
              glColor3ub(255, 255, 255);
              glVertex2f(.50,-.0);
             glVertex2f(.50,-.1);
             glVertex2f(.44,-.1);
             glVertex2f(.44,-.0);
              glEnd();//end road light




 //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();

              //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

              //watch hour minutes sec

   //bulding door1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(-.18,-.1);
              glVertex2f(-.18,-.4);
             glVertex2f(-.12,-.4);
             glVertex2f(-.12,-.1);

              glEnd();


              //door1 window1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.12);
               glVertex2f(-.18,.03);
             glVertex2f(-.12,.03);
             glVertex2f(-.12,.12);

              glEnd();

               //door1 window2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.27);
               glVertex2f(-.18,.18);
             glVertex2f(-.12,.18);
             glVertex2f(-.12,.27);

              glEnd();

              //bulding door2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,-.1);
              glVertex2f(.28,-.4);
             glVertex2f(.22,-.4);
             glVertex2f(.22,-.1);

              glEnd();

              //door2 window1
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.12);
              glVertex2f(.28,.03);
             glVertex2f(.22,.03);
             glVertex2f(.22,.12);

              glEnd();


              //door2 window2
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.27);
              glVertex2f(.28,.18);
             glVertex2f(.22,.18);
             glVertex2f(.22,.27);

              glEnd();


              //bulding left side
            //school base 2
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(.9,.0);
             glVertex2f(.9,-.5);
             glVertex2f(.5,-.5);
             glVertex2f(.5,.0);
              glEnd();

              //school door1 left side

               glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.8,-.2);
             glVertex2f(.8,-.5);
             glVertex2f(.6,-.5);
             glVertex2f(.6,-.2);
              glEnd();

              //door inside line
              glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.75,-.2);
             glVertex2f(.75,-.5);
             glVertex2f(.7,-.2);
             glVertex2f(.7,-.5);
             glVertex2f(.65,-.2);
             glVertex2f(.65,-.5);
              glEnd();

              //bottom base end


               //left side upper house
              //chal1
 glEnable(GL_LIGHTING);//Enable Light Effect

float   global_ambient1[] = {1.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.


            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(.7,.5);
             glVertex2f(.9,.3);
             glVertex2f(.5,.3);
              glEnd();

glDisable(GL_LIGHTING);//Enable Light Effect
                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(.85,.3);
             glVertex2f(.85,.0);
             glVertex2f(.55,.0);
             glVertex2f(.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.75,.22);
             glVertex2f(.75,.1);
             glVertex2f(.64,.1);
             glVertex2f(.64,.22);
              glEnd();
    //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();





     //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

	glPushMatrix();

	//glTranslatef(0.05, .15f, 1);
	glTranslatef(0.05, 0.15f, 1);

	glRotatef(s,0.0,0.0,2.0);

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.08f);

	glEnd();

	glPopMatrix();

	s-=0.5f;

	glLoadIdentity();

	//Drawing Minute
	glPushMatrix();

	glTranslatef(0.05, 0.15f, 1);

	glRotatef(m,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.06f);

	glEnd();

	glPopMatrix();

	m-=0.07f;

	glLoadIdentity();

	//Drawing Hour
	glPushMatrix();

	glTranslatef(.05,.15f, 1);

	glRotatef(h,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.04f);

	glEnd();

	glPopMatrix();

	h-=0.01f;
//circle of moon
	int v;

	float x=.6f; float y=.7f; float radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	float twicePi = 2.0f * PI;
	glColor3ub(255,255,255);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(v = 0; v <= triangleAmount;v++) {
			glVertex2f(
		            x + (radius * cos(v *  twicePi / triangleAmount)),
			    y + (radius * sin(v * twicePi / triangleAmount))
			);
		}
	glEnd();


glutTimerFunc(3000,demo_late_day,0);
//glutTimerFunc(3000,demo_late_day1,0);

//init();
   glFlush();
}

/*void sound3();

void demo_late_night1(int val) {

 glutDisplayFunc(sound3);


}*/
//void sound();
//void sound2();
void demo_late_night(int val) {

 glutDisplayFunc(night);
    //sound2();

}



void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);



            //sky start



                glBegin(GL_QUADS);
              glColor3ub(253,145,107);
              glVertex2f(-99,99);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(99,99);
              glEnd();


              glBegin(GL_QUADS);
              glColor3ub(253,145,107);
              glVertex2f(-99,99);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(99,99);
              glEnd();
              //background green



                //field
                 glBegin(GL_QUADS);
              glColor3ub(134, 89, 45);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
             glVertex2f(99,-99);
              glEnd();

      //bulding right side
            //school base 1
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.9,-.0);
             glVertex2f(-.9,-.5);
             glVertex2f(-.5,-.5);
             glVertex2f(-.5,-.0);
              glEnd();

              //school door1 (top to bottom) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.85,-.2);
             glVertex2f(-.85,-.5);
             glVertex2f(-.75,-.5);
             glVertex2f(-.75,-.2);
              glEnd();


              //school door2(left to right) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.7,-.2);
             glVertex2f(-.7,-.33);
             glVertex2f(-.56,-.33);
             glVertex2f(-.56,-.2);
              glEnd();


              //school door2(left to right) right side
              //under it 2 lines draw

               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(-.7,-.265);
             glVertex2f(-.56,-.265);//end line(right to left  )

            glVertex2f(-.635,-.2);
             glVertex2f(-.635,-.33);//end line(top to bottom )
              glEnd();

    //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(-.7,.5);
             glVertex2f(-.9,.3);
             glVertex2f(-.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(-.85,.3);
             glVertex2f(-.85,.0);
             glVertex2f(-.55,.0);
             glVertex2f(-.55,.3);
              glEnd();

                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.75,.22);
             glVertex2f(-.75,.1);
             glVertex2f(-.64,.1);
             glVertex2f(-.64,.22);
              glEnd();

              //road light1
              //road light lower part1
              glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-.4,-.1);
             glVertex2f(-.4,-.5);
             glVertex2f(-.38,-.5);
             glVertex2f(-.38,-.1);
              glEnd();

              //road light upper part1
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-.42,-.0);
             glVertex2f(-.42,-.1);
             glVertex2f(-.36,-.1);
             glVertex2f(-.36,-.0);
              glEnd();//end road light1

               //road light2
                //road light lower part2
              glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(.48,-.1);
             glVertex2f(.48,-.5);
             glVertex2f(.46,-.5);
             glVertex2f(.46,-.1);
              glEnd();

              //road light upper part2
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(.50,-.0);
             glVertex2f(.50,-.1);
             glVertex2f(.44,-.1);
             glVertex2f(.44,-.0);
              glEnd();//end road light2



                // flag bangladesh
               //side quads
                glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);
              glVertex2f(-.001,.7);
              glVertex2f(-.001,.4);
             glVertex2f(.01,.4);
             glVertex2f(.01,.7);
             glEnd();


             //stick  er khuti
                glBegin(GL_QUADS);
              glColor3ub(1, 1, 1);
              glVertex2f(-.01,.5);
              glVertex2f(-.01,.4);
             glVertex2f(.02,.4);
             glVertex2f(.02,.5);
             glEnd();

             //base green
             glBegin(GL_QUADS);
              glColor3ub(0, 128, 0);
              glVertex2f(.12,.67);
             glVertex2f(.12,.55);
             glVertex2f(.009,.55);
             glVertex2f(.009,.67);
             glEnd();

    /*glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
                 glClear(GL_COLOR_BUFFER_BIT);*/



     //background green

            glBegin(GL_QUADS);
              glColor3ub(51, 102, 0);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
              glEnd();


	glLoadIdentity();


                //field
                 glBegin(GL_QUADS);
              glColor3ub(134, 89, 45);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
             glVertex2f(99,-99);
              glEnd();
    //bulding right side
            //school base 1
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.9,-.0);
             glVertex2f(-.9,-.5);
             glVertex2f(-.5,-.5);
             glVertex2f(-.5,-.0);
              glEnd();

              //school door1 (top to bottom) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.85,-.2);
             glVertex2f(-.85,-.5);
             glVertex2f(-.75,-.5);
             glVertex2f(-.75,-.2);
              glEnd();


              //school door2(left to right) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.7,-.2);
             glVertex2f(-.7,-.33);
             glVertex2f(-.56,-.33);
             glVertex2f(-.56,-.2);
              glEnd();


              //school door2(left to right) right side

              //under it 2 lines draw

               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(-.7,-.265);
             glVertex2f(-.56,-.265);//end line(right to left  )

            glVertex2f(-.635,-.2);
             glVertex2f(-.635,-.33);//end line(top to bottom )
              glEnd();

    //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(-.7,.5);
             glVertex2f(-.9,.3);
             glVertex2f(-.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(-.85,.3);
             glVertex2f(-.85,.0);
             glVertex2f(-.55,.0);
             glVertex2f(-.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.75,.22);
             glVertex2f(-.75,.1);
             glVertex2f(-.64,.1);
             glVertex2f(-.64,.22);
              glEnd();

    //road light1
              //road light lower part1
              glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(-.4,-.1);
             glVertex2f(-.4,-.5);
             glVertex2f(-.38,-.5);
             glVertex2f(-.38,-.1);
              glEnd();

              //road light upper part1
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-.42,-.0);
             glVertex2f(-.42,-.1);
             glVertex2f(-.36,-.1);
             glVertex2f(-.36,-.0);
              glEnd();//end road light1

               //road light2
                //road light lower part2
              glBegin(GL_QUADS);
              glColor3ub(0, 0, 0);
              glVertex2f(.48,-.1);
             glVertex2f(.48,-.5);
             glVertex2f(.46,-.5);
             glVertex2f(.46,-.1);
              glEnd();

              //road light upper part2
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(.50,-.0);
             glVertex2f(.50,-.1);
             glVertex2f(.44,-.1);
             glVertex2f(.44,-.0);
              glEnd();//end road light2



                // flag bangladesh
               //side quads
                glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);
              glVertex2f(-.001,.7);
              glVertex2f(-.001,.4);
             glVertex2f(.01,.4);
             glVertex2f(.01,.7);
             glEnd();


             //stick  er khuti
                glBegin(GL_QUADS);
              glColor3ub(1, 1, 1);
              glVertex2f(-.01,.5);
              glVertex2f(-.01,.4);
             glVertex2f(.02,.4);
             glVertex2f(.02,.5);
             glEnd();

             //base green
             glBegin(GL_QUADS);
              glColor3ub(0, 128, 0);
              glVertex2f(.12,.67);
             glVertex2f(.12,.55);
             glVertex2f(.009,.55);
             glVertex2f(.009,.67);
             glEnd();

 //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();

              //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

              //watch hour minutes sec

   //bulding door1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(-.18,-.1);
              glVertex2f(-.18,-.4);
             glVertex2f(-.12,-.4);
             glVertex2f(-.12,-.1);

              glEnd();


              //door1 window1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.12);
               glVertex2f(-.18,.03);
             glVertex2f(-.12,.03);
             glVertex2f(-.12,.12);

              glEnd();

               //door1 window2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.27);
               glVertex2f(-.18,.18);
             glVertex2f(-.12,.18);
             glVertex2f(-.12,.27);

              glEnd();

              //bulding door2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,-.1);
              glVertex2f(.28,-.4);
             glVertex2f(.22,-.4);
             glVertex2f(.22,-.1);

              glEnd();

              //door2 window1
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.12);
              glVertex2f(.28,.03);
             glVertex2f(.22,.03);
             glVertex2f(.22,.12);

              glEnd();


              //door2 window2
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.27);
              glVertex2f(.28,.18);
             glVertex2f(.22,.18);
             glVertex2f(.22,.27);

              glEnd();


              //bulding left side
            //school base 2
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(.9,.0);
             glVertex2f(.9,-.5);
             glVertex2f(.5,-.5);
             glVertex2f(.5,.0);
              glEnd();

              //school door1 left side

               glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.8,-.2);
             glVertex2f(.8,-.5);
             glVertex2f(.6,-.5);
             glVertex2f(.6,-.2);
              glEnd();

              //door inside line
              glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.75,-.2);
             glVertex2f(.75,-.5);
             glVertex2f(.7,-.2);
             glVertex2f(.7,-.5);
             glVertex2f(.65,-.2);
             glVertex2f(.65,-.5);
              glEnd();

              //bottom base end


                 //left side upper house
                //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(.7,.5);
             glVertex2f(.9,.3);
             glVertex2f(.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(.85,.3);
             glVertex2f(.85,.0);
             glVertex2f(.55,.0);
             glVertex2f(.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.75,.22);
             glVertex2f(.75,.1);
             glVertex2f(.64,.1);
             glVertex2f(.64,.22);
              glEnd();
    //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();

              //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

              //watch hour minutes sec

  //bulding door1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(-.18,-.1);
              glVertex2f(-.18,-.4);
             glVertex2f(-.12,-.4);
             glVertex2f(-.12,-.1);

              glEnd();


              //door1 window1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.12);
               glVertex2f(-.18,.03);
             glVertex2f(-.12,.03);
             glVertex2f(-.12,.12);

              glEnd();

               //door1 window2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.27);
               glVertex2f(-.18,.18);
             glVertex2f(-.12,.18);
             glVertex2f(-.12,.27);

              glEnd();

              //bulding door2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,-.1);
              glVertex2f(.28,-.4);
             glVertex2f(.22,-.4);
             glVertex2f(.22,-.1);

              glEnd();

              //door2 window1
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.12);
              glVertex2f(.28,.03);
             glVertex2f(.22,.03);
             glVertex2f(.22,.12);

              glEnd();


              //door2 window2
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.27);
              glVertex2f(.28,.18);
             glVertex2f(.22,.18);
             glVertex2f(.22,.27);

              glEnd();


              //bulding left side
            //school base 2
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(.9,.0);
             glVertex2f(.9,-.5);
             glVertex2f(.5,-.5);
             glVertex2f(.5,.0);
              glEnd();

              //school door1 left side

               glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.8,-.2);
             glVertex2f(.8,-.5);
             glVertex2f(.6,-.5);
             glVertex2f(.6,-.2);
              glEnd();

              //door inside line
              glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.75,-.2);
             glVertex2f(.75,-.5);
             glVertex2f(.7,-.2);
             glVertex2f(.7,-.5);
             glVertex2f(.65,-.2);
             glVertex2f(.65,-.5);
              glEnd();

              //bottom base end


                 //left side upper house
                //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(.7,.5);
             glVertex2f(.9,.3);
             glVertex2f(.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(.85,.3);
             glVertex2f(.85,.0);
             glVertex2f(.55,.0);
             glVertex2f(.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.75,.22);
             glVertex2f(.75,.1);
             glVertex2f(.64,.1);
             glVertex2f(.64,.22);
              glEnd();


               //left side school

	//Drawing Standing Clock

	glLoadIdentity();

	//Drawing Stand

	//watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

	glPushMatrix();

	//glTranslatef(0.05, .15f, 1);
	glTranslatef(0.05, 0.15f, 1);

	glRotatef(s,0.0,0.0,2.0);

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.08f);

	glEnd();

	glPopMatrix();

	s-=0.5f;

	glLoadIdentity();

	//Drawing Minute
	glPushMatrix();

	glTranslatef(0.05, 0.15f, 1);

	glRotatef(m,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.06f);

	glEnd();

	glPopMatrix();

	m-=0.07f;

	glLoadIdentity();

	//Drawing Hour
	glPushMatrix();

	glTranslatef(.05,.15f, 1);

	glRotatef(h,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.04f);

	glEnd();

	glPopMatrix();

	h-=0.01f;

	int v;

	GLfloat x=.45f; GLfloat y=.45f; GLfloat radius =.09f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(255,51,0);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(v = 0; v <= triangleAmount;v++) {
			glVertex2f(
		            x + (radius * cos(v *  twicePi / triangleAmount)),
			    y + (radius * sin(v * twicePi / triangleAmount))
			);
		}
	glEnd();


 //circul in flag
int i;

             x=.06f; y=.61f; radius =.03f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3ub(255,0,0);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	     //field bottom
    glBegin(GL_QUADS);              // stand
	glColor3ub(25, 111, 61); // Red
	glVertex2f(-1.0f, -1.0f);    // x, y
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.75f);
	glVertex2f(-1.0f, -0.75f);    // x, y

	glEnd();



            //Drawing cloud 1

     glPushMatrix();

   glTranslatef(position1,0,0);


  // GLfloat x=0.13f;  GLfloat y=0.32f; GLfloat radius =.03f;

    //int triangleAmount = 20;
     twicePi = 2.0f * PI;

     x=.42f;   y=.85f;    radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=.46f; y=.87f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=.5f; y=.85f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glPopMatrix();



   //cloud 2
    glPushMatrix();

   glTranslatef(position,0,0);


  // GLfloat x=0.13f;  GLfloat y=0.32f; GLfloat radius =.03f;

    //int triangleAmount = 20;
     twicePi = 2.0f * PI;

     x=-.42f;   y=.85f;    radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.46f; y=.87f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-.5f; y=.85f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glPopMatrix();


glutTimerFunc(3000,demo_late_night,0);

//glutTimerFunc(3000,demo_late_night1,0);
   glFlush();
}





/*void sound2();
void night_demo1(int val) {

 glutDisplayFunc(sound2);


}*/



void night_demo(int val) {

 glutDisplayFunc(day);

//sound2();
}


void evening() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

       //sky start

            glBegin(GL_QUADS);
              //glColor3ub(253,145,107);
              glColor3ub(102, 204, 255);
              glVertex2f(-99,99);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(99,99);
              glEnd();




     //background green

            glBegin(GL_QUADS);
              glColor3ub(0, 51, 0);
             glVertex2f(-97,.10);
             glVertex2f(97,.10);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
              glEnd();


	glLoadIdentity();


                //field
                 glBegin(GL_QUADS);
              glColor3ub(134, 89, 45);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.50);
             glVertex2f(97,-.50);
             glVertex2f(99,-99);
              glEnd();

              //field last thake half
                 glBegin(GL_QUADS);
              glColor3ub(59,95,60);
              glVertex2f(-99,-99);
             glVertex2f(-97,-.75);
             glVertex2f(97,-.75);
             glVertex2f(99,-99);
              glEnd();

    //bulding right side
            //school base 1
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.9,-.0);
             glVertex2f(-.9,-.5);
             glVertex2f(-.5,-.5);
             glVertex2f(-.5,-.0);
              glEnd();

              //school door1 (top to bottom) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.85,-.2);
             glVertex2f(-.85,-.5);
             glVertex2f(-.75,-.5);
             glVertex2f(-.75,-.2);
              glEnd();


              //school door2(left to right) right side

               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.7,-.2);
             glVertex2f(-.7,-.33);
             glVertex2f(-.56,-.33);
             glVertex2f(-.56,-.2);
              glEnd();


              //school door2(left to right) right side
              //under it 2 lines draw

               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(-.7,-.265);
             glVertex2f(-.56,-.265);//end line(right to left  )

            glVertex2f(-.635,-.2);
             glVertex2f(-.635,-.33);//end line(top to bottom )
              glEnd();

    //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(-.7,.5);
             glVertex2f(-.9,.3);
             glVertex2f(-.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(-.85,.3);
             glVertex2f(-.85,.0);
             glVertex2f(-.55,.0);
             glVertex2f(-.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.75,.22);
             glVertex2f(-.75,.1);
             glVertex2f(-.64,.1);
             glVertex2f(-.64,.22);
              glEnd();

    //road light1
              //road light lower part1
              glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.4,-.1);
             glVertex2f(-.4,-.5);
             glVertex2f(-.38,-.5);
             glVertex2f(-.38,-.1);
              glEnd();

              //road light upper part1
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(-.42,-.0);
             glVertex2f(-.42,-.1);
             glVertex2f(-.36,-.1);
             glVertex2f(-.36,-.0);
              glEnd();//end road light1

               //road light2
                //road light lower part2
              glBegin(GL_QUADS);
              glColor3ub(0,0, 0);
              glVertex2f(.48,-.1);
             glVertex2f(.48,-.5);
             glVertex2f(.46,-.5);
             glVertex2f(.46,-.1);
              glEnd();

              //road light upper part2
              glBegin(GL_QUADS);
              glColor3ub(255, 153, 0);
              glVertex2f(.50,-.0);
             glVertex2f(.50,-.1);
             glVertex2f(.44,-.1);
             glVertex2f(.44,-.0);
              glEnd();//end road light




 //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();

              //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

              //watch hour minutes sec

   //bulding door1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(-.18,-.1);
              glVertex2f(-.18,-.4);
             glVertex2f(-.12,-.4);
             glVertex2f(-.12,-.1);

              glEnd();


              //door1 window1

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.12);
               glVertex2f(-.18,.03);
             glVertex2f(-.12,.03);
             glVertex2f(-.12,.12);

              glEnd();

               //door1 window2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);

              glVertex2f(-.18,.27);
               glVertex2f(-.18,.18);
             glVertex2f(-.12,.18);
             glVertex2f(-.12,.27);

              glEnd();

              //bulding door2

              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,-.1);
              glVertex2f(.28,-.4);
             glVertex2f(.22,-.4);
             glVertex2f(.22,-.1);

              glEnd();

              //door2 window1
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.12);
              glVertex2f(.28,.03);
             glVertex2f(.22,.03);
             glVertex2f(.22,.12);

              glEnd();


              //door2 window2
              glBegin(GL_QUADS);
              glColor3ub(51, 51, 153);
              glVertex2f(.28,.27);
              glVertex2f(.28,.18);
             glVertex2f(.22,.18);
             glVertex2f(.22,.27);

              glEnd();


              //bulding left side
            //school base 2
                 glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(.9,.0);
             glVertex2f(.9,-.5);
             glVertex2f(.5,-.5);
             glVertex2f(.5,.0);
              glEnd();

              //school door1 left side

               glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.8,-.2);
             glVertex2f(.8,-.5);
             glVertex2f(.6,-.5);
             glVertex2f(.6,-.2);
              glEnd();

              //door inside line
              glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.75,-.2);
             glVertex2f(.75,-.5);
             glVertex2f(.7,-.2);
             glVertex2f(.7,-.5);
             glVertex2f(.65,-.2);
             glVertex2f(.65,-.5);
              glEnd();

              //bottom base end


                 //left side upper house
                //chal1
            glBegin(GL_TRIANGLES);
              glColor3f(1,0.54,0.21);
              glVertex2f(.7,.5);
             glVertex2f(.9,.3);
             glVertex2f(.5,.3);
              glEnd();


                //base2
              glBegin(GL_QUADS);
              glColor3ub(107, 107, 71);
              glVertex2f(.85,.3);
             glVertex2f(.85,.0);
             glVertex2f(.55,.0);
             glVertex2f(.55,.3);
              glEnd();


                //door2
             glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(.75,.22);
             glVertex2f(.75,.1);
             glVertex2f(.64,.1);
             glVertex2f(.64,.22);
              glEnd();
    //larger bulding


              //bulding school upper title box
                 glBegin(GL_QUADS);
              glColor3ub(255, 102, 0);
              glVertex2f(-.18,.4);
              glVertex2f(-.18,.3);
             glVertex2f(.28,.3);
             glVertex2f(.28,.4);

              glEnd();

              // base

               glBegin(GL_QUADS);
              glColor3ub(153, 51, 51);
              glVertex2f(-.28,.3);
              glVertex2f(-.28,-.5);
             glVertex2f(.38,-.5);
             glVertex2f(.38,.3);

              glEnd();

              //bulding door
               glBegin(GL_QUADS);
              glColor3ub(255, 80, 80);
              glVertex2f(-.07,.0);
              glVertex2f(-.07,-.5);
             glVertex2f(.17,-.5);
             glVertex2f(.17,.0);

              glEnd();


               //bulding door midpoint line
               glBegin(GL_LINES);
              glColor3ub(255, 255, 255);
              glVertex2f(.05,.0);
              glVertex2f(.05,-.5);

              glEnd();





     //watch outer side

                glBegin(GL_QUADS);
              glColor3f(1,0,.97);

              glVertex2f(-.06,.27);
              glVertex2f(-.06,.03);
               glVertex2f(.155,.03);
             glVertex2f(.155,.27);

              glEnd();
              //watch inner side
               glBegin(GL_QUADS);
              glColor3f(1,1,1);

              glVertex2f(-.054,.26);
              glVertex2f(-.054,.04);
               glVertex2f(.151,.04);
             glVertex2f(.151,.26);

              glEnd();

	glPushMatrix();

	//glTranslatef(0.05, .15f, 1);
	glTranslatef(0.05, 0.15f, 1);

	glRotatef(s,0.0,0.0,2.0);

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.08f);

	glEnd();

	glPopMatrix();

	s-=0.5f;

	glLoadIdentity();

	//Drawing Minute
	glPushMatrix();

	glTranslatef(0.05, 0.15f, 1);

	glRotatef(m,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.06f);

	glEnd();

	glPopMatrix();

	m-=0.07f;

	glLoadIdentity();

	//Drawing Hour
	glPushMatrix();

	glTranslatef(.05,.15f, 1);

	glRotatef(h,0.0,0.0,1.0);

	glBegin(GL_LINES);

	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.04f);

	glEnd();

	glPopMatrix();

	h-=0.01f;
//circle of sun
	int v;

	GLfloat x=.6f; GLfloat y=.7f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(255, 255,204);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(v = 0; v <= triangleAmount;v++) {
			glVertex2f(
		            x + (radius * cos(v *  twicePi / triangleAmount)),
			    y + (radius * sin(v * twicePi / triangleAmount))
			);
		}
	glEnd();



	//Drawing cloud 1

     glPushMatrix();

   glTranslatef(position1,0,0);


  // GLfloat x=0.13f;  GLfloat y=0.32f; GLfloat radius =.03f;

    //int triangleAmount = 20;
     twicePi = 2.0f * PI;

     x=.42f;   y=.85f;    radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);
	int i;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=.46f; y=.87f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=.5f; y=.85f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glPopMatrix();




	//cloud 2
    glPushMatrix();

   glTranslatef(position,0,0);


  // GLfloat x=0.13f;  GLfloat y=0.32f; GLfloat radius =.03f;

    //int triangleAmount = 20;
     twicePi = 2.0f * PI;

     x=-.42f;   y=.85f;    radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.46f; y=.87f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for( int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=-.5f; y=.85f; radius =.05f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3f(1,1,1);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

   glPopMatrix();



   // flag bangladesh
               //side quads
                glBegin(GL_QUADS);
              glColor3ub(153, 51, 0);
              glVertex2f(-.001,.7);
              glVertex2f(-.001,.4);
             glVertex2f(.01,.4);
             glVertex2f(.01,.7);
             glEnd();


             //stick  er khuti
                glBegin(GL_QUADS);
              glColor3ub(1, 1, 1);
              glVertex2f(-.01,.5);
              glVertex2f(-.01,.4);
             glVertex2f(.02,.4);
             glVertex2f(.02,.5);
             glEnd();

             //base green
             glBegin(GL_QUADS);
              glColor3ub(0, 128, 0);
              glVertex2f(.12,.67);
             glVertex2f(.12,.55);
             glVertex2f(.009,.55);
             glVertex2f(.009,.67);
             glEnd();

 //circul in flag


             x=.06f; y=.61f; radius =.03f;
    triangleAmount = 20;

	twicePi = 2.0f * PI;
	glColor3ub(255,0,0);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glutTimerFunc(3000,night_demo,0);
//glutTimerFunc(3000,night_demo1,0);

//  init1();
   glFlush();
}

//sound
//watch
 void sound()
{
    PlaySound("momo.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
//jonaki
void sound2()
{
   PlaySound("b.wav" ,NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
//air
void sound3()
{
        PlaySound("c.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}



/*void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':


   glutDisplayFunc(day);
   glutPostRedisplay();
    sound();

    break;
case 'n':
   glutDisplayFunc(night);
glutPostRedisplay();
 sound();
 sound2();
    break;

    case 'e':
   glutDisplayFunc(evening);
glutPostRedisplay();
sound();
sound3();
    break;


	}
}*/


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("My Village");
	glutInitWindowSize(920, 920);
	glutDisplayFunc(evening);
	 init();
	//init1();
	//glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
	glutIdleFunc(Idle);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutMainLoop();
	return 0;
}
