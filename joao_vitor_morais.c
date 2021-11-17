#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<math.h>

void init(void){
    // glClearColor(1,1,1,0);
    glClearColor (1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
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

void desenhaCirculo(){
    float centroX= -0.3, centroY=0.2, r=0.09;
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.6,1.0);
    for(int i = 0; i < 360; i++)
    {
        float angulo = (i * M_PI)/180.0;
        float x = centroX + (r * cos(angulo));
        float y = centroY + (r * sin(angulo));
        glVertex2f(x, y);

    }
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    for(int i = 0; i < 360; i++)
    {
        float angulo = (i * M_PI)/180.0;
        float x = centroX + (r * cos(angulo));
        float y = centroY + (r * sin(angulo));
        glVertex2f(x, y);

    }
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.3, 0.11);
    glVertex2f(-0.3, 0.29);
    glVertex2f(-0.39, 0.2);
    glVertex2f(-0.21, 0.2);
    glEnd();
}

void desenhaMacaneta(){
    float centroX= -0.25, centroY=-0.4, r=0.02;
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0,0.0);
    for(int i = 0; i < 360; i++)
    {
        float angulo = (i * M_PI)/180.0;
        float x = centroX + (r * cos(angulo));
        float y = centroY + (r * sin(angulo));
        glVertex2f(x, y);

    }
    glEnd();
}

void desenha(void){
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    desenhaTriangulo();
    desenhaParedes();
    desenhaTeto();
    desenhaJanelas();
    desenhaPorta();
    desenhaMacaneta();
    desenhaCirculo();
    glutSwapBuffers();
}

void teclado (unsigned char key, int x, int y) {
    switch (key)
    {
        case 27:             // ESCAPE key
            exit (0);
            break;
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    // glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE|  GLUT_RGBA);
    // glutInitWindowSize(640, 480);
    // glutInitWindowPosition(100, 100);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (640, 640); 
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Casinha 2d - Joao Vitor Morais");
    init();
    glutDisplayFunc(desenha);
    glutKeyboardFunc(teclado);
    glutMainLoop();
    return 0;
}

