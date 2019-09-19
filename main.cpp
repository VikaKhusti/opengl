#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display ( void )
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5);
glBegin (GL_POINTS);

glColor3f(0.8, 0.5, 0.0 );
glVertex3f(0.0, 0.0, 0.0); //orange point in center of window

glEnd ();
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
