#include <GL/glut.h>

void myDisplay()
{
    gluLookAt(0, 0, 0,
              0, 0, 0,
              0.1, 0, 0);
    glColor3d(0, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glutWireTeapot(0.5);

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("LookAt");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}