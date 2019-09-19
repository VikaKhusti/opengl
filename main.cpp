#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display ( void )
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
//------------points-------
glBegin (GL_POINTS);

glColor3f(0.8, 0.5, 0.0 );
glVertex3f(0.0, 0.0, 0.0); //orange point in center of the window

GLfloat y = 0.98;

for(int i=0; i < 100; i++)
{
 glColor3f(0.8, 0.5, 0.0 ); //drawing a line from points
 glVertex3f(0.98, y, 0.0);
 y -= 0.02;
}

glEnd ();
//------------lines-------
//glPointSize(5); dont work for lines
glLineWidth(5.0);
glBegin(GL_LINES);
glColor3f(0.8, 0.5, 0.0 );
glVertex3f(-0.98, 0.98, 0.0);
glColor3f(0.8, 0.5, 0.0 );
glVertex3f(-0.98, -0.98, 0.0);

glColor3f(0.8, 0.5, 0.0 );
glVertex3f(-0.98, -0.98, 0.0);
glColor3f(0.8, 0.5, 0.0 );
glVertex3f(0.98, -0.98, 0.0);

glColor3f(0.8, 0.5, 0.0 );
glVertex3f(-0.98, 0.98, 0.0);
glColor3f(0.8, 0.5, 0.0 );
glVertex3f(0.98, 0.98, 0.0);

glEnd();

//------------triangle-----
glBegin(GL_TRIANGLES);
glColor3f(0.5, 0.5, 0.0 );
glVertex3f(-0.8, -0.3, 0.0);
glVertex3f(-0.6, -0.8, 0.0);
glVertex3f(-0.4, -0.3, 0.0);

glColor3f(0.5, 0.5, 0.0 );
glVertex3f(-0.6, 0.8, 0.0);
glVertex3f(-0.8, 0.3, 0.0);
glVertex3f(-0.4, 0.3, 0.0);
glEnd();

//-----------quads----
glBegin(GL_QUADS);
      glColor3f (0.5, 0.3, 0.6);

      glVertex3f (0.3, 0.3, 0.0);
      glVertex3f (0.3, 0.0, 0.0);
      glVertex3f (0.0, 0.3, 0.0); //wtf???
      glVertex3f (0.0, 0.0, 0.0);

    glEnd();

glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(700,500);
glutInitWindowPosition(100,100);
glutCreateWindow("My_Window");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
