#include <string.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <GL/glew.h>
#include <GL/freeglut.h> 
#include <glm/glm.hpp>
#include <iostream>

class ModelLoader {
  public:
    ModelLoader(char *);
    char * getPath();

    bool loadModel();

  private: 
    char * path;
};