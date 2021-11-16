#include<GL/freeglut.h>
#include<math.h>

#define PI 3.1415926535

void init(){
    glClearColor(1,1,1,0);
}

void desenhaTriangulo(){
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(-0.3, 0.4);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.6, 0.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6, 0.0);
    glVertex2f(-0.3, 0.4);
    glEnd();
}

void desenhaParedes(){
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.6,0.6,0.4);
    glVertex2f(-0.6, -0.6);
    glVertex2f(-0.6, 0.0);
    glVertex2f(0.0, -0.6);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.9, -0.6);
    glVertex2f(0.9, 0.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6, -0.6);
    glVertex2f(-0.6, 0.0);
    glVertex2f(-0.6, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -0.6);
    glVertex2f(0.0, -0.6);
    glVertex2f(-0.6, -0.6);
    glVertex2f(0.0, -0.6);
    glVertex2f(0.9, -0.6);
    glVertex2f(0.9, -0.6);
    glVertex2f(0.9, 0.0);
    glEnd();
}

void desenhaTeto(){
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.3, 0.4);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.9, 0.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.3, 0.4);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.9, 0.0);
    glEnd();
}

void desenhaJanelas(){
    glBegin(GL_QUADS);
    glColor3f(0.4,0.6,1.0);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.4, -0.2);
    glVertex2f(0.4, -0.4);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.2, -0.2);
    glVertex2f(0.4, -0.2);
    glVertex2f(0.4, -0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.4,0.6,1.0);
    glVertex2f(0.6, -0.4);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.8, -0.2);
    glVertex2f(0.8, -0.4);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(0.6, -0.4);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.8, -0.2);
    glVertex2f(0.8, -0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.3, -0.2);
    glVertex2f(0.4, -0.3);
    glVertex2f(0.2, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.7, -0.2);
    glVertex2f(0.7, -0.4);
    glVertex2f(0.6, -0.3);
    glVertex2f(0.8, -0.3);
    glEnd();
}

void desenhaPorta(){
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.2, -0.6);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, -0.2);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.2, -0.6);
    glEnd();
}

void desenhaLinhas(){
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glEnd();
}

void desenha(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    desenhaTriangulo();
    desenhaParedes();
    desenhaTeto();
    desenhaJanelas();
    desenhaPorta();
    glFlush();
}

void main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE|  GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Casinha 2d - Joao Vitor Morais");
    init();
    glutDisplayFunc(desenha);
    glutMainLoop();
    return;
}

