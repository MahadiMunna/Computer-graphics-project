#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
#define PI 3.1416

void init(void)
{
    glClearColor(1, 1, 1, 1); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(-50.0, 100.0, -10.0, 70.0, -1.0, 1.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (int i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}

void circle1() {
    glPushMatrix();
    glTranslatef(7, 9, 0);
    glColor3f(1,1, 0);
    circle(2);
    glColor3f(0,0, 1);
    circle(1.5);
    glPopMatrix();
}
void circle2() {
    glPushMatrix();
    glTranslatef(14, 9, 0);
    glColor3f(1,1, 0);
    circle(2);
    glColor3f(0,0, 1);
    circle(1.5);
    glPopMatrix();
}
void circle3() {
    glPushMatrix();
    glTranslatef(21, 9, 0);
    glColor3f(1,1, 0);
    circle(2);
    glColor3f(0,0, 1);
    circle(1.5);
    glPopMatrix();
}
void circle4() {
    glPushMatrix();
    glTranslatef(28, 9, 0);
    glColor3f(1,1, 0);
    circle(2);
    glColor3f(0,0, 1);
    circle(1.5);
    glPopMatrix();
}
void circle5() {
    glPushMatrix();
    glTranslatef(-18, 22, 0);
    glColor3f(0.48, 0.47, 0.43);
    circle(1.5);
    glColor3f(1,0,0);
    circle(0.5);
    glPopMatrix();
}
void cloud_model1() {
    glColor3f(0.75, 0.67, 1);

    glPushMatrix();
    glTranslatef(21, 48, 0);
    circle(3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(23, 48, 0);
    circle(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(23, 51, 0);
    circle(2.5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(26, 51, 0);
    circle(2.5);
    glPopMatrix();
}

void cloud_model2() {
    glColor3f(0.75, 0.67, 1);

    glPushMatrix();
    glTranslatef(31, 53, 0);
    circle(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(31, 52, 0);
    circle(2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(32, 53, 0);
    circle(2.5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(33, 52, 0);
    circle(2.5);
    glPopMatrix();
}
void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(0.46, 0.02, 0.55);
    glVertex2i(-25, 25);
    glVertex2i(-5, 0);
    glVertex2i(-5, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2i(-25, 25);
    glVertex2i(-5, 15);
    glVertex2i(-5, 17);
    glVertex2i(-25, 27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.46, 0.02, 0.55);
    glVertex2i(-5, 0);
    glVertex2i(-5, 15);
    glVertex2i(35, 15);
    glVertex2i(35, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2i(-5, 17);
    glVertex2i(-5, 15);
    glVertex2i(35, 15);
    glVertex2i(35, 17);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.46, 0.02, 0.55);
    glVertex2i(35, 15);
    glVertex2i(35, 0);
    glVertex2i(55, 22);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2i(55, 22);
    glVertex2i(55, 24);
    glVertex2i(35, 17);
    glVertex2i(35, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.98, 0.77, 0.11);
    glVertex2i(-5, 17);
    glVertex2i(35, 17);
    glVertex2i(32, 35);
    glVertex2i(5, 35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.46, 0.02, 0.55);
    glVertex2i(3, 35);
    glVertex2i(3, 37);
    glVertex2i(34, 37);
    glVertex2i(34, 35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(15, 37);
    glVertex2i(25, 37);
    glVertex2i(25, 41);
    glVertex2i(17, 41);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2i(17, 41);
    glVertex2i(25, 41);
    glVertex2i(25, 45);
    glVertex2i(19, 45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(-2, 23);
    glVertex2i(1, 28);
    glVertex2i(9, 28);
    glVertex2i(9, 23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(11, 23);
    glVertex2i(11, 28);
    glVertex2i(16, 28);
    glVertex2i(16, 23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(18, 23);
    glVertex2i(18, 28);
    glVertex2i(23, 28);
    glVertex2i(23, 23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(25, 23);
    glVertex2i(25, 28);
    glVertex2i(30, 28);
    glVertex2i(30, 23);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2i(32, 23);
    glVertex2i(32, 28);
    glVertex2i(33.5, 28);
    glVertex2i(34, 23);
    glEnd();

    circle1();
    circle2();
    circle3();
    circle4();
    circle5();

    glBegin(GL_POLYGON);
    glColor3f(0.48, 0.47, 0.43);
    glVertex2i(-17, 21.5);
    glVertex2i(-19, 21.5);
    glVertex2i(-19, 15);
    glVertex2i(-17, 15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.48, 0.47, 0.43);
    glVertex2i(-22, 15);
    glVertex2i(-14, 15);
    glVertex2i(-14, 17);
    glVertex2i(-22, 17);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.48, 0.47, 0.43);
    glVertex2i(-17, 15);
    glVertex2i(-19, 15);
    glVertex2i(-18, 14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.48, 0.47, 0.43);
    glVertex2i(-14, 17);
    glVertex2i(-16, 17);
    glVertex2i(-15, 18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.48, 0.47, 0.43);
    glVertex2i(-22, 17);
    glVertex2i(-20, 17);
    glVertex2i(-21, 18);
    glEnd();

    cloud_model1();
    cloud_model2();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(150, 50);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}