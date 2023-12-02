#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
int x,y,x1,y1,x2,y2,dy,dx,pk,step;
void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
  //gluOrtho2D(0.0,100.0,0.0,100.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,1, 1);
   dy=abs(y2-y1);
    dx=abs(x2-x1);
    if(dy>dx) step=dy;
    else step=dx;
    pk=2*dy-dx;
    x=x1;y=y1;
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    for(int i=0;i<step;i++){

        if(pk<0){
            x=x+1;
            pk=pk+(2*dy);
            glVertex2i(x,y);
        }
        else{
            x=x+1;
            y=y+1;
            pk=pk+(2*dy)-(2*dx);
            glVertex2i(x,y);
        }

    }

   glEnd();



// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){

    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Second Lab");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}