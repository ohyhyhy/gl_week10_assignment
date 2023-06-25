#include <GL/glut.h>
#include <gl/freeglut.h>
#include <math.h>

float h = 0.25;
float a = 0.001f;
float t = 0;
GLUquadricObj* cyl;

float speed1 = 0.001;
float speed2 = 0.01;

void MyIdle()
{
	t = t + 1.0f;
	if (h <= 0.1) a = +0.0001f;
	if (h >= 0.6) a = -0.0001f;
	h = h + a;
	glutPostRedisplay();
}

void MyDisplay() {
	cyl = gluNewQuadric();
	gluQuadricDrawStyle(cyl, GLU_LINE);

	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	//glPushMatrix();
	//glColor3f(0.0, 0.0, 1.0);
	//glScalef(5, 0.3, 5);
	//glutWireCube(0.3);
	//glPopMatrix();

	/*glPushMatrix();
	glColor3f(0.0, 0.0, 1.0);
	glTranslatef(0, h, 0);
	glutWireSphere(0.1, 20, 20);
	glPopMatrix();*/

	//�Ʒɻ��--------------------------------------
	//1. ����
	glPushMatrix();
	glColor3f(0.3, 0.0, 1.0);
	glTranslatef(0.5, 0, 0);
	//glTranslatef(2, 1.5, -3);
	glRotatef(-90, 3, 0, 0); // -90
	// Cynliner�� +z�������� �������.
	gluCylinder(cyl, 0.08, 0.15, 0.3, 20, 5);

	// 2. ��1
	glPushMatrix();
	glTranslatef(0.2, 0.5, 0.3);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60 + 180, 1, 0, 0);
	glRotatef(20, 0, 1, 0); // -90
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// �Ȳ�ġ�� �ȶ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);

	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glPopMatrix();

//�Ʒɴ�
	glPushMatrix();

	glTranslatef(-0.1, 0.0, 0.05);
	glRotatef(90, 0, 1, 0);
	glutSolidCylinder(0.025, 0.2, 20, 1);
	//glPopMatrix();

	//�Ʒɿ���
	glPushMatrix();
	glTranslatef(0, 0.0, -0.05);
	glRotatef(90, 0, 0, 1);
	glutSolidCylinder(0.05, 0.05, 40, 1);
	//glPopMatrix();

	//�Ʒɿ�����
	glPushMatrix();
	glTranslatef(0, 0.0, 0.25);
	glRotatef(90, 0, 0, 1);
	glutSolidCylinder(0.05, 0.05, 40, 1);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix(); //����


	// 2. ��2
	glPushMatrix();
	glTranslatef(-0.1, 0.5, 0.3);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60 + 180, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// �Ȳ�ġ�� �ȶ�
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	//glPopMatrix();

	//�Ʒɴ�
	glPushMatrix();

	glTranslatef(-0.1, 0.0, 0.25);
	glRotatef(90, 0, 1, 0);
	glutSolidCylinder(0.025, 0.2, 20, 1);
	//glPopMatrix();

	//�Ʒɿ���
	glPushMatrix();
	glTranslatef(0, 0.0, -0.05);
	glRotatef(90, 0, 0, 1);
	glutSolidCylinder(0.05, 0.05, 40, 1);
	//glPopMatrix();

	//�Ʒɿ�����
	glPushMatrix();
	glTranslatef(0, 0.0, 0.25);
	glRotatef(90, 0, 0, 1);
	glutSolidCylinder(0.05, 0.05, 40, 1);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	glPopMatrix();


	glPopMatrix(); // ���� ��

	// 3. �ٸ�1
	glPushMatrix();
	glTranslatef(0.09, 0.0, 0);
	glutWireSphere(0.07, 20, 20);
	glRotatef(-180, 0, 1, 0);
	//glRotatef(cos(t * 0.001) * 10, 1, 0, 0);
	//glRotatef(-45, 1, 0, 0);
	gluCylinder(cyl, 0.07, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// ������ ���Ƹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	//glRotatef(cos(t * 0.001) * 10, 1, 0, 0);
	//glRotatef(60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();

	// 4.�ٸ�2
	glPushMatrix();
	glTranslatef(-0.09, 0.0, 0);
	glutWireSphere(0.07, 20, 20);
	glRotatef(-180, 0, 1, 0);
	//glRotatef(cos(t * 0.001) * 10, 1, 0, 0);
	//glRotatef(-45, 1, 0, 0);
	gluCylinder(cyl, 0.07, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// ������ ���Ƹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	//glRotatef(cos(t * 0.001) * 10, 1, 0, 0);
	//glRotatef(60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	// ���� ��

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.3);
	gluCylinder(cyl, 0.05, 0.05, 0.07, 20, 5);
	//glPopMatrix();

//�Ӹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.15);
	glutWireSphere(0.1, 20, 20);
	glPopMatrix();

	glPopMatrix(); // ���� ��

	glPopMatrix(); // ���� ��_����
	//�Ʒɻ����----------------------------------------


	//ö�����------------------------------------------
	//1. ����
	glPushMatrix();
	glColor3f(0.1, 0.5, 0.1);
	glTranslatef(-0.4, sin(speed2 * t) / 12, 0);//�ӵ����� //���������ϱ� �ϾƸ� 1 ������ ��
	//glTranslatef(2, 1.5, -3);
	glRotatef(-90, 5, 0, 0); // -90
	// Cynliner�� +z�������� �������.
	gluCylinder(cyl, 0.08, 0.15, 0.3, 20, 5);

	// 2. ��1
	glPushMatrix();
	glTranslatef(0.15, 0.5, 0.3);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed2) * 60 - 100, 1, 0, 0);
	glRotatef(160, 0, 1, 0); // -90
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// �Ȳ�ġ�� �ȶ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60 + 90, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);

	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glPopMatrix();
//
////�Ʒɴ�
//	glPushMatrix();
//
//	glTranslatef(-0.1, 0.0, 0.05);
//	glRotatef(90, 0, 1, 0);
//	gluCylinder(cyl, 0.025, 0.025, 0.2, 20, 1);
//	//glPopMatrix();
//
//	//�Ʒɿ���
//	glPushMatrix();
//	glTranslatef(0, 0.0, -0.05);
//	glRotatef(90, 0, 0, 1);
//	gluCylinder(cyl, 0.05, 0.05, 0.05, 40, 1);
//	//glPopMatrix();
//
//	//�Ʒɿ�����
//	glPushMatrix();
//	glTranslatef(0, 0.0, 0.25);
//	glRotatef(90, 0, 0, 1);
//	gluCylinder(cyl, 0.05, 0.05, 0.05, 40, 1);
//	glPopMatrix();
//
//	glPopMatrix();
//	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix(); //����


	// 2. ��2
	glPushMatrix();
	glTranslatef(-0.15, 0.5, 0.3);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed2) * 60 - 100, 1, 0, 0);
	glRotatef(200, 0, 1, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// �Ȳ�ġ�� �ȶ�
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glRotatef(sin(t * speed1) * 60 + 90, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	//glPopMatrix();

	////�Ʒɴ�
	//glPushMatrix();

	//glTranslatef(-0.1, 0.0, 0.25);
	//glRotatef(90, 0, 1, 0);
	//gluCylinder(cyl, 0.025, 0.025, 0.2, 20, 1);
	////glPopMatrix();

	////�Ʒɿ���
	//glPushMatrix();
	//glTranslatef(0, 0.0, -0.05);
	//glRotatef(90, 0, 0, 1);
	//gluCylinder(cyl, 0.05, 0.05, 0.05, 40, 1);
	////glPopMatrix();

	////�Ʒɿ�����
	//glPushMatrix();
	//glTranslatef(0, 0.0, 0.25);
	//glRotatef(90, 0, 0, 1);
	//gluCylinder(cyl, 0.05, 0.05, 0.05, 40, 1);
	//glPopMatrix();

	//glPopMatrix();
	//glPopMatrix();
	glPopMatrix();


	glPopMatrix(); // ���� ��

	// 3. �ٸ�1
	glPushMatrix();
	glTranslatef(0.09, 0.0, 0);
	glutWireSphere(0.07, 20, 20);
	glRotatef(-180, 0, 1, 0);
	glRotatef(cos(t * speed2) * 20, 1, 0, 0);
	glRotatef(-45, 1, 0, 0);
	gluCylinder(cyl, 0.07, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// ������ ���Ƹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glRotatef(cos(t * speed1) * 10, 1, 0, 0);
	glRotatef(60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();

	// 4.�ٸ�2
	glPushMatrix();
	glTranslatef(-0.09, 0.0, 0);
	glutWireSphere(0.07, 20, 20);
	glRotatef(-180, 0, 1, 0);
	glRotatef(cos(t * speed2) * 20, 1, 0, 0);
	glRotatef(-45, 1, 0, 0);
	gluCylinder(cyl, 0.07, 0.05, 0.2, 20, 1);
	//glPopMatrix();

// ������ ���Ƹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	glutWireSphere(0.05, 20, 20);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glRotatef(cos(t * speed1) * 10, 1, 0, 0);
	glRotatef(60, 1, 0, 0);
	gluCylinder(cyl, 0.05, 0.05, 0.2, 20, 1);
	//glPopMatrix();

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.2);
	//glRotatef(sin(t * 0.001) * 60, 1, 0, 0);
	glutWireSphere(0.05, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	// ���� ��

//��
	glPushMatrix();
	glTranslatef(0, 0.0, 0.3);
	gluCylinder(cyl, 0.05, 0.05, 0.07, 20, 5);
	//glPopMatrix();

//�Ӹ�
	glPushMatrix();
	glTranslatef(0, 0.0, 0.15);
	glutWireSphere(0.1, 20, 20);
	glPopMatrix();

	glPopMatrix(); // ���� ��

	glPopMatrix(); // ���� ��_����

	//ö�� ����
	glPushMatrix();
	glColor3f(0.5, 0.5, 0.5);
	glTranslatef(-0.8, -0.5, 0);
	//glTranslatef(2, 1.5, -3);
	glRotatef(-90, 3, 0, 0); // -90
	// Cynliner�� +z�������� �������.
	gluCylinder(cyl, 0.04, 0.04, 1.2, 20, 5);
	glPopMatrix();

	//ö�� ������
	glPushMatrix();
	glTranslatef(0, -0.5, 0);
	//glTranslatef(2, 1.5, -3);
	glRotatef(-90, 3, 0, 0); // -90
	// Cynliner�� +z�������� �������.
	gluCylinder(cyl, 0.04, 0.04, 1.2, 20, 5);
	glPopMatrix();

	//ö����
	glPushMatrix();
	glTranslatef(-0.75, 0.4, 0.05);

	glRotatef(90, 0, 1, 0);
	gluCylinder(cyl, 0.025, 0.025, 0.72, 20, 1); 
	glPopMatrix();

	//ö�������-----------------------------------------
	glFlush();
}

void MyKeyboard(unsigned char key, int x, int y) { //���������� ���� �ݹ��Լ�
	switch (key) {
	case 'q':
		//r1 = (r1 + 180) % 360;
		speed1 += 0.002;
		speed2 += 0.01;
		glutPostRedisplay();
		break;
	case 'e':
		/*if (vision == 1)
			vision = 0;
		else if (vision == 0)
			vision = 1;*/
		speed1 -= 0.003;
		speed2 -= 0.03;
		glutPostRedisplay();
		break;
	default:
		break;
	}

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Sample Drawing");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(20, 1, 0.1, 1000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, 0.4, 5, 0, 0, 0, 0, 1, 0);
	//gluLookAt(9, -6, 19, 0, 0, 0, 0, 1, 0);

	glutKeyboardFunc(MyKeyboard); //Ű����� �ӵ��� ������
	glutDisplayFunc(MyDisplay);
	glutIdleFunc(MyIdle);
	glutMainLoop();
	return 0;
}

//�Ʒ� ��� ������/�������� �̵���Ű��
//�ٳѱ��� �Ǵ� ö����� �����
//�ٳѱ����� t�� �Ȱ� �Ȳ���+�ȶҿ� ���ϴ� ���� �ٸ��� �ϸ� ��
//���� ��� 0.001->0.003���� �ٲٸ�
//������Ÿ��� �� �� ����
