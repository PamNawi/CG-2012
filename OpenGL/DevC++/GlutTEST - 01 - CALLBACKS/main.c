#include <gl/glut.h>

// Fun��o callback chamada para fazer o desenho
void Desenha(void)
{
	//Limpa a janela de visualiza��o com a cor de fundo especificada 
	glClear(GL_COLOR_BUFFER_BIT);

	//Executa os comandos OpenGL 
	glFlush();
}

// Inicializa par�metros de rendering
void Inicializa (void)
{   
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);			//define a cor de desenho
	glFlush();
}

// Programa Principal 
int main(void)
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Primeiro Programa");
	glutDisplayFunc(Desenha);
	Inicializa();
	glutMainLoop();
}




