#include <GL/glut.h>

void myDisplay()
{
    glBegin(GL_TRIANGLES);

    // Rectangular Triangle
    glColor3d(1, 0, 0);
    glVertex2f(0, 1);
    glVertex2f(1, 0);
    glVertex2f(0, 0);

    //Beraberterefli ucbucaq
    glColor3d(0, 1, 0);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0, 0.5);

    //Muxtelifterefli ucbucaq
    glColor3d(0, 0, 1);
    glVertex2f(-0.3, -0.3);
    glVertex2f(0.8, 0.8);
    glVertex2f(0, 0.5);

    //Beraberyanli ucbucaq
    glColor3d(0, 0, 0.5);
    glVertex2f(-1, 0);
    glVertex2f(0, 0);
    glVertex2f(-0.5, 1);

    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Triangle");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}