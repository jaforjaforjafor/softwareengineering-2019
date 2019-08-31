#include<windows.h>
#include<glut.h>
#include<stdlib.h>
#include<math.h>



void display(void){
 static glfloat spin = 0.0;
 static float tx = 0.0;
static  float ty = 0.0;

glclear(GL_COLOR_BUFFER_BIT){
  glcolor3f(1.0, 1.0, 1.0);
  glspin(tx,ty,0);
}

 glVertexf(20.0f, 10.0f);
 glVertexf(40.0f, 10.0f);
 glVertexf(20.0f, 40.0f);
 glVertexf(40.0f, 40.0f);







}
