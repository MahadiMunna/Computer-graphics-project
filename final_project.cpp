#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
#define PI 3.1416

int i;
GLfloat ax = 0, bx = 0, cx = 0, p = 300, q = 50;

void init(void)
{
    glClearColor(0.0, 0.0, 0.2, 0.9);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}

void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}

void moon() {
    glColor3f(1, 0.97, 0.66);
    glPushMatrix();
    glTranslatef(750,400,0);
    circle(30);
    glPopMatrix();
    glColor4f(0.0, 0.0, 0.2, 0.9);
    glPushMatrix();
    glTranslatef(755,407,0);
    circle(30);
    glPopMatrix();
}

void cloud_model_one() {

    glColor3f(1.25, 0.924, 0.930);
    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310, 204, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305, 204, 0);
    circle(10);
    glPopMatrix();

}

void cloud_model_Two() {
    glColor3f(1.25, 0.924, 0.930);

    glPushMatrix();
    glTranslatef(305, 205, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(334, 207, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320, 207, 0);
    circle(10);
    glPopMatrix();
}

void forest_One_Model() {
    glBegin(GL_POLYGON);
    glColor3f(0.02, 0.56, 0.16);
    glVertex2i(125, 70);
    glVertex2i(150, 80);
    glVertex2i(160, 90);
    glVertex2i(170, 90);
    glVertex2i(180, 100);
    glVertex2i(190, 105);
    glVertex2i(200, 108);
    glVertex2i(300, 110);
    glVertex2i(300, 70);

    glEnd();

}

void forest_Two_Model() {

    glColor3f(0.02, 0.56, 0.16);
    glPushMatrix();
    glTranslatef(430, 90, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420, 87, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390, 70, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(445, 80, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455, 75, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465, 70, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470, 65, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480, 60, 0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485, 55, 0);
    circle(20);
    glPopMatrix();
}


void house() {
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.13, 0);
    glVertex2i(285, 105);
    glVertex2i(300, 130);
    glVertex2i(365, 130);
    glVertex2i(380, 105);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.555, 1.0, 1.0);
    glVertex2i(290, 70);
    glVertex2i(290, 104);
    glVertex2i(375, 104);
    glVertex2i(375, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
    glVertex2i(330, 70);
    glVertex2i(330, 100);
    glVertex2i(350, 100);
    glVertex2i(350, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2i(295, 75);
    glVertex2i(295, 90);
    glVertex2i(310, 90);
    glVertex2i(310, 75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2i(312, 75);
    glVertex2i(312, 90);
    glVertex2i(327, 90);
    glVertex2i(327, 75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2i(355, 75);
    glVertex2i(355, 90);
    glVertex2i(370, 90);
    glVertex2i(370, 75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.42, 0.09, 0);
    glVertex2i(250, 90);
    glVertex2i(257, 104);
    glVertex2i(290, 104);
    glVertex2i(290, 90);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.555, .724, .930);
    glVertex2i(255, 70);
    glVertex2i(255, 90);
    glVertex2i(290, 90);
    glVertex2i(290, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
    glVertex2i(260, 70);
    glVertex2i(260, 80);
    glVertex2i(285, 80);
    glVertex2i(285, 70);
    glEnd();
}

void field() {
    glBegin(GL_POLYGON);
    glColor3f(0.19, 0.75, 0.03);
    glVertex2i(0, 30);
    glVertex2i(0, 70);
    glVertex2i(1000, 70);
    glVertex2i(1000, 30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.37, 1);
    glVertex2i(0, 0);
    glVertex2i(0, 30);
    glVertex2i(1000, 30);
    glVertex2i(1000, 0);
    glEnd();
}

void Boat() {
    // if(p<=1000){
    //   p = p + 0.009;
    // }
    // else {
    //   p = -50;
    // }
    // glutPostRedisplay();
    
    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2i(p, q);
    glVertex2i(p+40, q-30);
    glVertex2i(p+40, q-15);
    glEnd();

    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2i(p+40, q-30);
    glVertex2i(p+100, q-30);
    glVertex2i(p+100, q-15);
    glVertex2i(p+40, q-15);
    glEnd();

    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2i(p+100, q-15);
    glVertex2i(p+100, q-30);
    glVertex2i(p+140, q);
    glEnd();

    glColor3f(0.37, 0.01, 0.09);
    glBegin(GL_POLYGON);
    glVertex2i(p+40, q-15);
    glVertex2i(p+100, q-15);
    glVertex2i(p+90, q-5);
    glVertex2i(p+50, q-5);
    glEnd();
}


void Tree_Model_One() {
    glPushMatrix();
    glTranslatef(110, 110, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110, 100, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100, 100, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(120, 100, 0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(109, 70);
    glVertex2f(109, 90);
    glVertex2f(111, 90);
    glVertex2f(111, 70);

    glEnd();
}
void Tree_Model_Two() {
    glPushMatrix();
    glTranslatef(130, 130, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125, 126, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135, 126, 0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130, 125, 0);
    circle(5);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(129, 110);
    glVertex2f(129, 124);
    glVertex2f(131, 124);
    glVertex2f(131, 110);

    glEnd();
}

void Tree_Model_Three() {
    glBegin(GL_POLYGON);

    glVertex2f(125, 123);
    glVertex2f(133, 145);
    glVertex2f(141, 123);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
    glVertex2f(131, 110);
    glVertex2f(131, 124);
    glVertex2f(134, 124);
    glVertex2f(134, 110);
    glEnd();
}


void cloud_one() {
    glPushMatrix();
    glTranslatef(bx + 100, 150, 0);
    cloud_model_one();
    glPopMatrix();
}

void cloud_two() {
    glPushMatrix();
    glTranslatef(cx + 300, 125, 0);
    cloud_model_Two();
    glPopMatrix();

}

void cloud_three() {
    glPushMatrix();
    glTranslatef(ax + -300, 170, 0);
    cloud_model_one();
    glPopMatrix();
}

void house_one() {
    glPushMatrix();
    glTranslatef(0, 0, 0);
    house();
    glPopMatrix();
}

void house_two() {
    glPushMatrix();
    glTranslatef(250, 0, 0);
    house();
    glPopMatrix();
}

void forest_One() {
    glPushMatrix();
    glTranslatef(0, 0, 0);
    forest_One_Model();
    glPopMatrix();
}

void forest_Two() {
    glPushMatrix();
    glTranslatef(0, 0, 0);
    forest_Two_Model();
    glPopMatrix();
}

void Tree_One() {
    glColor3f(0.11, 0.47, 0.01);
    glTranslatef(0, 0, 0);
    Tree_Model_One();
}

void Tree_Two() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(540, 0, 0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_Three() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(750, 0, 0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_Four() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(292, 40, 0);
    Tree_Model_One();
    glPopMatrix();
}

void Tree_Five() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(30, -20, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Six() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(50, -10, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Seven() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(322, 0, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Eight() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(350, -15, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Nine() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(90, -2, 0);
    Tree_Model_Three();
    glPopMatrix();
}

void Tree_Ten() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(125, 0, 0);
    Tree_Model_Three();
    glPopMatrix();
}

void Tree_Eleven() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(770, -40, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void Tree_Twelve() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(670, -40, 0);
    Tree_Model_Three();
    glPopMatrix();
}

void Tree_Thirteen() {
    glColor3f(0.11, 0.47, 0.01);
    glPushMatrix();
    glTranslatef(650, -40, 0);
    Tree_Model_Two();
    glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);

    forest_One();
    forest_Two();
    house_one();
    house_two();

    Tree_One();
    Tree_Two();
    Tree_Three();
    Tree_Four();
    Tree_Five();
    Tree_Six();
    Tree_Seven();
    Tree_Eight();
    Tree_Nine();
    Tree_Ten();
    Tree_Eleven();
    Tree_Twelve();
    Tree_Thirteen();

    moon();
    cloud_one();
    cloud_two();
    cloud_three();

    field();
    Boat();
    glFlush();
}

void controls(int key, int x, int y) {
    switch (key) {

        case GLUT_KEY_RIGHT:
            p = p + 1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_LEFT:
            p = p - 1;
            glutPostRedisplay();
            break;
        default:
            break;
    }
            
}

void animation() {
    ax = ax + .03;
    bx = bx + .02;
    cx = cx + .05;

    if (ax > 1000) {
        ax = -300;
    }
    if (bx > 1000) {
        bx = -100;
    }
    if (cx > 1000) {
        cx = -300;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(150, 50);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("Final Project");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(animation);
    glutSpecialFunc(controls);
    glutMainLoop();
}