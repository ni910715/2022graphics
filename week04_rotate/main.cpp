#include <GL/glut.h>

static void display(void)

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glRotated(90,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();
}
int main(int argc, char *argv[])

{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04_Rotate");
    glutDisplayFunc(display);
    glutMainLoop();
}
