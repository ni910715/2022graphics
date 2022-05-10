#include <GL/glut.h>
float angle=0;
void display()

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色
    glutSolidTeapot(0.3);///茶壺當身體
    glPushMatrix();///備份矩陣
        glTranslatef(0.2,0,0);///(3)掛到右邊
        glRotatef(angle,0,0,1);///(2)旋轉
        glTranslatef(0.2,0,0);///(1)旋轉中心
        glColor3f(1,0,0);///紅色
        glutSolidTeapot(0.2);///上手臂
        glPushMatrix();
            glTranslatef(0.2,0,0);///(3)掛到右邊
            glRotatef(angle,0,0,1);///(2)旋轉
            glTranslatef(0.2,0,0);///(1)旋轉中心
            glColor3f(1,0,0);///紅色
            glutSolidTeapot(0.2);/// 下手臂
        glPopMatrix();///還原矩陣
    glPopMatrix();///還原矩陣

    glPushMatrix();///備份矩陣
        glTranslatef(-0.2,0,0);///(3)掛到右邊
        glRotatef(-angle,0,0,1);///(2)旋轉
        glTranslatef(-0.2,0,0);///(1)旋轉中心
        glColor3f(1,0,0);///紅色
        glutSolidTeapot(0.2);///上手臂
        glPushMatrix();
            glTranslatef(-0.2,0,0);///(3)掛到右邊
            glRotatef(-angle,0,0,1);///(2)旋轉
            glTranslatef(-0.2,0,0);///(1)旋轉中心
            glColor3f(1,0,0);///紅色
            glutSolidTeapot(0.2);/// 下手臂
        glPopMatrix();///還原矩陣
    glPopMatrix();///還原矩陣
    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc, char *argv[])
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week12_TRT_TRT");

    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
}
