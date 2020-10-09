#include <stdlib.h> 
#include <iostream>
#include "graphics/ModelLoader.h"
#include "graphics/Window.h"

using namespace std;

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	Window window;
	window.init();
	window.display();
    
    char *path = (char *)"/home/olha/Documents/Projects/my_first_game/sources/3d_models/cube.obj";
	ModelLoader modelLoader = ModelLoader(path);
	modelLoader.loadModel();
    
    glutMainLoop();

	return 0;
}