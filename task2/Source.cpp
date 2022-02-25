
//   Task 2 computer graphics
// 
// 
// 
// name:abdelrahman khaled           sec : 1               B.N : 50
// 
// name : filopatere george          sec : 2               B.N : 5
//
// name : moustafa medhat            sec : 2               B.N : 32
//
// name : hisham gamal abdelhady     sec : 2               B.N : 46
//
// name : mohab hisham               sec : 2               B.N : 34








#include <stdlib.h>
#include <GL\glut.h>
#include <math.h>


static int LeftShoulder_1 = 0, LeftShoulder_2 = 0, LeftShoulder_3 = 0, LeftElbow = 0, RightShoulder_1 = 0, RightShoulder_2 = 0, RightShoulder_3 = 0, RightElbow = 0, LeftPelv_1 = 0, LeftPelv_2 = 0, LeftKnee = 0, RightPelv_1 = 0, RightPelv_2 = 0, RightKnee = 0;
int moving, startx, starty;
static int leftFingersBase = 0, leftFingersUp = 0, leftThmbBase = 0, leftThmbUp = 0, rightFingersBase = 0, rightFingersUp = 0, rightThmbBase = 0, rightThmbUp = 0;

double eye[] = { 0.0 , 0.0, 1.0 }, center[] = { 0.0 , 0.0 , 0.0 }, up[] = { 0.0 , 1.0 , 0.0 };

GLfloat angle = 0.0;   /* in degrees */
GLfloat angle2 = 0.0;   /* in degrees */
double angle3 = 0.0;
double cp[3];


void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle2, 1.0, 0.0, 0.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    gluLookAt(eye[0], eye[1], eye[2], center[0], center[1], center[2], up[0], up[1], up[2]); //look at function
    glTranslatef(0.0, 3.7, -1.0);
    glPushMatrix();
    glRotatef(90, 1.0, 0.0, 0.0);
    glutWireSphere(0.4, 20, 8);//draw head
    glPopMatrix();
    glTranslatef(0.0, -2.1, 0.0);
    glPushMatrix();
    glScalef(1.5, 3.0, 0.5);
    glutWireCube(1.0); //draw body
    glPopMatrix();


    //Draw left arm
    glPushMatrix();
    glTranslatef(1.05, 1.3, 0.0);
    glRotatef((GLfloat)LeftShoulder_1, 0.0, 0.0, 1.0);
    glRotatef((GLfloat)LeftShoulder_2, 0.0, 1.0, 0.0);
    glRotatef((GLfloat)LeftShoulder_3, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.75, 0.0);
    glPushMatrix();
    glScalef(0.2, 1.5, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.75, 0.0);
    glRotatef((GLfloat)LeftElbow, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.75, 0.0);
    glPushMatrix();
    glScalef(0.2, 1.5, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    
    glPushMatrix();
    glTranslatef(0.06, -0.75, 0.21);
    glRotatef((GLfloat)leftFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.06, -0.75, 0.07);
    glRotatef((GLfloat)leftFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glPushMatrix();

    glTranslatef(0.06, -0.75, -0.07);
    glRotatef((GLfloat)leftFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.06, -0.75, -0.21);
    glRotatef((GLfloat)leftFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.06, -0.75, 0.21);
    glRotatef((GLfloat)leftThmbBase, -2.5, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)leftThmbUp, -2.5, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
   

    glPopMatrix();
   


    //Draw Right arm 
    glPushMatrix();
    glTranslatef(-1.05, 1.3, 0.0);
    glRotatef((GLfloat)RightShoulder_1, 0.0, 0.0, 1.0);
    glRotatef((GLfloat)RightShoulder_2, 0.0, 1.0, 0.0);
    glRotatef((GLfloat)RightShoulder_3, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.75, 0.0);
    glPushMatrix();
    glScalef(0.2, 1.5, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.75, 0.0);
    glRotatef((GLfloat)RightElbow, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.75, 0.0);
    glPushMatrix();
    glScalef(0.2, 1.5, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.06, -0.75, 0.21);
    glRotatef((GLfloat)rightFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.06, -0.75, 0.07);
    glRotatef((GLfloat)rightFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glPushMatrix();

    glTranslatef(-0.06, -0.75, -0.07);
    glRotatef((GLfloat)rightFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.06, -0.75, -0.21);
    glRotatef((GLfloat)rightFingersBase, 0.0, 0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightFingersUp, 0.0, 0.0, 1.0); //ring finger flang 3
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.06, -0.75, 0.21);
    glRotatef((GLfloat)rightThmbBase, 2.5,0.0, 1.0);//ring finger flang 1
    glTranslatef(0.0, -0.1, 0.0);
    glPushMatrix();
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.1, 0.0);
    glRotatef((GLfloat)rightThmbUp, 2.5, 0.0, 1.0); //ring finger flang 2
    glTranslatef(0.0, -0.1, 0.0);
    glScalef(0.08, 0.2, 0.08);
    glutWireCube(1.0);
    glPopMatrix();


    glPopMatrix();


    //Draw Left leg
    glPushMatrix();
    glTranslatef(0.0, -1.5, 0.0);
    glRotatef((GLfloat)LeftPelv_1, 1.0, 0.0, 0.0);
    glRotatef((GLfloat)LeftPelv_2, 0.0, 0.0, 1.0);
    glTranslatef(0.45, -0.875, 0.0);
    glPushMatrix();
    glScalef(0.5, 1.75, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.875, 0.0);
    glRotatef((GLfloat)LeftKnee, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.875, 0.0);
    glPushMatrix();
    glScalef(0.5, 1.75, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -1.125, 0.25);
    glScalef(0.5, 0.5, 1.125);
    glutSolidCube(1.0);
    glPopMatrix();



    //Draw Right leg
    glPushMatrix();
    glTranslatef(0.0, -1.5, 0.0);
    glRotatef((GLfloat)RightPelv_1, 1.0, 0.0, 0.0);
    glRotatef((GLfloat)RightPelv_2, 0.0, 0.0, 1.0);
    glTranslatef(-0.45, -0.875, 0.0);
    glPushMatrix();
    glScalef(0.5, 1.75, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -0.875, 0.0);
    glRotatef((GLfloat)RightKnee, 1.0, 0.0, 0.0);
    glTranslatef(0.0, -0.875, 0.0);
    glPushMatrix();
    glScalef(0.5, 1.75, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.0, -1.125, 0.25);
    glScalef(0.5, 0.5, 1.125);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    glutPostRedisplay();

}

void rotatePoint(double a[], double theta, double p[])
{

    double temp[3];
    temp[0] = p[0];
    temp[1] = p[1];
    temp[2] = p[2];

    temp[0] = -a[2] * p[1] + a[1] * p[2];
    temp[1] = a[2] * p[0] - a[0] * p[2];
    temp[2] = -a[1] * p[0] + a[0] * p[1];

    temp[0] *= sin(theta);
    temp[1] *= sin(theta);
    temp[2] *= sin(theta);

    temp[0] += (1 - cos(theta)) * (a[0] * a[0] * p[0] + a[0] * a[1] * p[1] + a[0] * a[2] * p[2]);
    temp[1] += (1 - cos(theta)) * (a[0] * a[1] * p[0] + a[1] * a[1] * p[1] + a[1] * a[2] * p[2]);
    temp[2] += (1 - cos(theta)) * (a[0] * a[2] * p[0] + a[1] * a[2] * p[1] + a[2] * a[2] * p[2]);

    temp[0] += cos(theta) * p[0];
    temp[1] += cos(theta) * p[1];
    temp[2] += cos(theta) * p[2];

    p[0] = temp[0];
    p[1] = temp[1];
    p[2] = temp[2];

}

void crossProduct(double a[], double b[], double c[])
{
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
}

void normalize(double a[])
{
    double norm;
    norm = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
    norm = sqrt(norm);
    a[0] /= norm;
    a[1] /= norm;
    a[2] /= norm;
}

void hRotation(double a[], double b[], double c[], double theta) {
    crossProduct(a, b, c);
    normalize(c);
    rotatePoint(c, theta, a);
    rotatePoint(c, theta, b);
}

void moveFront(double center[], double eye[]) {
    double direction[3];
    double speed = 0.1;
    direction[0] = center[0] - eye[0];
    direction[1] = center[1] - eye[1];
    direction[2] = center[2] - eye[2];

    eye[0] += direction[0] * speed;
    eye[1] += direction[1] * speed;
    eye[2] += direction[2] * speed;
   
    center[0] += direction[0] * speed;
    center[1] += direction[1] * speed;
    center[2] += direction[2] * speed;
    
}

void moveBack(double center[], double eye[]) {
    double direction[3];
    double speed = 0.1;
    direction[0] = center[0] - eye[0];
    direction[1] = center[1] - eye[1];
    direction[2] = center[2] - eye[2];

    eye[0] -= direction[0] * speed;
    eye[1] -= direction[1] * speed;
    eye[2] -= direction[2] * speed;
    center[0] -= direction[0] * speed;
    center[1] -= direction[1] * speed;
    center[2] -= direction[2] * speed;
   
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'q':
        if (LeftShoulder_1 >= 190) { break; }
        else
        {
            LeftShoulder_1 = (LeftShoulder_1 + 5);

            break;
        }
    case 'Q':
        if (LeftShoulder_1 <= 0) { break; }
        else {
            LeftShoulder_1 = (LeftShoulder_1 - 5);
            glutPostRedisplay();
            break;
        }

    case 'a':
        if (LeftShoulder_2 >= 90) { break; }
        else
        {
            LeftShoulder_2 = (LeftShoulder_2 + 5);

            break;
        }
    case 'A':
        if (LeftShoulder_2 <= -90) { break; }
        else {
            LeftShoulder_2 = (LeftShoulder_2 - 5);
            glutPostRedisplay();
            break;
        }

    case '1':
        if (LeftShoulder_3 <= -170) { break; }
        else
        {
            LeftShoulder_3 = (LeftShoulder_3 - 5);

            break;
        }
    case '!':
        if (LeftShoulder_3 >= 90) { break; }
        else {
            LeftShoulder_3 = (LeftShoulder_3 + 5);
            glutPostRedisplay();
            break;
        }


    case 'r':
        if (RightShoulder_1 <= -190) { break; }
        else
        {
            RightShoulder_1 = (RightShoulder_1 - 5);

            break;
        }
    case 'R':
        if (RightShoulder_1 >= 0) { break; }
        else {
            RightShoulder_1 = (RightShoulder_1 + 5);
            glutPostRedisplay();
            break;
        }

    case 'f':
        if (RightShoulder_2 <= -90) { break; }
        else
        {
            RightShoulder_2 = (RightShoulder_2 - 5);

            break;
        }
    case 'F':
        if (RightShoulder_2 >= 90) { break; }
        else {
            RightShoulder_2 = (RightShoulder_2 + 5);
            glutPostRedisplay();
            break;
        }

    case '2':
        if (RightShoulder_3 <= -170) { break; }
        else
        {
            RightShoulder_3 = (RightShoulder_3 - 5);

            break;
        }
    case '@':
        if (RightShoulder_3 >= 0) { break; }
        else {
            RightShoulder_3 = (RightShoulder_3 + 5);
            glutPostRedisplay();
            break;
        }


    case 'z':
        if (LeftElbow <= -170) { break; }
        else
        {
            LeftElbow = (LeftElbow - 5);

            break;
        }
    case 'Z':
        if (LeftElbow >= 0) { break; }
        else {
            LeftElbow = (LeftElbow + 5);
            glutPostRedisplay();
            break;
        }

    case 'v':
        if (RightElbow <= -170) { break; }
        else
        {
            RightElbow = (RightElbow - 5);

            break;
        }
    case 'V':
        if (RightElbow >= 0) { break; }
        else {
            RightElbow = (RightElbow + 5);
            glutPostRedisplay();
            break;
        }

    case 'w':
        if (LeftPelv_1 <= -90) { break; }
        else
        {
            LeftPelv_1 = (LeftPelv_1 - 5);

            break;
        }
    case 'W':
        if (LeftPelv_1 >= 50) { break; }
        else {
            LeftPelv_1 = (LeftPelv_1 + 5);
            glutPostRedisplay();
            break;
        }

    case 's':
        if (LeftPelv_2 >= 90) { break; }
        else
        {
            LeftPelv_2 = (LeftPelv_2 + 5);

            break;
        }
    case 'S':
        if (LeftPelv_2 <= -10) { break; }
        else {
            LeftPelv_2 = (LeftPelv_2 - 5);
            glutPostRedisplay();
            break;
        }

    case 'e':
        if (RightPelv_1 <= -90) { break; }
        else
        {
            RightPelv_1 = (RightPelv_1 - 5);

            break;
        }
    case 'E':
        if (RightPelv_1 >= 50) { break; }
        else {
            RightPelv_1 = (RightPelv_1 + 5);
            glutPostRedisplay();
            break;
        }

    case 'd':
        if (RightPelv_2 <= -90) { break; }
        else
        {
            RightPelv_2 = (RightPelv_2 - 5);

            break;
        }
    case 'D':
        if (RightPelv_2 >= 10) { break; }
        else {
            RightPelv_2 = (RightPelv_2 + 5);
            glutPostRedisplay();
            break;
        }

    case 'x':
        if (LeftKnee >= 90) { break; }
        else
        {
            LeftKnee = (LeftKnee + 5);

            break;
        }
    case 'X':
        if (LeftKnee <= 0) { break; }
        else {
            LeftKnee = (LeftKnee - 5);
            glutPostRedisplay();
            break;
        }

    case 'c':
        if (RightKnee >= 90) { break; }
        else
        {
            RightKnee = (RightKnee + 5);

            break;
        }
    case 'C':
        if (RightKnee <= 0) { break; }
        else {
            RightKnee = (RightKnee - 5);
            glutPostRedisplay();
            break;
        }
    case 'k':

        rotatePoint(up, 0.1, eye);
        break;

    case 'K':

        rotatePoint(up, -0.1, eye);
        break;

    case 'm':
        moveFront(center, eye);
        break;
    case 'M':
        moveBack(center, eye);
        break;

    case 'n':
        hRotation(up, eye, cp, -0.1);
        break;
        
    case 'N':
        hRotation(up, eye, cp, 0.1);
        break;

    case 'h':
        if (leftFingersBase >= 5) {

            if (leftFingersUp >= 5) { break; }
            else {
                leftThmbUp = (leftThmbUp + 5);
                leftFingersUp = (leftFingersUp + 5);
                
                glutPostRedisplay();
                break;
            }

        }
        else {
            leftThmbBase = (leftThmbBase + 5);
            leftFingersBase = (leftFingersBase + 5);
            glutPostRedisplay();
            break;
        }

    case 'H':
        if (leftFingersBase <= -40) {
            if (leftFingersUp <= -70) { break; }
            else {
                leftThmbUp = (leftThmbUp - 5);
                leftFingersUp = (leftFingersUp - 5);
               
                glutPostRedisplay();
                break;
            }
        }
        else {
            leftThmbBase = (leftThmbBase - 5);
            leftFingersBase = (leftFingersBase - 5);
            glutPostRedisplay();
            break;
        }

    case 'y':
        if (rightFingersBase <= -5) {

            if (rightFingersUp <= -5) { break; }
            else {
                rightThmbUp = (rightThmbUp - 5);
                rightFingersUp = (rightFingersUp - 5);

                glutPostRedisplay();
                break;
            }

        }
        else {
            rightThmbBase = (rightThmbBase - 5);
            rightFingersBase = (rightFingersBase - 5);
            glutPostRedisplay();
            break;
        }

    case 'Y':
        if (rightFingersBase >= 40) {
            if (rightFingersUp >= 70) { break; }
            else {
                rightThmbUp = (rightThmbUp + 5);
                rightFingersUp = (rightFingersUp + 5);

                glutPostRedisplay();
                break;
            }
        }
        else {
            rightThmbBase = (rightThmbBase + 5);
            rightFingersBase = (rightFingersBase + 5);
            glutPostRedisplay();
            break;
        }

    default:
        break;
    }
}

static void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_DOWN) {
            moving = 1;
            startx = x;
            starty = y;
        }
        if (state == GLUT_UP) {
            moving = 0;
        }
    }
}


static void motion(int x, int y)
{
    if (moving) {
        angle = angle + (x - startx);
        angle2 = angle2 + (y - starty);
        startx = x;
        starty = y;
        glutPostRedisplay();
    }
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}