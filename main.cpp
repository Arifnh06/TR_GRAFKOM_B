#include <stdlib.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
//NAMA KELOMPOK CENTRAL PARK JAKARTA
//ARIF NURHIDAYAT
//TAUFIQUR ROHMAN
//AYUB SUSILO WIBOWO
//GILANG BAGUS PRANTIYO
using namespace std;
float xrot = 0;
float zrot = 0;
float xdiff = 0;
float zdiff = 0;
bool mousedown = false;

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void mouseMove(int x, int y);
void mouseButton(int button, int state, int x, int y);

int is_depth;
void mouseMove(int x, int z) {
    if (mousedown) {
        zrot = x - xdiff;
        xrot = z + zdiff;

        glutPostRedisplay();
    }
}

void mouseButton(int button, int state, int x, int z) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mousedown = true;
        xdiff = x - zrot;
        zdiff = -z + xrot;
    }
    else {
        mousedown = false;
    }
    glutPostRedisplay();
}

void init(void)
{
    glClearColor(0.0, 1.0, 0.906, 0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}
void tembok(void)
{



 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
    glRotatef(xrot, 1, 0, 0);
    glRotatef(zrot, 0, 0, 1);



    glBegin(GL_POLYGON);//jendela gedung tengah1
     glColor3ub(7, 129, 140);
       glVertex3f(180, 180, 0);
       glVertex3f(180, -180, 0);
       glVertex3f(-180, -180, 0);
       glVertex3f(-180, 180, 0);
    glEnd();
    //TUTUP GEDUNG BELAKANG TENGAH SANGAT MEMBAGONGKAN
    glBegin(GL_QUADS);
     glColor3ub(161, 160, 156);
      glVertex3f(50, 28.3, 50);
       glVertex3f(50, 0, 50);
       glVertex3f(40, -10, 50);
       glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
        glVertex3f(50, 28.3, 50);
        glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
        glVertex3f(50, 28.3, 50);
       glVertex3f(50, 0, 50);
       glVertex3f(40, -10, 50);
       glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
         glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
        glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
         glVertex3f(-50, -10, 50);
          glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
         glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glEnd();
glBegin(GL_LINE_LOOP);
     glColor3ub(161, 160, 156);
      glVertex3f(50, 28.3, 50);
       glVertex3f(50, 0, 50);
       glVertex3f(40, -10, 50);
       glVertex3f(-50, -10, 50);
        glVertex3f(-60, 0, 50);
        glVertex3f(-60, 31, 50);
         glVertex3f(-20, 20, 50);
        glVertex3f(20, 20, 50);
        glEnd();
//gedung belakang

glBegin(GL_POLYGON);//dinding gedung kanan
     glColor3ub(247, 246, 237);
       glVertex3f(-59.8,32.3,0);
        glVertex3f(-59.8,32.3,50);
       glVertex3f(-60,0,50);
      glVertex3f(-60,0,0);
    glEnd();

    glBegin(GL_POLYGON);//dinding gedung kanan miring
     glColor3ub(247, 246, 237);
       glVertex3f(-50,-10,0);
        glVertex3f(-50,-10,50);
       glVertex3f(-60,0,50);
      glVertex3f(-60,0,0);
    glEnd();

     glBegin(GL_POLYGON);//dinding gedung belakang
     glColor3ub(247, 246, 237);
       glVertex3f(-50,-10,0);
        glVertex3f(-50,-10,50);
       glVertex3f(40,-10,50);
      glVertex3f(40,-10,0);
    glEnd();

     glBegin(GL_POLYGON);//dinding gedung kiri miring
     glColor3ub(247, 246, 237);
       glVertex3f(50,0,0);
        glVertex3f(50,0,50);
       glVertex3f(40,-10,50);
      glVertex3f(40,-10,0);
    glEnd();

    glBegin(GL_POLYGON);//dinding gedung kiri
     glColor3ub(247, 246, 237);
       glVertex3f(50,0,0);
        glVertex3f(50,0,50);
       glVertex3f(50.7,28.3,50);
      glVertex3f(50.7,28.3,0);
    glEnd();

 //LINE GEDUNG U
    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(60.6, 79.2, 1);
       glVertex3f(87.5, 50.3, 1);
     glVertex3f(87.5, 50.3, 1);
        glEnd();
    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(84, 108, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(111.5, 76.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(41.3, 67.2, 1);
       glVertex3f(55, 30.1, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(41.3, 67.2, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(55, 30.1, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-41.3, 67.2, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(-55, 30.1, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-41.3, 67.2, 1);
       glVertex3f(-55, 30.1, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-80, 100, 1);
       glVertex3f(-107.3, 70.7, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();
//gedung dinding U
// lantai
glBegin(GL_POLYGON);
     glColor3ub(110, 109, 109);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(60.6, 79.2, 1);
       glVertex3f(87.5, 50.3, 1);
     glVertex3f(87.5, 50.3, 1);
        glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(84, 108, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(111.5, 76.5, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(41.3, 67.2, 1);
       glVertex3f(55, 30.1, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(41.3, 67.2, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(55, 30.1, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(0, 57.9, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(0, 57.9, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(-41.3, 67.2, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(-55, 30.1, 1);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-41.3, 67.2, 1);
       glVertex3f(-55, 30.1, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(184, 184, 184);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-80, 100, 1);
       glVertex3f(-107.3, 70.7, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();
    //LINE GEDUNG U
    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(60.6, 79.2, 1);
       glVertex3f(87.5, 50.3, 1);
     glVertex3f(87.5, 50.3, 1);
        glEnd();
    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(84, 108, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(111.5, 76.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(80, 100, 1);
       glVertex3f(107.3, 70.7, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 1);
        glVertex3f(41.3, 67.2, 1);
       glVertex3f(55, 30.1, 1);
      glVertex3f(87.5, 50.3, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(41.3, 67.2, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(55, 30.1, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 1);
        glVertex3f(20, 60, 1);
       glVertex3f(20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(0, 18.5, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-41.3, 67.2, 1);
        glVertex3f(-20, 60, 1);
       glVertex3f(-20, 20, 1);
      glVertex3f(-55, 30.1, 1);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-41.3, 67.2, 1);
       glVertex3f(-55, 30.1, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 1);
        glVertex3f(-80, 100, 1);
       glVertex3f(-107.3, 70.7, 1);
      glVertex3f(-87.5, 50.3, 1);
    glEnd();
//ruftop gedung

    glBegin(GL_POLYGON);
     glColor3ub(247, 246, 237);
       glVertex3f(60.6, 79.2, 40);
        glVertex3f(60.6, 79.2, 50);
       glVertex3f(87.5, 50.3, 50);
     glVertex3f(87.5, 50.3, 40);
        glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(84, 108, 39);
        glVertex3f(80, 100, 39);
       glVertex3f(107.3, 70.7, 39);
      glVertex3f(111.5, 76.5, 39);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 39);
        glVertex3f(80, 100, 39);
       glVertex3f(107.3, 70.7, 39);
      glVertex3f(87.5, 50.3, 39);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(60.6, 79.2, 49);
        glVertex3f(41.3, 67.2, 49);
       glVertex3f(55, 30.1, 49);
      glVertex3f(87.5, 50.3, 49);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(41.3, 67.2, 49);
        glVertex3f(20, 60, 49);
       glVertex3f(20, 20, 49);
      glVertex3f(55, 30.1, 49);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 49);
        glVertex3f(20, 60, 49);
       glVertex3f(20, 20, 49);
      glVertex3f(0, 18.5, 49);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(0, 57.9, 49);
        glVertex3f(-20, 60, 49);
       glVertex3f(-20, 20, 49);
      glVertex3f(0, 18.5, 49);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(-41.3, 67.2, 49);
        glVertex3f(-20, 60, 49);
       glVertex3f(-20, 20, 49);
      glVertex3f(-55, 30.1, 49);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 49);
        glVertex3f(-41.3, 67.2, 49);
       glVertex3f(-55, 30.1, 49);
      glVertex3f(-87.5, 50.3, 49);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(212, 201, 174);
       glVertex3f(-60.6, 79.2, 49);
        glVertex3f(-80, 100, 49);
       glVertex3f(-107.3, 70.7, 49);
      glVertex3f(-87.5, 50.3, 49);
    glEnd();

    // LINE dinding
    glBegin(GL_LINE_LOOP);//dinding gedung kanan
     glColor3ub(212, 201, 174);
       glVertex3f(84,108,40);
        glVertex3f(84,108,0);
       glVertex3f(111.5,76.5,0);
      glVertex3f(111.5,76.5,40);
    glEnd();

glBegin(GL_LINE_LOOP);//gedung dinding belakang
     glColor3ub(212, 201, 174);
      glVertex3f(107.3,70.7,40);
        glVertex3f(107.3,70.7,0);
       glVertex3f(111.5,76.5,0);
      glVertex3f(111.5,76.5,40);
    glEnd();

glBegin(GL_LINE_LOOP);//gedung dinding belakang1
     glColor3ub(212, 201, 174);
      glVertex3f(107.3,70.7,40);
        glVertex3f(107.3,70.7,0);
       glVertex3f(88.1,50.8,0);
       glVertex3f(88.1,50.8,40);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang2
     glColor3ub(212, 201, 174);
      glVertex3f(88.5,50.8,50);
       glVertex3f(88.5,50.8,0);
       glVertex3f(55,30.1,0);
       glVertex3f(55,30.1,50);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang3
     glColor3ub(212, 201, 174);
       glVertex3f(55,30.1,0);
       glVertex3f(55,30.1,50);
       glVertex3f(20,20,50);
       glVertex3f(20,20,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang4
     glColor3ub(212, 201, 174);
       glVertex3f(20,20,50);
       glVertex3f(20,20,0);
       glVertex3f(0,18.5,0);
       glVertex3f(0,18.5,50);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang5
     glColor3ub(212, 201, 174);
       glVertex3f(0,18.5,0);
       glVertex3f(0,18.5,50);
       glVertex3f(-20,20,50);
       glVertex3f(-20,20,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang6
     glColor3ub(212, 201, 174);
      glVertex3f(-20,20,50);
       glVertex3f(-20,20,0);
       glVertex3f(-55,30.1,0);
       glVertex3f(-55,30.1,50);
    glEnd();

     glBegin(GL_LINE_LOOP);//gedung dinding belakang7
     glColor3ub(212, 201, 174);
      glVertex3f(-55,30.1,0);
       glVertex3f(-55,30.1,50);
       glVertex3f(-88.8,51.4,50);
       glVertex3f(-88.8,51.4,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//gedung dinding belakang8
     glColor3ub(212, 201, 174);
      glVertex3f(-88.8,51.4,50);
       glVertex3f(-88.8,51.4,0);
       glVertex3f(-107.3,70.7,0);
       glVertex3f(-107.3,70.7,50);
    glEnd();


     glBegin(GL_LINE_LOOP);//dinding kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-107.3,70.7,0);
       glVertex3f(-107.3,70.7,50);
       glVertex3f(-80,100,50);
       glVertex3f(-80,100,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 1
     glColor3ub(212, 201, 174);
      glVertex3f(84, 108, 40);
       glVertex3f(84, 108, 0);
       glVertex3f(80, 100, 0);
       glVertex3f(80, 100, 40);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 2
     glColor3ub(212, 201, 174);
      glVertex3f(60.6, 79.2, 40);
       glVertex3f(60.6, 79.2, 0);
       glVertex3f(80, 100, 0);
       glVertex3f(80, 100, 40);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 3
     glColor3ub(212, 201, 174);
      glVertex3f(60.6, 79.2, 50);
       glVertex3f(60.6, 79.2, 0);
       glVertex3f(41.3, 67.2, 0);
       glVertex3f(41.3, 67.2, 50);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 4
     glColor3ub(212, 201, 174);
      glVertex3f(20, 60, 50);
       glVertex3f(20, 60, 0);
       glVertex3f(41.3, 67.2, 0);
       glVertex3f(41.3, 67.2, 50);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 5
     glColor3ub(212, 201, 174);
      glVertex3f(20, 60, 50);
       glVertex3f(20, 60, 0);
       glVertex3f(0, 57.9, 0);
       glVertex3f(0, 57.9, 50);
    glEnd();
    glBegin(GL_LINE_LOOP);//depan 2
     glColor3ub(212, 201, 174);
      glVertex3f(-60.6, 79.2, 50);
       glVertex3f(-60.6, 79.2, 0);
       glVertex3f(-80, 100, 0);
       glVertex3f(-80, 100, 50);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 3
     glColor3ub(212, 201, 174);
      glVertex3f(-60.6, 79.2, 50);
       glVertex3f(-60.6, 79.2, 0);
       glVertex3f(-41.3, 67.2, 0);
       glVertex3f(-41.3, 67.2, 50);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 4
     glColor3ub(212, 201, 174);
      glVertex3f(-20, 60, 50);
       glVertex3f(-20, 60, 0);
       glVertex3f(-41.3, 67.2, 0);
       glVertex3f(-41.3, 67.2, 50);
    glEnd();

    glBegin(GL_LINE_LOOP);//depan 5
     glColor3ub(212, 201, 174);
      glVertex3f(-20, 60, 50);
       glVertex3f(-20, 60, 0);
       glVertex3f(0, 57.9, 0);
       glVertex3f(0, 57.9, 50);
    glEnd();
// dinding
    glBegin(GL_POLYGON);//dinding gedung kanan
     glColor3ub(247, 246, 237);
       glVertex3f(84,108,40);
        glVertex3f(84,108,0);
       glVertex3f(111.5,76.5,0);
      glVertex3f(111.5,76.5,40);
    glEnd();

glBegin(GL_POLYGON);//gedung dinding belakang
     glColor3ub(247, 246, 237);
      glVertex3f(107.3,70.7,40);
        glVertex3f(107.3,70.7,0);
       glVertex3f(111.5,76.5,0);
      glVertex3f(111.5,76.5,40);
    glEnd();

glBegin(GL_POLYGON);//gedung dinding belakang1
     glColor3ub(247, 246, 237);
      glVertex3f(107.3,70.7,40);
        glVertex3f(107.3,70.7,0);
       glVertex3f(88.1,50.8,0);
       glVertex3f(88.1,50.8,40);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang2
     glColor3ub(247, 246, 237);
      glVertex3f(88.5,50.8,50);
       glVertex3f(88.5,50.8,0);
       glVertex3f(55,30.1,0);
       glVertex3f(55,30.1,50);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang3
     glColor3ub(247, 246, 237);
       glVertex3f(55,30.1,0);
       glVertex3f(55,30.1,50);
       glVertex3f(20,20,50);
       glVertex3f(20,20,0);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang4
     glColor3ub(247, 246, 237);
       glVertex3f(20,20,50);
       glVertex3f(20,20,0);
       glVertex3f(0,18.5,0);
       glVertex3f(0,18.5,50);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang5
     glColor3ub(247, 246, 237);
       glVertex3f(0,18.5,0);
       glVertex3f(0,18.5,50);
       glVertex3f(-20,20,50);
       glVertex3f(-20,20,0);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang6
     glColor3ub(247, 246, 237);
      glVertex3f(-20,20,50);
       glVertex3f(-20,20,0);
       glVertex3f(-55,30.1,0);
       glVertex3f(-55,30.1,50);
    glEnd();

     glBegin(GL_POLYGON);//gedung dinding belakang7
     glColor3ub(247, 246, 237);
      glVertex3f(-55,30.1,0);
       glVertex3f(-55,30.1,50);
       glVertex3f(-88.8,51.4,50);
       glVertex3f(-88.8,51.4,0);
    glEnd();

    glBegin(GL_POLYGON);//gedung dinding belakang8
     glColor3ub(247, 246, 237);
      glVertex3f(-88.8,51.4,50);
       glVertex3f(-88.8,51.4,0);
       glVertex3f(-107.3,70.7,0);
       glVertex3f(-107.3,70.7,50);
    glEnd();


     glBegin(GL_POLYGON);//dinding kiri
     glColor3ub(247, 246, 237);
      glVertex3f(-107.3,70.7,0);
       glVertex3f(-107.3,70.7,50);
       glVertex3f(-80,100,50);
       glVertex3f(-80,100,0);
    glEnd();

    glBegin(GL_POLYGON);//depan 1
     glColor3ub(247, 246, 237);
      glVertex3f(84, 108, 40);
       glVertex3f(84, 108, 0);
       glVertex3f(80, 100, 0);
       glVertex3f(80, 100, 40);
    glEnd();

    glBegin(GL_POLYGON);//depan 2
     glColor3ub(247, 246, 237);
      glVertex3f(60.6, 79.2, 40);
       glVertex3f(60.6, 79.2, 0);
       glVertex3f(80, 100, 0);
       glVertex3f(80, 100, 40);
    glEnd();

    glBegin(GL_POLYGON);//depan 3
     glColor3ub(247, 246, 237);
      glVertex3f(60.6, 79.2, 50);
       glVertex3f(60.6, 79.2, 0);
       glVertex3f(41.3, 67.2, 0);
       glVertex3f(41.3, 67.2, 50);
    glEnd();

    glBegin(GL_POLYGON);//depan 4
     glColor3ub(247, 246, 237);
      glVertex3f(20, 60, 50);
       glVertex3f(20, 60, 0);
       glVertex3f(41.3, 67.2, 0);
       glVertex3f(41.3, 67.2, 50);
    glEnd();

    glBegin(GL_POLYGON);//depan 5
     glColor3ub(247, 246, 237);
      glVertex3f(20, 60, 50);
       glVertex3f(20, 60, 0);
       glVertex3f(0, 57.9, 0);
       glVertex3f(0, 57.9, 50);
    glEnd();
    glBegin(GL_POLYGON);//depan 2
     glColor3ub(247, 246, 237);
      glVertex3f(-60.6, 79.2, 50);
       glVertex3f(-60.6, 79.2, 0);
       glVertex3f(-80, 100, 0);
       glVertex3f(-80, 100, 50);
    glEnd();

    glBegin(GL_POLYGON);//depan 3
     glColor3ub(247, 246, 237);
      glVertex3f(-60.6, 79.2, 50);
       glVertex3f(-60.6, 79.2, 0);
       glVertex3f(-41.3, 67.2, 0);
       glVertex3f(-41.3, 67.2, 50);
    glEnd();

    glBegin(GL_POLYGON);//depan 4
     glColor3ub(247, 246, 237);
      glVertex3f(-20, 60, 50);
       glVertex3f(-20, 60, 0);
       glVertex3f(-41.3, 67.2, 0);
       glVertex3f(-41.3, 67.2, 50);
    glEnd();

    glBegin(GL_POLYGON);//depan 5
     glColor3ub(247, 246, 237);
      glVertex3f(-20, 60, 50);
       glVertex3f(-20, 60, 0);
       glVertex3f(0, 57.9, 0);
       glVertex3f(0, 57.9, 50);
    glEnd();
//VARIASI DEPAN
glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
      glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
        glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
        glEnd();
    glBegin(GL_QUADS);//depan 5
     glColor3ub(247, 246, 237);
      glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
        glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
         glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
      glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
        glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
       glVertex3f(-20, 55, 40);
        glVertex3f(20, 55, 40);
    glEnd();
     glBegin(GL_POLYGON);//depan 5
     glColor3ub(151, 233, 247);
      glVertex3f(20, 55, 40);
       glVertex3f(16, 70, 40);
       glVertex3f(16, 70, 30);
       glVertex3f(20, 55, 30);
    glEnd();
     glBegin(GL_POLYGON);//depan 5
     glColor3ub(151, 233, 247);
      glVertex3f(-14, 70, 40);
       glVertex3f(-14, 70, 30);
       glVertex3f(-20, 55, 30);
       glVertex3f(-20, 55, 40);
    glEnd();
     glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
      glVertex3f(-14, 70, 40);
       glVertex3f(-14, 70, 30);
       glVertex3f(-20, 55, 30);
       glVertex3f(-20, 55, 40);
    glEnd();
     glBegin(GL_LINE_LOOP);//depan 5
     glColor3ub(212, 201, 174);
      glVertex3f(20, 55, 40);
       glVertex3f(16, 70, 40);
       glVertex3f(16, 70, 30);
       glVertex3f(20, 55, 30);
    glEnd();
    glBegin(GL_QUADS);//depan 5
     glColor3ub(50, 151, 168);
      glVertex3f(16, 70, 30);
       glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
        glVertex3f(-14, 70, 30);
        glVertex3f(0, 70, 30);
        glVertex3f(16, 70, 30);
       glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
        glVertex3f(-14, 70, 30);
        glVertex3f(0, 70, 30);
         glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
      glVertex3f(16, 70, 30);
       glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
        glVertex3f(-14, 70, 30);
        glVertex3f(0, 70, 30);
        glVertex3f(16, 70, 30);
       glVertex3f(16, 70, 40);
       glVertex3f(0, 70, 40);
       glVertex3f(-14, 70, 40);
        glVertex3f(-14, 70, 30);
        glVertex3f(0, 70, 30);
        glEnd();
        //VARIASI 2
         glBegin(GL_POLYGON);//depan 5
     glColor3ub(151, 233, 247);
      glVertex3f(38, 64, 4);
       glVertex3f(30, 75, 4);
       glVertex3f(30, 75, 17);
       glVertex3f(38, 64, 17);
    glEnd();
     glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
      glVertex3f(38, 64, 4);
       glVertex3f(30, 75, 4);
       glVertex3f(30, 75, 17);
       glVertex3f(38, 64, 17);
    glEnd();
    glBegin(GL_QUADS);//depan 5
     glColor3ub(50, 151, 168);
      glVertex3f(30, 74, 17);
       glVertex3f(30, 75, 4);
       glVertex3f(-3, 70, 4);
       glVertex3f(-3, 70, 17);
        glEnd();
        glBegin(GL_QUADS);//depan 5
      glColor3ub(247, 246, 237);
     glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(38, 64, 17);
       glVertex3f(30, 75, 17);
       glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(38, 64, 17);
       glVertex3f(30, 75, 17);
        glEnd();
         glBegin(GL_QUADS);//depan 5
     glColor3ub(247, 246, 237);
     glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(38, 64, 17);
       glVertex3f(30, 75, 17);
       glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(38, 64, 17);
       glVertex3f(30, 75, 17);
        glEnd();
         glBegin(GL_POLYGON);//depan 5
     glColor3ub(151, 233, 247);
       glVertex3f(-3, 70, 4);
       glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(-3, 55, 4);
    glEnd();
    glBegin(GL_LINE_LOOP);//depan 5
      glColor3ub(212, 201, 174);
       glVertex3f(-3, 70, 4);
       glVertex3f(-3, 70, 17);
       glVertex3f(-3, 55, 17);
       glVertex3f(-3, 55, 4);
    glEnd();


//jendela tengah gedung kiri depan

     glBegin(GL_POLYGON);//jendela gedung kanan
     glColor3ub(7, 129, 140);
       glVertex3f(-59.2,65,78);
       glVertex3f(-59.2,65,52);
       glVertex3f(-68,72,52);
        glVertex3f(-68,72,78);
    glEnd();


  //skat jendela gedung kiri depan berdiri

    glBegin(GL_LINES);//kiri 1
     glColor3ub(35, 206, 222);
       glVertex3f(-61.4,66.7,78);
        glVertex3f(-61.4,66.7,52);
    glEnd();

    glBegin(GL_LINES);//kiri 2
     glColor3ub(35, 206, 222);
       glVertex3f(-63.6,68.5,78);
        glVertex3f(-63.6,68.5,52);
    glEnd();

     glBegin(GL_LINES);//kiri 3
     glColor3ub(35, 206, 222);
       glVertex3f(-65.8,70.3,78);
        glVertex3f(-65.8,70.3,52);
    glEnd();

    glBegin(GL_LINES);//tengah1a
     glColor3ub(35, 206, 222);
    glVertex3f(-71.1,74.8,78);
       glVertex3f(-71.1,74.8,52);
      glEnd();

    glBegin(GL_LINES);//tengah1b
     glColor3ub(35, 206, 222);
      glVertex3f(-75.3,78.7,52);
        glVertex3f(-75.3,78.7,78);
    glEnd();

    glBegin(GL_LINES);//tengah1c
     glColor3ub(35, 206, 222);
       glVertex3f(-79,82.8,78);
       glVertex3f(-79,82.8,52);
    glEnd();

     glBegin(GL_LINES);//kanan1a
     glColor3ub(35, 206, 222);
       glVertex3f(-81.8,86.2,78);
       glVertex3f(-81.8,86.1,52);
    glEnd();

    glBegin(GL_LINES);//kanan1b
     glColor3ub(35, 206, 222);
    glVertex3f(-85.3,90.5,52);
    glVertex3f(-85.3,90.5,78);
    glEnd();

    glBegin(GL_LINES);//kanan2a
     glColor3ub(35, 206, 222);
     glVertex3f(-87.9,94.6,78);
       glVertex3f(-87.9,94.6,52);
    glEnd();

    glBegin(GL_LINES);//kanan2b
     glColor3ub(35, 206, 222);
     glVertex3f(-93.2,103.4,52);
     glVertex3f(-93.2,103.4,78);
    glEnd();

    //skat jendela gedung kiri depan miring

    glBegin(GL_LINES);//kiri 1
     glColor3ub(35, 206, 222);
       glVertex3f(-59.2,65,76);
        glVertex3f(-68,72,76);
    glEnd();

    glBegin(GL_LINES);//kiri 2
     glColor3ub(35, 206, 222);
       glVertex3f(-59.2,65,74);
        glVertex3f(-68,72,74);
    glEnd();

     glBegin(GL_LINES);//kiri 3
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,72);
        glVertex3f(-68,72,72);
    glEnd();

    glBegin(GL_LINES);//kiri 4
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,70);
        glVertex3f(-68,72,70);
    glEnd();

    glBegin(GL_LINES);//kiri 5
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,68);
        glVertex3f(-68,72,68);
    glEnd();

    glBegin(GL_LINES);//kiri 6
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,66);
        glVertex3f(-68,72,66);
    glEnd();

    glBegin(GL_LINES);//kiri 7
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,64);
        glVertex3f(-68,72,64);
    glEnd();

    glBegin(GL_LINES);//kiri 8
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,62);
        glVertex3f(-68,72,62);
    glEnd();

    glBegin(GL_LINES);//kiri 9
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,60);
        glVertex3f(-68,72,60);
    glEnd();

    glBegin(GL_LINES);//kiri 10
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,58);
        glVertex3f(-68,72,58);
    glEnd();

    glBegin(GL_LINES);//kiri 11
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,56);
        glVertex3f(-68,72,56);
    glEnd();

    glBegin(GL_LINES);//kiri 12
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,54);
        glVertex3f(-68,72,54);
    glEnd();

    glBegin(GL_LINES);//kiri 13
     glColor3ub(35, 206, 222);
        glVertex3f(-59.2,65,52);
        glVertex3f(-68,72,52);
    glEnd();

     //skat jendela tengah1

     glBegin(GL_LINES);//tengah1 1
     glColor3ub(35, 206, 222);
       glVertex3f(-71.1,74.8,76);
        glVertex3f(-75.3,78.7,76);
    glEnd();

    glBegin(GL_LINES);//tengah1 2
     glColor3ub(35, 206, 222);
       glVertex3f(-71.1,74.8,74);
        glVertex3f(-75.3,78,74);
    glEnd();

     glBegin(GL_LINES);//tengah1 3
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,72);
        glVertex3f(-75.3,78,72);
    glEnd();

    glBegin(GL_LINES);//tengah14
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,70);
        glVertex3f(-75.3,78,70);
    glEnd();

    glBegin(GL_LINES);//tengah1 5
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,68);
        glVertex3f(-75.3,78,68);
    glEnd();

    glBegin(GL_LINES);//tengah1 6
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,66);
        glVertex3f(-75.3,78,66);
    glEnd();

    glBegin(GL_LINES);//tengah1 7
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,64);
        glVertex3f(-75.3,78,64);
    glEnd();

    glBegin(GL_LINES);//tengah1 8
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,62);
        glVertex3f(-75.3,78,62);
    glEnd();

    glBegin(GL_LINES);//tengah1 9
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,60);
        glVertex3f(-75.3,78,60);
    glEnd();

    glBegin(GL_LINES);//tengah1 10
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,58);
        glVertex3f(-75.3,78,58);
    glEnd();

    glBegin(GL_LINES);//tengah1 11
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,56);
        glVertex3f(-75.3,78,56);
    glEnd();

    glBegin(GL_LINES);//tengah1 12
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,54);
        glVertex3f(-75.3,78,54);
    glEnd();

    glBegin(GL_LINES);//tengah1 13
     glColor3ub(35, 206, 222);
        glVertex3f(-71.1,74.8,52);
        glVertex3f(-75.3,78,52);
    glEnd();

     //skat jendela tengah2

     glBegin(GL_LINES);//tengah2 1
     glColor3ub(35, 206, 222);
       glVertex3f(-79,82.8,76);
        glVertex3f(-75.3,78.7,76);
    glEnd();

    glBegin(GL_LINES);//tengah2 2
     glColor3ub(35, 206, 222);
       glVertex3f(-79,82.8,74);
        glVertex3f(-75.3,78,74);
    glEnd();

     glBegin(GL_LINES);//tengah2 3
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,72);
        glVertex3f(-75.3,78,72);
    glEnd();

    glBegin(GL_LINES);//tengah2 4
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,70);
        glVertex3f(-75.3,78,70);
    glEnd();

    glBegin(GL_LINES);//tengah2 5
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,68);
        glVertex3f(-75.3,78,68);
    glEnd();

    glBegin(GL_LINES);//tengah2 6
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,66);
        glVertex3f(-75.3,78,66);
    glEnd();

    glBegin(GL_LINES);//tengah2 7
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,64);
        glVertex3f(-75.3,78,64);
    glEnd();

    glBegin(GL_LINES);//tengah2 8
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,62);
        glVertex3f(-75.3,78,62);
    glEnd();

    glBegin(GL_LINES);//tengah2 9
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,60);
        glVertex3f(-75.3,78,60);
    glEnd();

    glBegin(GL_LINES);//tengah2 10
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,58);
        glVertex3f(-75.3,78,58);
    glEnd();

    glBegin(GL_LINES);//tengah2 11
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,56);
        glVertex3f(-75.3,78,56);
    glEnd();

    glBegin(GL_LINES);//tengah2 12
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,54);
        glVertex3f(-75.3,78,54);
    glEnd();

    glBegin(GL_LINES);//tengah2 13
     glColor3ub(35, 206, 222);
        glVertex3f(-79,82.8,52);
        glVertex3f(-75.3,78,52);
    glEnd();

     //skat jendela tengah2

     glBegin(GL_LINES);//kanan1 1
     glColor3ub(35, 206, 222);
       glVertex3f(-81.8,86.2,76);
        glVertex3f(-85.2,90.6,76);
    glEnd();

    glBegin(GL_LINES);//kanan1 2
     glColor3ub(35, 206, 222);
       glVertex3f(-81.8,86.2,74);
        glVertex3f(-85.2,90.6,74);
    glEnd();

     glBegin(GL_LINES);//kanan1 3
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,72);
        glVertex3f(-85.2,90.6,72);
    glEnd();

    glBegin(GL_LINES);//kanan1 4
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,70);
        glVertex3f(-85.2,90.6,70);
    glEnd();

    glBegin(GL_LINES);//kanan1 5
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,68);
        glVertex3f(-85.2,90.6,68);
    glEnd();

    glBegin(GL_LINES);//kanan1 6
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,66);
        glVertex3f(-85.2,90.6,66);
    glEnd();

    glBegin(GL_LINES);//kanan1 7
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,64);
        glVertex3f(-85.2,90.6,64);
    glEnd();

    glBegin(GL_LINES);//kanan1 8
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,62);
        glVertex3f(-85.2,90.6,62);
    glEnd();

    glBegin(GL_LINES);//kanan1 9
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,60);
        glVertex3f(-85.2,90.6,60);
    glEnd();

    glBegin(GL_LINES);//kanan1 10
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,58);
        glVertex3f(-85.2,90.6,58);
    glEnd();

    glBegin(GL_LINES);//kanan1 11
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,56);
        glVertex3f(-85.2,90.6,56);
    glEnd();

    glBegin(GL_LINES);//kanan1 12
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,54);
        glVertex3f(-85.2,90.6,54);
    glEnd();

    glBegin(GL_LINES);//kanan1 13
     glColor3ub(35, 206, 222);
        glVertex3f(-81.8,86.2,52);
        glVertex3f(-85.2,90.6,52);
    glEnd();

        //skat jendela tengah2

     glBegin(GL_LINES);//kanan2 1
     glColor3ub(35, 206, 222);
       glVertex3f(-87.9,94.6,76);
        glVertex3f(-93.2,103.4,76);
    glEnd();

    glBegin(GL_LINES);//kanan2 2
     glColor3ub(35, 206, 222);
       glVertex3f(-87.9,94.6,74);
        glVertex3f(-93.2,103.4,74);
    glEnd();

     glBegin(GL_LINES);//kanan2 3
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,72);
        glVertex3f(-93.2,103.4,72);
    glEnd();

    glBegin(GL_LINES);//kanan2 4
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,70);
        glVertex3f(-93.2,103.4,70);
    glEnd();

    glBegin(GL_LINES);//kanan2 5
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,68);
        glVertex3f(-93.2,103.4,68);
    glEnd();

    glBegin(GL_LINES);//kanan2 6
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,66);
        glVertex3f(-93.2,103.4,66);
    glEnd();

    glBegin(GL_LINES);//kanan2 7
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,64);
        glVertex3f(-93.2,103.4,64);
    glEnd();

    glBegin(GL_LINES);//kanan2 8
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,62);
        glVertex3f(-93.2,103.4,62);
    glEnd();

    glBegin(GL_LINES);//kanan2 9
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,60);
        glVertex3f(-93.2,103.4,60);
    glEnd();

    glBegin(GL_LINES);//kanan2 10
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,58);
        glVertex3f(-93.2,103.4,58);
    glEnd();

    glBegin(GL_LINES);//kanan2 11
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,56);
        glVertex3f(-93.2,103.4,56);
    glEnd();

    glBegin(GL_LINES);//kanan2 12
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,54);
        glVertex3f(-93.2,103.4,54);
    glEnd();

    glBegin(GL_LINES);//kanan2 13
     glColor3ub(35, 206, 222);
        glVertex3f(-87.9,94.6,52);
        glVertex3f(-93.2,103.4,52);
    glEnd();

    //skat line gedung kanan kecil

    glBegin(GL_LINES); //line 1 belakang
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,50);
        glVertex3f(-100.5,78,50);

    glEnd();

    glBegin(GL_LINES); //line 2 belakang
     glColor3ub(107, 238, 250);
        glVertex3f(-109.1,92.4,40);
        glVertex3f(-100.5,78,40);

    glEnd();

    glBegin(GL_LINES); //line 3 belakang
     glColor3ub(107, 238, 250);
        glVertex3f(-109.1,92.4,30);
        glVertex3f(-100.5,78,30);

    glEnd();

    glBegin(GL_LINES); //line 4 belakang
     glColor3ub(107, 238, 250);
        glVertex3f(-109.1,92.4,20);
        glVertex3f(-100.5,78,20);

    glEnd();

    glBegin(GL_LINES); //line 5 belakang
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,10);
        glVertex3f(-100.5,78,10);
    glEnd();

    glBegin(GL_LINES); //line 6 belakang
     glColor3ub(107, 238, 250);
        glVertex3f(-109.1,92.4,0);
        glVertex3f(-100.5,78,0);

         glEnd();

     glBegin(GL_LINES); //line 1 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,80);
        glVertex3f(-94,105.1,80);

    glEnd();

    glBegin(GL_LINES); //line 2 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,70);
        glVertex3f(-94,105.1,70);

    glEnd();

    glBegin(GL_LINES); //line 3 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,60);
        glVertex3f(-94,105.1,60);

    glEnd();

    glBegin(GL_LINES); //line 4 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,50);
        glVertex3f(-94,105.1,50);

    glEnd();

    glBegin(GL_LINES); //line 5 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,40);
        glVertex3f(-94,105.1,40);

    glEnd();

    glBegin(GL_LINES); //line 6 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,30);
        glVertex3f(-94,105.1,30);

    glEnd();

    glBegin(GL_LINES); //line 7 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,20);
        glVertex3f(-94,105.1,20);

    glEnd();

    glBegin(GL_LINES); //line 8 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,10);
        glVertex3f(-94,105.1,10);

    glEnd();

    glBegin(GL_LINES); //line 9 kanan
     glColor3ub(107, 238, 250);
      glVertex3f(-109.1,92.4,0);
        glVertex3f(-94,105.1,0);

    glEnd();

     glBegin(GL_LINES); //line 1 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,50);
        glVertex3f(-94,105.1,50);

    glEnd();

     glBegin(GL_LINES); //line 2 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,40);
        glVertex3f(-94,105.1,40);

    glEnd();

     glBegin(GL_LINES); //line 3 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,30);
        glVertex3f(-94,105.1,30);

    glEnd();

     glBegin(GL_LINES); //line 4 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,20);
        glVertex3f(-94,105.1,20);

    glEnd();

     glBegin(GL_LINES); //line 5 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,10);
        glVertex3f(-94,105.1,10);

    glEnd();

     glBegin(GL_LINES); //line 6 depan
     glColor3ub(107, 238, 250);
      glVertex3f(-86.8,92.7,0);
        glVertex3f(-94,105.1,0);

    glEnd();

 //jendela gedung depan

     glBegin(GL_POLYGON);//jendela gedung tengah1
     glColor3ub(7, 129, 140);
       glVertex3f(-71.1,74.8,78);
       glVertex3f(-71.1,74.8,52);
       glVertex3f(-75.3,78.7,52);
        glVertex3f(-75.3,78.7,78);
    glEnd();

     glBegin(GL_POLYGON);//jendela gedung tengah2
     glColor3ub(7, 129, 140);
       glVertex3f(-79,82.8,78);
       glVertex3f(-79,82.8,52);
       glVertex3f(-75.3,78.7,52);
        glVertex3f(-75.3,78.7,78);
    glEnd();

    glBegin(GL_POLYGON);//jendela gedung kanan1
     glColor3ub(7, 129, 140);
       glVertex3f(-81.8,86.2,78);
       glVertex3f(-81.8,86.1,52);
       glVertex3f(-85.3,90.5,52);
        glVertex3f(-85.3,90.5,78);
    glEnd();

    glBegin(GL_POLYGON);//jendela gedung kanan2
     glColor3ub(7, 129, 140);
       glVertex3f(-87.9,94.6,78);
       glVertex3f(-87.9,94.6,52);
       glVertex3f(-93.2,103.4,52);
        glVertex3f(-93.2,103.4,78);
    glEnd();

    glBegin(GL_POLYGON);//jendela gedung kanan
     glColor3ub(7, 129, 140);
       glVertex3f(-59.2,65,78);
       glVertex3f(-59.2,65,52);
       glVertex3f(-68,72,52);
        glVertex3f(-68,72,78);
    glEnd();

    //gedung tinggi kiri depan

    glBegin(GL_POLYGON);//depan pendek kiri
     glColor3ub(35, 206, 222);
       glVertex3f(-58,64,80);
       glVertex3f(-58,64,50);
       glVertex3f(-69.7,73.4,50);
      glVertex3f(-69.7,73.4,80);
    glEnd();

    glBegin(GL_POLYGON);//depan tengah pendek
     glColor3ub(35, 206, 222);
       glVertex3f(-69.7,73.4,50);
      glVertex3f(-69.7,73.4,80);
       glVertex3f(-86.8,92.7,80);
       glVertex3f(-86.8,92.7,50);
    glEnd();

     glBegin(GL_POLYGON);//depan panjang kanan
     glColor3ub(35, 206, 222);
       glVertex3f(-94.2,105.4,0);
       glVertex3f(-94.2,105.4,80);
       glVertex3f(-86.8,92.7,80);
       glVertex3f(-86.8,92.7,0);
    glEnd();

    glBegin(GL_POLYGON);//samping kiri
     glColor3ub(35, 206, 222);
        glVertex3f(-94.2,105.4,0);
       glVertex3f(-94.2,105.4,80);
       glVertex3f(-109.1,92.4,80);
       glVertex3f(-109.1,92.4,0);
    glEnd();

    glBegin(GL_POLYGON);//belakang panjang kanan
     glColor3ub(35, 206, 222);
      glVertex3f(-109.1,92.4,80);
       glVertex3f(-109.1,92.4,0);
       glVertex3f(-100.5,78,0);
       glVertex3f(-100.5,78,80);
    glEnd();

     glBegin(GL_POLYGON);//belakang pendek tengah
     glColor3ub(35, 206, 222);
       glVertex3f(-100.5,78,50);
      glVertex3f(-100.5,78,80);
       glVertex3f(-82.4,57.8,80);
       glVertex3f(-82.4,57.8,50);
    glEnd();

    glBegin(GL_POLYGON);//belakang pendek tengah
     glColor3ub(35, 206, 222);
       glVertex3f(-70,48,50);
      glVertex3f(-70,48,80);
       glVertex3f(-82.4,57.8,80);
       glVertex3f(-82.4,57.8,50);
    glEnd();

      glBegin(GL_POLYGON);//samping pendek kanan
     glColor3ub(35, 206, 222);
       glVertex3f(-70,48,80);
       glVertex3f(-58,64,80);
       glVertex3f(-58,64,50);
      glVertex3f(-70,48,50);
    glEnd();

    glBegin(GL_POLYGON);//atap1
     glColor3ub(35, 206, 222);
       glVertex3f(-58,64,80);
      glVertex3f(-69.7,73.4,80);
       glVertex3f(-82.4,57.8,80);
       glVertex3f(-70,48,80);
    glEnd();

    glBegin(GL_POLYGON);//atap2
     glColor3ub(35, 206, 222);
       glVertex3f(-69.7,73.4,80);
      glVertex3f(-82.4,57.8,80);
       glVertex3f(-100.5,78,80);
       glVertex3f(-86.8,92.7,80);
    glEnd();

    glBegin(GL_POLYGON);//atap3
     glColor3ub(35, 206, 222);
       glVertex3f(-100.5,78,80);
       glVertex3f(-86.8,92.7,80);
       glVertex3f(-94.2,105.4,80);
       glVertex3f(-109.1,92.4,80);
    glEnd();


    //gedung kanan bulat


    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(100.9,124.4,0);
        glVertex3f(108.8,116.4,46);
       glVertex3f(100.5,113.9,50);
       glVertex3f(96.1,122.9,0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(85.6,109.9,0);
        glVertex3f(96.6,108.8,54);
       glVertex3f(100.5,113.9,50);
       glVertex3f(96.1,122.9,0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(85.6,109.9,0);
        glVertex3f(96.6,108.8,54);
       glVertex3f(96.9,102.8,58);
       glVertex3f(87.1,96.1,0);
    glEnd();

      glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(96.1,87.1,0);
        glVertex3f(101.9,98.1,62);
       glVertex3f(96.9,102.8,58);
       glVertex3f(87.1,96.1,0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(96.1,87.1,0);
        glVertex3f(101.9,98.1,62);
       glVertex3f(107.2,98.5,66);
       glVertex3f(111.3,86,0);
    glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(122.9,96.1,0);
        glVertex3f(110.4,102.3,70);
       glVertex3f(107.2,98.5,66);
       glVertex3f(111.3,86,0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(212, 201, 174);
       glVertex3f(122.9,96.1,0);
        glVertex3f(110.4,102.3,70);
       glVertex3f(109.2,109.2,74);
       glVertex3f(124,111.3,0);
    glEnd();

    glBegin(GL_POLYGON); //tutup atas gedung bulat
     glColor3ub(97, 94, 82);
       glVertex3f(108.8,116.4,40);
        glVertex3f(99.6,115.7,40);
       glVertex3f(93.8,109.1,40);
       glVertex3f(93.9,100.7,40);
       glVertex3f(99.8,94.2,40);
    glEnd();

    glBegin(GL_POLYGON); //tutup atas gedung bulat
     glColor3ub(97, 94, 82);
       glVertex3f(99.8,94.2,40);
        glVertex3f(99.6,115.7,40);
       glVertex3f(108.8,93.6,40);
       glVertex3f(115.7,99.6,40);
       glVertex3f(115.6,110.1,40);
    glEnd();

     glBegin(GL_POLYGON); //tutup atas gedung bulat
     glColor3ub(97, 94, 82);
       glVertex3f(115.6,110.1,40);
        glVertex3f(108.8,116.4,40);
       glVertex3f(99.6,115.7,40);
    glEnd();

    glBegin(GL_POLYGON); //tutup atas gedung bulat
     glColor3ub(97, 94, 82);
        glVertex3f(115.6,110.1,40);
       glVertex3f(108.8,116.4,40);
        glVertex3f(93.9,100.7,40);
       glVertex3f(108.8,93.6,40);
    glEnd();

     glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
       glVertex3f(108.8,116.4,46);
        glVertex3f(100.5,113.9,50);

       glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
        glVertex3f(100.5,113.9,50);
       glVertex3f(96.6,108.8,54);

       glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
         glVertex3f(96.6,108.8,54);
       glVertex3f(96.6,102.8,58);

    glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
         glVertex3f(96.6,102.8,58);
       glVertex3f(101.9,98.1,62);

       glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
          glVertex3f(101.9,98.1,62);
       glVertex3f(107.2,98.5,66);

        glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
         glVertex3f(107.2,98.5,66);
        glVertex3f(110.4,102.3,70);

        glBegin(GL_LINES); // garis atas melingkar
     glColor3ub(247, 246, 237);
          glVertex3f(110.4,102.3,70);
       glVertex3f(109.2,109.2,74);
    glEnd();

    //skat depan gedung bulat

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(116.4,110.3,35.7);
        glVertex3f(108.9,117,35.7);
     glEnd();

     glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(117.9,110.5,29.1);
        glVertex3f(109.1,118.6,29.1);
     glEnd();

     glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(118.8,110.6,24.6);
        glVertex3f(109.2,119.5,24.6);
     glEnd();

      glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(119.8,110.7,20);
        glVertex3f(109.3,120.4,20);
     glEnd();

      glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(120.8,110.9,15);
        glVertex3f(109.4,121.3,15);
     glEnd();

     glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(121.9,111,10);
        glVertex3f(109.6,122.4,10);
     glEnd();

      glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(123,111.2,04.5);
        glVertex3f(109.7,123.5,04.5);
     glEnd();

     glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(123,111.2,04.5);
        glVertex3f(109.7,123.5,04.5);
     glEnd();

     //skat depan gedung bulat 1

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(99.2,116.5,35.7);
        glVertex3f(108.9,117,35.7);
     glEnd();

     glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(98.7,117.6,29.1);
        glVertex3f(109.1,118.6,29.1);
     glEnd();

     glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(98.3,118.4,24.6);
        glVertex3f(109.2,119.5,24.6);
     glEnd();

      glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(97.9,119.2,20);
        glVertex3f(109.3,120.4,20);
     glEnd();

      glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(97.5,120,15);
        glVertex3f(109.4,121.3,15);
     glEnd();

     glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(97,120.9,10);
        glVertex3f(109.6,122.4,10);
     glEnd();

      glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(96.5,122,04.5);
        glVertex3f(109.7,123.5,04.5);
     glEnd();

     glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(123,111.2,04.5);
        glVertex3f(109.7,123.5,04.5);
     glEnd();



    //tutup depan gedung bulat
    glBegin(GL_POLYGON);
     glColor3ub(35, 206, 222);
        glVertex3f(115.6,110.1,40);
       glVertex3f(124,111.3,0);
        glVertex3f(109.9,124.4,0);
       glVertex3f(108.8,116.4,40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(35, 206, 222);
         glVertex3f(109.9,124.4,0);
       glVertex3f(108.8,116.4,40);
        glVertex3f(100,114,40);
       glVertex3f(96.1,122.9,0);
    glEnd();



    //sekat jendela belakang gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,110);
        glVertex3f(160,80,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,100);
        glVertex3f(160,80,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,90);
        glVertex3f(160,80,90);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,80);
        glVertex3f(160,80,80);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,70);
        glVertex3f(160,80,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,60);
        glVertex3f(160,80,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,50);
        glVertex3f(160,80,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,40);
        glVertex3f(160,80,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,30);
        glVertex3f(160,80,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,20);
        glVertex3f(160,80,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(130,30,10);
        glVertex3f(160,80,10);

    glEnd();

    //sekat jendela kanan gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,110);
        glVertex3f(140.5,92.9,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,100);
        glVertex3f(139.6,93.6,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,90);
        glVertex3f(138.6,94.3,89.4);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,80);
        glVertex3f(137.7,94.9,80.1);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,70);
        glVertex3f(136.7,95.5,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,60);
        glVertex3f(135.8,96.1,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,50);
        glVertex3f(134.8,96.8,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,40);
        glVertex3f(133.8,97.4,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,30);
        glVertex3f(132.9,98.1,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,20);
        glVertex3f(131.9,98.7,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,10);
        glVertex3f(131,99.4,10);

    glEnd();

      //sekat line gedung1

     glBegin(GL_LINES); //line 1 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,90);
        glVertex3f(-102,50,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,80);
        glVertex3f(-102,50,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,70);
        glVertex3f(-102,50,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,60);
        glVertex3f(-102,50,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,50);
        glVertex3f(-102,50,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,40);
        glVertex3f(-102,50,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,30);
        glVertex3f(-102,50,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,20);
        glVertex3f(-102,50,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,10);
        glVertex3f(-102,50,10);

    glEnd();

    glBegin(GL_LINES); //line 1 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,90);
        glVertex3f(-102,50,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-96,56,80);
        glVertex3f(-102,50,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-96,56,70);
        glVertex3f(-102,50,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,60);
        glVertex3f(-102,50,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,50);
        glVertex3f(-102,50,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-96,56,40);
        glVertex3f(-102,50,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,30);
        glVertex3f(-102,50,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,20);
        glVertex3f(-102,50,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-96,56,10);
        glVertex3f(-102,50,10);

    glEnd();

     glBegin(GL_LINES); //line 1 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,90);
        glVertex3f(-106,66,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-96,56,80);
        glVertex3f(-106,66,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,70);
        glVertex3f(-106,66,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,60);
        glVertex3f(-106,66,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,50);
        glVertex3f(-106,66,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,40);
        glVertex3f(-106,66,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,30);
        glVertex3f(-106,66,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,20);
        glVertex3f(-106,66,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-96,56,10);
        glVertex3f(-106,66,10);

    glEnd();

         glBegin(GL_LINES); //line 1 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,90);
        glVertex3f(-106,66,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,80);
        glVertex3f(-106,66,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,70);
        glVertex3f(-106,66,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,60);
        glVertex3f(-106,66,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,50);
        glVertex3f(-106,66,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,40);
        glVertex3f(-106,66,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,30);
        glVertex3f(-106,66,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-112,60,20);
        glVertex3f(-106,66,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-112,60,10);
        glVertex3f(-106,66,10);

    glEnd();


      //sekat line gedung2

     glBegin(GL_LINES); //line 1 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,90);
        glVertex3f(-86.1,36.8,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,80);
        glVertex3f(-86.1,36.8,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,70);
        glVertex3f(-86.1,36.8,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,60);
        glVertex3f(-86.1,36.8,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,50);
        glVertex3f(-86.1,36.8,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,40);
        glVertex3f(-86.1,36.8,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,30);
        glVertex3f(-86.1,36.8,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,20);
        glVertex3f(-86.1,36.8,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,10);
        glVertex3f(-86.1,36.8,10);

    glEnd();

     glBegin(GL_LINES); //line 1 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,90);
        glVertex3f(-86.1,36.8,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,80);
        glVertex3f(-86.1,36.8,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,70);
        glVertex3f(-86.1,36.8,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,60);
        glVertex3f(-86.1,36.8,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,50);
        glVertex3f(-86.1,36.8,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,40);
        glVertex3f(-86.1,36.8,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,30);
        glVertex3f(-86.1,36.8,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,20);
        glVertex3f(-86.1,36.8,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,10);
        glVertex3f(-86.1,36.8,10);

    glEnd();

     glBegin(GL_LINES); //line 1 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,90);
        glVertex3f(-92,52,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,80);
        glVertex3f(-92,52,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,70);
        glVertex3f(-92,52,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,60);
        glVertex3f(-92,52,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,50);
        glVertex3f(-92,52,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,40);
        glVertex3f(-92,52,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,30);
        glVertex3f(-92,52,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,20);
        glVertex3f(-92,52,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-81,43.3,10);
        glVertex3f(-92,52,10);

    glEnd();

      glBegin(GL_LINES); //line 1 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,90);
        glVertex3f(-92,52,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,80);
        glVertex3f(-92,52,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,70);
        glVertex3f(-92,52,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,60);
        glVertex3f(-92,52,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,50);
        glVertex3f(-92,52,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,40);
        glVertex3f(-92,52,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,30);
        glVertex3f(-92,52,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,20);
        glVertex3f(-92,52,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-97.3,45.3,10);
        glVertex3f(-92,52,10);

    glEnd();




    //sekat line gedung3

     glBegin(GL_LINES); //line 1 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,90);
        glVertex3f(-65.8,23.8,90);

    glEnd();

    glBegin(GL_LINES); //line 2 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,80);
        glVertex3f(-65.8,23.8,80);

    glEnd();

    glBegin(GL_LINES); //line 3 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,70);
        glVertex3f(-65.8,23.8,70);

    glEnd();

    glBegin(GL_LINES); //line 4 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,60);
        glVertex3f(-65.8,23.8,60);

    glEnd();

    glBegin(GL_LINES); //line 5 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,50);
        glVertex3f(-65.8,23.8,50);

    glEnd();

    glBegin(GL_LINES); //line 6 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,40);
        glVertex3f(-65.8,23.8,40);

    glEnd();

    glBegin(GL_LINES); //line 7 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,30);
        glVertex3f(-65.8,23.8,30);

    glEnd();

    glBegin(GL_LINES); //line 8 sisi belakang
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,20);
        glVertex3f(-65.8,23.8,20);

    glEnd();

    glBegin(GL_LINES); //line 9 sisi belakang
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,10);
        glVertex3f(-65.8,23.8,10);

    glEnd();

    glBegin(GL_LINES); //line 1 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,90);
        glVertex3f(-65.8,23.8,90);

    glEnd();

    glBegin(GL_LINES); //line 2 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,80);
        glVertex3f(-65.8,23.8,80);

    glEnd();

    glBegin(GL_LINES); //line 3 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,70);
        glVertex3f(-65.8,23.8,70);

    glEnd();

    glBegin(GL_LINES); //line 4 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,60);
        glVertex3f(-65.8,23.8,60);

    glEnd();

    glBegin(GL_LINES); //line 5 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,50);
        glVertex3f(-65.8,23.8,50);

    glEnd();

    glBegin(GL_LINES); //line 6 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,40);
        glVertex3f(-65.8,23.8,40);

    glEnd();

    glBegin(GL_LINES); //line 7 sisi kanan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,30);
        glVertex3f(-65.8,23.8,30);

    glEnd();

    glBegin(GL_LINES); //line 8 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,20);
        glVertex3f(-65.8,23.8,20);

    glEnd();

    glBegin(GL_LINES); //line 9 sisi kanan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,10);
        glVertex3f(-65.8,23.8,10);

    glEnd();

    glBegin(GL_LINES); //line 1 sisi depan
   glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,90);
        glVertex3f(-74,38,90);

    glEnd();

     glBegin(GL_LINES); //line 2 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,80);
        glVertex3f(-74,38,80);

    glEnd();

     glBegin(GL_LINES); //line 3 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,70);
        glVertex3f(-74,38,70);

    glEnd();

     glBegin(GL_LINES); //line 4 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,60);
        glVertex3f(-74,38,60);

    glEnd();

     glBegin(GL_LINES); //line 5 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,50);
        glVertex3f(-74,38,50);

    glEnd();

     glBegin(GL_LINES); //line 6 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,40);
        glVertex3f(-74,38,40);

    glEnd();

     glBegin(GL_LINES); //line 7 sisi depan
    glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,30);
        glVertex3f(-74,38,30);

    glEnd();

     glBegin(GL_LINES); //line 8 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,20);
        glVertex3f(-74,38,20);

    glEnd();

     glBegin(GL_LINES); //line 9 sisi depan
     glColor3ub(212, 201, 174);
      glVertex3f(-61.7,31.2,10);
        glVertex3f(-74,38,10);

    glEnd();

     glBegin(GL_LINES); //line 1 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,90);
        glVertex3f(-74,38,90);

    glEnd();

     glBegin(GL_LINES); //line  2 sisi kiri
   glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,80);
        glVertex3f(-74,38,80);

    glEnd();

      glBegin(GL_LINES); //line 3 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,70);
        glVertex3f(-74,38,70);

    glEnd();

      glBegin(GL_LINES); //line 4 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,60);
        glVertex3f(-74,38,60);

    glEnd();

      glBegin(GL_LINES); //line 5 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,50);
        glVertex3f(-74,38,50);

    glEnd();

      glBegin(GL_LINES); //line 6 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,40);
        glVertex3f(-74,38,40);

    glEnd();

      glBegin(GL_LINES); //line 7 sisi kiri
     glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,30);
        glVertex3f(-74,38,30);

    glEnd();

      glBegin(GL_LINES); //line 8 sisi kiri
   glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,20);
        glVertex3f(-74,38,20);

    glEnd();

      glBegin(GL_LINES); //line 9 sisi kiri
    glColor3ub(212, 201, 174);
      glVertex3f(-78.1,30.6,10);
        glVertex3f(-74,38,10);

    glEnd();


    //sekat jendela depan kanan gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(120.1,86.8,110);
        glVertex3f(140.5,92.9,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(121,88,100);
        glVertex3f(139.6,93.6,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(121.9,89.2,90);
        glVertex3f(138.6,94.3,89.4);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(122.8,90.4,80);
        glVertex3f(137.7,94.9,80.1);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(123.7,91.6,70);
        glVertex3f(136.7,95.5,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(124.6,92.8,60);
        glVertex3f(135.8,96.1,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(125.5,94,50);
        glVertex3f(134.8,96.8,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(126.4,95.2,40);
        glVertex3f(133.8,97.4,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(127.3,96.4,30);
        glVertex3f(132.9,98.1,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(128.2,97.2,20);
        glVertex3f(131.9,98.7,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(129.1,98.8,10);
        glVertex3f(131,99.4,10);

    glEnd();

     //sekat jendela depan gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(120.1,86.8,110);
        glVertex3f(100,60,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(121,88,100);
        glVertex3f(100,60,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(121.9,89.2,90);
        glVertex3f(100,60,90);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(122.8,90.4,80);
        glVertex3f(100,60,80);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(123.7,91.6,70);
        glVertex3f(100,60,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(124.6,92.8,60);
        glVertex3f(100,60,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(125.5,94,50);
        glVertex3f(100,60,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(126.4,95.2,40);
        glVertex3f(100,60,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(127.3,96.4,30);
        glVertex3f(100,60,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(128.2,97.2,20);
        glVertex3f(100,60,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(129.1,98.8,10);
        glVertex3f(100,60,10);

    glEnd();


     //sekat jendela depan kiri gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,110);
        glVertex3f(100,60,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,100);
        glVertex3f(100,60,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,90);
        glVertex3f(100,60,90);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,80);
        glVertex3f(100,60,80);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,70);
        glVertex3f(100,60,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,60);
        glVertex3f(100,60,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,50);
        glVertex3f(100,60,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,40);
        glVertex3f(100,60,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,30);
        glVertex3f(100,60,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,20);
        glVertex3f(100,60,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,10);
        glVertex3f(100,60,10);

    glEnd();


     //sekat jendela kiri gedung kanan besar

    glBegin(GL_LINES); //line 1
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,110);
        glVertex3f(130,30,110);

    glEnd();

    glBegin(GL_LINES); //line 2
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,100);
        glVertex3f(130,30,100);

    glEnd();

    glBegin(GL_LINES); //line 3
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,90);
        glVertex3f(130,30,90);

    glEnd();

    glBegin(GL_LINES); //line 4
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,80);
        glVertex3f(130,30,80);

    glEnd();

    glBegin(GL_LINES); //line 5
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,70);
        glVertex3f(130,30,70);

    glEnd();

    glBegin(GL_LINES); //line 6
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,60);
        glVertex3f(130,30,60);

    glEnd();

    glBegin(GL_LINES); //line 7
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,50);
        glVertex3f(130,30,50);

    glEnd();

    glBegin(GL_LINES); //line 8
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,40);
        glVertex3f(130,30,40);

    glEnd();

    glBegin(GL_LINES); //line 9
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,30);
        glVertex3f(130,30,30);

    glEnd();

    glBegin(GL_LINES); //line 10
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,20);
        glVertex3f(130,30,20);

    glEnd();

    glBegin(GL_LINES); //line 11
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,10);
        glVertex3f(130,30,10);

    glEnd();






    //gedung belakang kanan

    glBegin(GL_POLYGON); //kanan
     glColor3ub(35, 206, 222);
        glVertex3f(160,80,120);
        glVertex3f(160,80,0);
        glVertex3f(130,100,0);
       glVertex3f(141.5,92.3,120);
    glEnd();

     glBegin(GL_LINE_LOOP); //garis kanan
     glColor3ub(107, 238, 250);
        glVertex3f(160,80,120);
        glVertex3f(160,80,0);
        glVertex3f(130,100,0);
       glVertex3f(141.5,92.3,120);
    glEnd();

     glBegin(GL_TRIANGLES); //kanan depan strip
     glColor3ub(35, 206, 222);
        glVertex3f(119.2,85.6,120);
        glVertex3f(130,100,0);
       glVertex3f(141.5,92.3,120);
    glEnd();

    glBegin(GL_LINE_LOOP); //garis kanan depan strip
     glColor3ub(107, 238, 250);
        glVertex3f(119.2,85.6,120);
        glVertex3f(130,100,0);
       glVertex3f(141.5,92.3,120);
    glEnd();

    glBegin(GL_POLYGON); //depan
     glColor3ub(35, 206, 222);
       glVertex3f(119.2,85.6,120);
        glVertex3f(130,100,0);
        glVertex3f(100,60,0);
       glVertex3f(100,60,120);
    glEnd();

    glBegin(GL_LINE_LOOP); //garis depan
     glColor3ub(107, 238, 250);
       glVertex3f(119.2,85.6,120);
        glVertex3f(130,100,0);
        glVertex3f(100,60,0);
       glVertex3f(100,60,120);
    glEnd();

     glBegin(GL_POLYGON); //stip kiri depan
     glColor3ub(35, 206, 222);
      glVertex3f(100,50,120);
        glVertex3f(100,50,0);
        glVertex3f(100,60,0);
       glVertex3f(100,60,120);
    glEnd();

    glBegin(GL_LINE_LOOP); //garis stip kiri depan
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,120);
        glVertex3f(100,50,0);
        glVertex3f(100,60,0);
       glVertex3f(100,60,120);
    glEnd();

    glBegin(GL_POLYGON); //kiri
     glColor3ub(35, 206, 222);
      glVertex3f(100,50,120);
        glVertex3f(100,50,0);
        glVertex3f(130,30,0);
      glVertex3f(130,30,120);
    glEnd();

    glBegin(GL_LINE_LOOP); //garis kiri
     glColor3ub(107, 238, 250);
      glVertex3f(100,50,120);
        glVertex3f(100,50,0);
        glVertex3f(130,30,0);
      glVertex3f(130,30,120);
    glEnd();

    glBegin(GL_POLYGON); //belakang
     glColor3ub(35, 206, 222);
      glVertex3f(160,80,120);
        glVertex3f(160,80,0);
        glVertex3f(130,30,0);
      glVertex3f(130,30,120);
    glEnd();

     glBegin(GL_LINE_LOOP); //garis belakang
     glColor3ub(107, 238, 250);
      glVertex3f(160,80,120);
        glVertex3f(160,80,0);
        glVertex3f(130,30,0);
      glVertex3f(130,30,120);
    glEnd();

    //mahkota gedung belakang kanan

     glBegin(GL_POLYGON); //depan
     glColor3ub(105, 105, 105);
      glVertex3f(119.2,85.6,130);
        glVertex3f(119.2,85.6,120);
        glVertex3f(100,60,120);
       glVertex3f(100,60,130);
    glEnd();

    glBegin(GL_POLYGON); //kiri kecil
     glColor3ub(105, 105, 105);
      glVertex3f(100,50.6,130);
       glVertex3f(100,50.6,120);
        glVertex3f(100,60,120);
       glVertex3f(100,60,130);
    glEnd();

     glBegin(GL_POLYGON); //kiri
     glColor3ub(105, 105, 105);
      glVertex3f(100,50.6,130);
       glVertex3f(100,50.6,120);
        glVertex3f(130,30,120);
       glVertex3f(130,30,130);
    glEnd();

    glBegin(GL_POLYGON); //belakang
     glColor3ub(105, 105, 105);
      glVertex3f(151.2,65.3,130);
       glVertex3f(151.2,65.3,120);
        glVertex3f(130,30,120);
       glVertex3f(130,30,130);
    glEnd();

     glBegin(GL_POLYGON); //belakang pucuk
     glColor3ub(105, 105, 105);
      glVertex3f(151.2,65.3,130);
       glVertex3f(151.2,65.3,120);
        glVertex3f(160,80,120);
       glVertex3f(160,80,150);
    glEnd();

    glBegin(GL_POLYGON); //belakang pucuk
     glColor3ub(105, 105, 105);
      glVertex3f(141.5,92.3,150);
        glVertex3f(141.5,92.3,120);
        glVertex3f(160,80,120);
       glVertex3f(160,80,150);
    glEnd();

    glBegin(GL_POLYGON); //depan kanan pucuk
     glColor3ub(105, 105, 105);
      glVertex3f(141.5,92.3,150);
        glVertex3f(141.5,92.3,120);
        glVertex3f(119.2,85.6,120);
       glVertex3f(119.2,85.6,130);
    glEnd();



//gedung 3

glBegin(GL_POLYGON);//sisi kiri gedung1
    glColor3ub(247, 246, 237);
       glVertex3f(-106,66,100);
       glVertex3f(-112,60,100);
       glVertex3f(-112,60,0);
       glVertex3f(-106,66,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi kiri gedung1
    glColor3ub(212, 201, 174);
       glVertex3f(-106,66,100);
       glVertex3f(-112,60,100);
       glVertex3f(-112,60,0);
       glVertex3f(-106,66,0);
    glEnd();

    glBegin(GL_POLYGON);//sisi belakang gedung1
     glColor3ub(247, 246, 237);
       glVertex3f(-112,60,0);
       glVertex3f(-112,60,100);
       glVertex3f(-102,50,100);
       glVertex3f(-102,50,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi belakang gedung1
     glColor3ub(212, 201, 174);
       glVertex3f(-112,60,0);
       glVertex3f(-112,60,100);
       glVertex3f(-102,50,100);
       glVertex3f(-102,50,0);
    glEnd();

     glBegin(GL_POLYGON);//sisi kanan gedung1
     glColor3ub(247, 246, 237);
       glVertex3f(-96,56,0);
       glVertex3f(-96,56,100);
       glVertex3f(-102,50,100);
       glVertex3f(-102,50,0);
    glEnd();

     glBegin(GL_LINE_LOOP);//sisi kanan gedung1
     glColor3ub(212, 201, 174);
       glVertex3f(-96,56,0);
       glVertex3f(-96,56,100);
       glVertex3f(-102,50,100);
       glVertex3f(-102,50,0);
    glEnd();

    glBegin(GL_POLYGON);//sisi depan gedung1
   glColor3ub(247, 246, 237);
       glVertex3f(-96,56,100);
       glVertex3f(-96,56,0);
       glVertex3f(-106,66,0);
       glVertex3f(-106,66,100);
    glEnd();

     glBegin(GL_LINE_LOOP);//sisi depan gedung1
  glColor3ub(212, 201, 174);
       glVertex3f(-96,56,100);
       glVertex3f(-96,56,0);
       glVertex3f(-106,66,0);
       glVertex3f(-106,66,100);
    glEnd();

     glBegin(GL_POLYGON);//sisi atas gedung1
     glColor3ub(247, 246, 237);
       glVertex3f(-96,56,100);
       glVertex3f(-106,66,100);
        glVertex3f(-102,50,100);
         glVertex3f(-112,60,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi kiri gedung2
    glColor3ub(247, 246, 237);
       glVertex3f(-86.1,36.8,100);
       glVertex3f(-81,43.3,100);
        glVertex3f(-81,43.3,0);
         glVertex3f(-86.1,36.8,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi kiri gedung2
   glColor3ub(212, 201, 174);
       glVertex3f(-86.1,36.8,100);
       glVertex3f(-81,43.3,100);
        glVertex3f(-81,43.3,0);
         glVertex3f(-86.1,36.8,0);
    glEnd();


     glBegin(GL_POLYGON);//sisi belakang gedung2
     glColor3ub(247, 246, 237);
       glVertex3f(-86.1,36.8,100);
         glVertex3f(-86.1,36.8,0);
          glVertex3f(-97,45,0);
        glVertex3f(-97,45,100);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi belakang gedung2
     glColor3ub(212, 201, 174);
       glVertex3f(-86.1,36.8,100);
         glVertex3f(-86.1,36.8,0);
          glVertex3f(-97,45,0);
        glVertex3f(-97,45,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi kanan gedung2
     glColor3ub(247, 246, 237);
       glVertex3f(-92,52,100);
         glVertex3f(-92,52,0);
          glVertex3f(-97,45,0);
        glVertex3f(-97,45,100);
    glEnd();

     glBegin(GL_LINE_LOOP);//sisi kanan gedung2
    glColor3ub(212, 201, 174);
       glVertex3f(-92,52,100);
         glVertex3f(-92,52,0);
          glVertex3f(-97,45,0);
        glVertex3f(-97,45,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi dapan gedung2
     glColor3ub(247, 246, 237);
       glVertex3f(-92,52,100);
         glVertex3f(-92,52,0);
          glVertex3f(-81,43.3,0);
        glVertex3f(-81,43.3,100);
    glEnd();

     glBegin(GL_LINE_LOOP);//sisi dapan gedung2
     glColor3ub(212, 201, 174);
       glVertex3f(-92,52,100);
         glVertex3f(-92,52,0);
          glVertex3f(-81,43.3,0);
        glVertex3f(-81,43.3,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung2
     glColor3ub(247, 246, 237);
       glVertex3f(-92,52,0);
         glVertex3f(-81,43.3,0);
          glVertex3f(-86.1,36.8,100);
        glVertex3f(-97,45,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi kiri gedung3
     glColor3ub(247, 246, 237);
       glVertex3f(-65.8,23.8,0);
         glVertex3f(-61.7,31.2,0);
          glVertex3f(-61.7,31.2,100);
        glVertex3f(-65.8,23.8,100);
    glEnd();

     glBegin(GL_LINE_LOOP);//sisi kiri gedung3
     glColor3ub(212, 201, 174);
       glVertex3f(-65.8,23.8,0);
         glVertex3f(-61.7,31.2,0);
          glVertex3f(-61.7,31.2,100);
        glVertex3f(-65.8,23.8,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi belakang gedung3
     glColor3ub(247, 246, 237);
        glVertex3f(-65.8,23.8,100);
         glVertex3f(-65.8,23.8,0);
         glVertex3f(-78.1,30.6,0);
          glVertex3f(-78.1,30.6,100);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi belakang gedung3
     glColor3ub(212, 201, 174);
        glVertex3f(-65.8,23.8,100);
         glVertex3f(-65.8,23.8,0);
         glVertex3f(-78.1,30.6,0);
          glVertex3f(-78.1,30.6,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi kanan gedung3
     glColor3ub(247, 246, 237);
         glVertex3f(-78.1,30.6,0);
          glVertex3f(-78.1,30.6,100);
          glVertex3f(-74,38,100);
         glVertex3f(-74,38,0);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi kanan gedung3
     glColor3ub(212, 201, 174);
         glVertex3f(-78.1,30.6,0);
          glVertex3f(-78.1,30.6,100);
          glVertex3f(-74,38,100);
         glVertex3f(-74,38,0);
    glEnd();

    glBegin(GL_POLYGON);//sisi depan gedung3
    glColor3ub(247, 246, 237);
          glVertex3f(-74,38,100);
         glVertex3f(-74,38,0);
         glVertex3f(-61.7,31.2,0);
          glVertex3f(-61.7,31.2,100);
    glEnd();

    glBegin(GL_LINE_LOOP);//sisi depan gedung3
    glColor3ub(212, 201, 174);
          glVertex3f(-74,38,100);
         glVertex3f(-74,38,0);
         glVertex3f(-61.7,31.2,0);
          glVertex3f(-61.7,31.2,100);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung3
     glColor3ub(247, 246, 237);
          glVertex3f(-74,38,100);
         glVertex3f(-78.1,30.6,100);
         glVertex3f(-65.8,23.8,100);
          glVertex3f(-61.7,31.2,100);
    glEnd();

    //gedung belakang tengah

    glBegin(GL_POLYGON);//sisi belakang gedung tengah
     glColor3ub(128,128,128);
          glVertex3f(-20,10,0);
         glVertex3f(20,10,0);
         glVertex3f(20,10,60);
          glVertex3f(-20,10,60);
    glEnd();
    glBegin(GL_LINE_LOOP);//sisi belakang gedung tengah
     glColor3ub(128,128,128);
          glVertex3f(-20,10,0);
         glVertex3f(20,10,0);
         glVertex3f(20,10,60);
          glVertex3f(-20,10,60);
    glEnd();

    glBegin(GL_POLYGON);//sisi kanan gedung tengah
    glColor3ub(128,128,128);
          glVertex3f(-20,10,0);
          glVertex3f(-20,10,60);
           glVertex3f(-20,20,60);
         glVertex3f(-20,20,0);
    glEnd();

     glBegin(GL_POLYGON);//sisi kanan gedung tengah kecil
    glColor3ub(128,128,128);
          glVertex3f(-20,49.5,60);
          glVertex3f(-20,49.5,50);
           glVertex3f(-20,20,50);
         glVertex3f(-20,20,60);
    glEnd();

    glBegin(GL_POLYGON);//sisi depan gedung tengah
   glColor3ub(128,128,128);
          glVertex3f(-20,49.5,60);
          glVertex3f(-20,49.5,50);
           glVertex3f(20,50,50);
         glVertex3f(20,50,60);
    glEnd();

    glBegin(GL_POLYGON);//sisi kiri gedung tengah
   glColor3ub(128,128,128);
          glVertex3f(20,20,60);
          glVertex3f(20,20,50);
           glVertex3f(20,50,50);
         glVertex3f(20,50,60);
    glEnd();

     glBegin(GL_POLYGON);//sisi kiri gedung tengah kecil
   glColor3ub(128,128,128);
          glVertex3f(20,20,60);
          glVertex3f(20,20,0);
           glVertex3f(20,10,0);
         glVertex3f(20,10,60);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung tengah
    glColor3ub(212, 201, 174);
          glVertex3f(20,10,60);
          glVertex3f(-20,10,60);
           glVertex3f(-20,49.5,60);
         glVertex3f(20,50,60);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung tengah
     glColor3ub(255, 255, 255);
           glVertex3f(100, 60, 130);
           glVertex3f(100, 50, 130);
           glVertex3f(130, 30, 130);
           glVertex3f(151.2, 65.3, 130);
           glVertex3f(119.2, 85.6, 130);
           glVertex3f(119.2, 85.6, 130);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung tengah
     glColor3ub(255, 255, 255);
           glVertex3f(141.5, 92.3, 150);
           glVertex3f(160, 80, 150);
           glVertex3f(151.2, 65.3, 130);
           glVertex3f(119.2, 85.6, 130);
    glEnd();

    glBegin(GL_POLYGON);//sisi atas gedung tengah
     glColor3ub(255, 255, 255);
           glVertex3f(50, 0, 50);
           glVertex3f(40, -10, 50);
           glVertex3f(20, -10, 50);
           glVertex3f(20, 20, 50);
    glEnd();

 glBegin(GL_POLYGON);//MEJO
     glColor3ub(128, 110, 41);
       glVertex3f(115, 60, 0);
       glVertex3f(135, 45, 0);
       glVertex3f(135, 45, 10);
       glVertex3f(115, 60, 10);
    glEnd();
    glBegin(GL_POLYGON);//MEJO
     glColor3ub(128, 110, 41);
       glVertex3f(135, 45, 0);
       glVertex3f(115, 60, 0);
       glVertex3f(120, 65, 0);
       glVertex3f(140, 50, 0);
    glEnd();
    glBegin(GL_POLYGON);//MEJO
     glColor3ub(128, 110, 41);
       glVertex3f(140, 50, 0);
       glVertex3f(140, 50, 10);
       glVertex3f(120, 65, 10);
       glVertex3f(120, 65, 0);
    glEnd();
     glBegin(GL_POLYGON);//MEJO
     glColor3ub(128, 110, 41);
       glVertex3f(120, 65, 0);
       glVertex3f(120, 65, 10);
       glVertex3f(115, 60, 10);
       glVertex3f(115, 60, 0);
    glEnd();
    glBegin(GL_POLYGON);//MEJO
     glColor3ub(128, 110, 41);
       glVertex3f(135, 45, 0);
       glVertex3f(135, 45, 10);
       glVertex3f(140, 50, 10);
       glVertex3f(140, 50, 0);
    glEnd();
    //KURSI
     glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
       glVertex3f(121, 49, 5);
       glVertex3f(120, 47, 5);
       glVertex3f(123, 45, 5);
       glVertex3f(124, 47, 5);
    glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
      glVertex3f(120, 47, 5);
       glVertex3f(123, 45, 5);
        glVertex3f(123, 45, 9);
       glVertex3f(120, 47, 9);
    glEnd();
    glBegin(GL_LINES); //line 3
     glColor3ub(138, 135, 135);
     glVertex3f(120, 47, 5);
       glVertex3f(120, 47, 0);
       glEnd();
       glBegin(GL_LINES); //line 3
     glColor3ub(138, 135, 135);
    glVertex3f(123, 45, 5);
      glVertex3f(123, 45, 0);
       glEnd();

       glBegin(GL_LINES); //line 2
     glColor3ub(138, 135, 135);
     glVertex3f(124, 47, 5);
       glVertex3f(124, 47, 0);
       glEnd();
       glBegin(GL_LINES); //line 2
     glColor3ub(138, 135, 135);
    glVertex3f(121, 49, 5);
      glVertex3f(121, 49, 0);
       glEnd();

       //LEMARI
       glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
       glVertex3f(138, 84, 0);
       glVertex3f(138, 84, 18);
       glVertex3f(150, 76, 18);
       glVertex3f(150, 76, 0);
    glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
       glVertex3f(150, 76, 18);
       glVertex3f(150, 76, 0);
       glVertex3f(154, 82, 0);
       glVertex3f(154, 82, 18);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
      glVertex3f(154, 82, 0);
       glVertex3f(154, 82, 18);
       glVertex3f(142, 90, 18);
       glVertex3f(142, 90, 0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
     glVertex3f(142, 90, 18);
       glVertex3f(142, 90, 0);
      glVertex3f(138, 84, 0);
       glVertex3f(138, 84, 18);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(138, 135, 135);
     glVertex3f(142, 90, 18);
       glVertex3f(138, 84, 18);
      glVertex3f(150, 76, 18);
    glVertex3f(154, 82, 18);
    glEnd();

    //pintu lemari
    glBegin(GL_POLYGON);
     glColor3ub(128, 110, 41);
     glVertex3f(139.4, 83.1, 0);
        glVertex3f(139.4, 83.1, 15);
      glVertex3f(142.7, 80.9, 15);
      glVertex3f(142.7, 80.9, 0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(128, 110, 41);
     glVertex3f(145.3, 79.1, 0);
      glVertex3f(145.3, 79.1, 15);
      glVertex3f(148.7, 76.9, 15);
      glVertex3f(148.7, 76.9, 0);
    glEnd();

    //kulkas

     glBegin(GL_LINE_LOOP);
     glColor3ub(199, 197, 193);
     glVertex3f(107, 46, 0);
      glVertex3f(107, 46, 15);
      glVertex3f(109, 49, 15);
     glVertex3f(109, 49, 0);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(107, 46, 0);
      glVertex3f(107, 46, 15);
      glVertex3f(109, 49, 15);
     glVertex3f(109, 49, 0);
    glEnd();

     glBegin(GL_LINE_LOOP);
     glColor3ub(199, 197, 193);
    glVertex3f(109, 49, 15);
     glVertex3f(109, 49, 0);
      glVertex3f(103, 53, 0);
     glVertex3f(103, 53, 15);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
    glVertex3f(109, 49, 15);
     glVertex3f(109, 49, 0);
      glVertex3f(103, 53, 0);
     glVertex3f(103, 53, 15);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(199, 197, 193);
    glVertex3f(101, 50, 15);
     glVertex3f(101, 50, 0);
      glVertex3f(103, 53, 0);
     glVertex3f(103, 53, 15);
    glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
    glVertex3f(101, 50, 15);
     glVertex3f(101, 50, 0);
      glVertex3f(103, 53, 0);
     glVertex3f(103, 53, 15);
    glEnd();

    glBegin(GL_LINE_LOOP);
     glColor3ub(199, 197, 193);
    glVertex3f(101, 50, 15);
     glVertex3f(101, 50, 0);
      glVertex3f(107, 46, 0);
     glVertex3f(107, 46, 15);
    glEnd();

     glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
    glVertex3f(101, 50, 15);
     glVertex3f(101, 50, 0);
      glVertex3f(107, 46, 0);
     glVertex3f(107, 46, 15);
    glEnd();

    //tutup atas

     glBegin(GL_LINE_LOOP);
     glColor3ub(199, 197, 193);
     glVertex3f(107, 46, 15);
    glVertex3f(109, 49, 15);
     glVertex3f(103, 53, 15);
      glVertex3f(101, 50, 15);
      glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(107, 46, 15);
    glVertex3f(109, 49, 15);
     glVertex3f(103, 53, 15);
      glVertex3f(101, 50, 15);
      glEnd();

      //garis lemari
      glBegin(GL_LINES);
     glColor3ub(128,128,128);
     glVertex3f(109, 49, 10);
     glVertex3f(103, 53, 10);
    glEnd();

    //gujengan pintu atas

     glBegin(GL_LINES);
     glColor3ub(128,128,128);
     glVertex3f(108.3, 49.5, 13);
     glVertex3f(108.3, 49.5, 11);
    glEnd();

    //gujengan pintu bawah

     glBegin(GL_LINES);
     glColor3ub(128,128,128);
     glVertex3f(108.3, 49.5, 8);
     glVertex3f(108.3, 49.5, 6);
    glEnd();

    //papan tulis

     glBegin(GL_LINE_LOOP);
     glColor3ub(128,128,128);
     glVertex3f(126, 72, 17);
    glVertex3f(144, 60, 17);
     glVertex3f(144, 60, 10);
      glVertex3f(126, 72, 10);

      glEnd();


    glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(126, 72, 17);
    glVertex3f(144, 60, 17);
     glVertex3f(144, 60, 10);
      glVertex3f(126, 72, 10);

      glEnd();

      glBegin(GL_LINES);
     glColor3ub(128,128,128);
    glVertex3f(144, 60, 10);
      glVertex3f(144, 60, 0);

       glEnd();

      glBegin(GL_LINES);
     glColor3ub(128,128,128);
    glVertex3f(126, 72, 10);
      glVertex3f(126, 72, 0);

       glEnd();

        glBegin(GL_LINES);//jagak belakang1 papan tulis
     glColor3ub(128,128,128);
    glVertex3f(144, 60, 17);
      glVertex3f(146, 63, 0);

       glEnd();

        glBegin(GL_LINES);//jagak belakang2 papan tulis
     glColor3ub(128,128,128);
    glVertex3f(126, 72, 17);
      glVertex3f(128, 75, 0);

       glEnd();


    glPopMatrix();
    glutSwapBuffers();
}





/*
tombol pada keyboard:
"a": ke kiri
"d": ke kanan
"w": ke depan
"s": ke belakang
"z" : ke atas
"x" : ke bawah
"i" : rotasi ke bawah terhadap sumbu X
"k" : rotasi ke atas terhadap sumbu X
"j" : rotasi ke kiri terhadap sumbu Y
"l" : rotasi ke kanan terhadap sumbu Y
"m" : rotasi ke kiri terhadap sumbu Z
"n" : rotasi ke kanan terhadap sumbu Z
"Q" : Melihat interior
*/
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    case 'A':
        glTranslatef(5.0, 0.0, 0.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(-5.0, 0.0, 0.0);
        break;
    case 'z' :
    case 'Z' :
        glTranslatef(0.0,5.0,0.0);
        break;
    case 'x' :
    case 'X' :
        glTranslatef(0.0,-5.0, 0.0);
        break;
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 5.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -5.0);
        break;
    case 'i':
    case 'I':
        glRotatef(3.0,1.0,0.0,0.0);
        break;
    case 'k':
    case 'K':
        glRotatef(-3.0,1.0,0.0,0.0);
        break;
    case 'j':
    case 'J':
        glRotatef(3.0,0.0,1.0,0.0);
        break;
    case 'l':
    case 'L':
        glRotatef(-3.0,0.0,1.0,0.0);
        break;
    case 'm':
    case 'M':
        glRotatef(3.0,0.0,0.0,1.0);
        break;
    case 'n':
    case 'N':
        glRotatef(-3.0,0.0,0.0,1.0);
        break;
    case 'q':
    case 'Q':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);(16, 8, 15);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tembok();
}
void resize(int width, int height)
{
    if (height == 0) height = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, width / height, 1.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 900);
    glutInitWindowPosition(40, 40);
    glutCreateWindow("CENTRAL PARK JAKARTA");
    init();
    glutDisplayFunc(tembok);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMove);
    glutReshapeFunc(resize);
    glutMainLoop();
    return 0;
}
