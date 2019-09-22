#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

float x_pos = -10.0;

void display ( void )
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
//glPointSize(5);
////------------points-------
//glBegin (GL_POINTS);
//
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(0.0, 0.0, 0.0); //orange point in center of the window
//
//GLfloat y = 0.98;
//
//for(int i=0; i < 100; i++)
//{
// glColor3f(0.8, 0.5, 0.0 ); //drawing a line from points
// glVertex3f(0.98, y, 0.0);
// y -= 0.02;
//}
//
//glEnd ();
////------------lines-------
////glPointSize(5); dont work for lines
//glLineWidth(5.0);
//glBegin(GL_LINES);
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(-0.98, 0.98, 0.0);
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(-0.98, -0.98, 0.0);
//
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(-0.98, -0.98, 0.0);
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(0.98, -0.98, 0.0);
//
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(-0.98, 0.98, 0.0);
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(0.98, 0.98, 0.0);
//
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(-0.98, 0.0, 0.0);
//glColor3f(0.8, 0.5, 0.0 );
//glVertex3f(0.98, 0.0, 0.0);
//
//glEnd();
//
////------------triangle-----
//glBegin(GL_TRIANGLES);
//glColor3f(0.5, 0.5, 0.0 );
//glVertex3f(-0.8, -0.3, 0.0);
//glVertex3f(-0.6, -0.8, 0.0);
//glVertex3f(-0.4, -0.3, 0.0);
//
//glColor3f(0.5, 0.5, 0.0 );
//glVertex3f(-0.6, 0.8, 0.0);
//glVertex3f(-0.8, 0.3, 0.0);
//glVertex3f(-0.4, 0.3, 0.0);
//glEnd();
//
////-----------quads----
//glBegin(GL_QUADS);
//      glColor3f (0.5, 0.3, 0.6);
//
//      glVertex3f (-0.2, 0.5, 0.0);
//      glVertex3f ( 0.1, 0.5, 0.0);
//      glVertex3f ( 0.1, 0.2, 0.0);
//      glVertex3f (-0.2, 0.2, 0.0);
//
//    glEnd();
//
// glColor3f(1.0, 0.0, 0.0);
//    glBegin(GL_POLYGON);
//        glVertex3f(0.2, 0.3, 0.0);
//        glVertex3f(0.4 , 0.6, 0.0);
//        glVertex3f(0.9 , 0.3, 0.0);
//        glVertex3f(0.7 , 0.6, 0.0);
//    glEnd();
//
//glLineWidth(5.0);
//glBegin(GL_LINES);
//
//    glVertex3f(0.2, -0.3, 0.0);
//    glVertex3f(0.9, -0.3, 0.0);
//
//    glVertex3f(0.2, -0.3, 0.0);
//    glVertex3f(0.4, -0.6, 0.0);
//
//    glVertex3f(0.4, -0.6, 0.0);
//    glVertex3f(0.7, -0.6, 0.0);
//
//    glVertex3f(0.7, -0.6, 0.0);
//    glVertex3f(0.9, -0.3, 0.0);
//
//    glColor3f (0.5, 0.3, 0.6);
//
//      glVertex3f (-0.2, -0.5, 0.0);
//      glVertex3f ( 0.1, -0.5, 0.0);
//
//      glVertex3f (-0.2, -0.5, 0.0);
//      glVertex3f ( 0.1, -0.2, 0.0);
//
//      glVertex3f ( 0.1, -0.5, 0.0);
//      glVertex3f (-0.2, -0.2, 0.0);
//
//      glVertex3f ( 0.1, -0.2, 0.0);
//      glVertex3f (-0.2, -0.2, 0.0);
      //glVertex3f ( 0.1, -0.2, 0.0);
      //glVertex3f ( 0.1, 0.2, 0.0);
      //glVertex3f (-0.2, 0.2, 0.0);



//glEnd();
//
//glBegin(GL_LINE_LOOP);
//        glColor3f(1.0, 1.0, 1.0);
//        glVertex2f(-0.6, 0.6);
//        glColor3f(0.0, 0.0, 1.0);
//        glVertex2f(-0.2, 1.0);
//        glColor3f(0.0, 1.0, 0.0);
//        glVertex2f(-0.4, 1.0);
//        glColor3f(1.0, 0.0, 0.0);
//        glVertex2f(0.6, 0.6);
//        glEnd();

glBegin(GL_POLYGON);
 glColor3f (0.5, 0.3, 0.6);
glVertex2f(x_pos, 1.0);
glVertex2f(x_pos, -1.0);
glVertex2f(x_pos + 2.0, -1.0);
glVertex2f(x_pos + 2.0, 1.0);
glEnd();


glutSwapBuffers();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
glutInitWindowSize(700,500);
glutInitWindowPosition(100,100);
glutCreateWindow("My_Window");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
