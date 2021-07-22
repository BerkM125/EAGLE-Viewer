//PURELY DEMO FILLED FILE
//Main file for absolute freedom, all draw programming not opengl-core specifc should be done in here.
//Standard libraries
#include <GL/glew.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <thread>
//External engine dependencies
#include "figureslib.hpp"
#include "cameralib.hpp"
#include "interfacelib.hpp"
#include "shaderslib.hpp"
//CROSS-FILE VALUES: Freely change these
char VERTEXSHADERFILE[BUFSIZE] = "samplevs.vert";
char FRAGMENTSHADERFILE[BUFSIZE] = "samplefg.frag";
char WINDOWTITLE[BUFSIZE] = "EAGLE Demo";
unsigned int DISPLAYFLAGS = GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA;
unsigned int ENABLEFLAGS = GL_DEPTH_TEST;
object3d mainobj;
void glsetup (void) {
    return;
}

void bindinterface (void) {
    bindmousecontrol();
    bindarrowkeycontrol();
    bindnormalkeycontrol();
    return;
}

void eventhandler(void) {
    return;
}

void mainprocess (void) {
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    mainobj.rendermesh3d(255, 255, 255, 255, GL_TRIANGLES);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    mainobj.rendermesh3d(100, 100, 100, 255, GL_TRIANGLES);
    return;
}