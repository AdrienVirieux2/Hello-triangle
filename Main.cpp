#include <GL\glew.h>
#include <GL\freeglut.h>

void displayTriangle(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 1, 0.5);			// Couleur du triangle
	glVertex3f(0.0, 0.5, 0.0);		// 
	glVertex3f(-0.5, -0.5, 0.0);	//
	glVertex3f(0.5, -0.5, 0.0);		//
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);

	glutInitWindowSize(400, 300);                   // window size
	glutCreateWindow("Hello triangle");             // Nom de la fenêtre créée
	
	glutDisplayFunc(displayTriangle);				// Affichage du triangle

	glutMainLoop();
	return 0;
}