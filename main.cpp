#include <iostream>

#include "include/GL/glew/glew.h"
#include "glut.h"

#define GLEW_STATIC

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1, 0);
    glVertex2f(0, -1);
    glVertex2f(1, 0);
    glEnd();
    glutSwapBuffers();
}


int main(int argc, char **argv) {
    std::cout << "Hello, World!" << std::endl;
    glutInit(&argc, argv);
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(100, 100);
    glutCreateWindow("TEST");
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    GLenum error = glewInit();
    if (error != GLEW_OK) {
        printf("init error");
        return -1;
    }
    glutMainLoop();
    return 0;
}
