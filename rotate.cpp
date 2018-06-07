#include <GL/glut.h>

void myDisplay()
{
    glPushMatrix();
    glRotatef(45, 0, 0, 1); // 45 derece z oxuna gore rotate

    glBegin(GL_QUADS);
    glColor3d(0, 0, 1);
    // draw Rectangle
    glVertex2f(-0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);

    glEnd();
    glPopMatrix();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Rotate");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}