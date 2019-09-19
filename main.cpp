
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

void init()
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
}

void reshape(int, int);

int main (int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("My Window");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    init();


    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPointSize(10.0);

    //------- draw-------------
    glBegin(GL_POINTS);

    glVertex2d(5, 5);
    glVertex2d(-5, -5);

    glEnd();

    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-10, 10, -10, 10, 10, 10); //last 2 argument ???
    glOrtho(-5,5, -5,5, 2,12);
   // gluLookAt( 0,0,5, 0,0,0, 0,1,0 );
    glMatrixMode(GL_MODELVIEW); //default


}







