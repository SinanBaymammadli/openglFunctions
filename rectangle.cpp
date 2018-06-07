#include <GL/glut.h>

void myDisplay()
{
    glBegin(GL_QUADS);

    glColor3d(0, 0, 1);
    //Rectangle
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);

    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Rectangle");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}