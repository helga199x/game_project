#include "Window.h"

int Window::windowCounter = 0;

Window::Window() {
   setId(++windowCounter);
   setName("Default");
   setType("Default");
   windowWidth = 1280;
   windowHeight = 1024;
   displayMode = GLUT_RGB;
   x = 1000;
   y = 200;
}

// accsessors
int Window::getId() {
  return id; 
}

string Window::getName() {
  return name; 
}

string Window::getType() {
  return type; 
}

int Window::getDisplayMode() {
  return displayMode;
}

int Window::getWindowWidth() {
  return windowWidth;
}

int Window::getWindowHeight() {
  return windowHeight;
}

// mutators
void Window::setId(int newId) {
  id = newId;
}

void Window::setName(string newName) {
  name = newName; 
}

void Window::setType(string newType) {
  type = newType;
}

void Window::setDisplayMode(int newDisplayMode) {
  displayMode = newDisplayMode;
}

void Window::setWindowWidth(int newWindowWidth) {
  windowWidth = newWindowWidth;
}

void Window::setWindowHeight(int newWindowHeight) {
  windowHeight = newWindowHeight;
}

void Window::setWindowPosition(int x, int y) {
  this->x = x;
  this->y = y;
}

// actions
void Window::init(){
	glutInitDisplayMode(displayMode);
	glutInitWindowSize(windowWidth, windowHeight); // width, height
	glutInitWindowPosition(x,y);
	glutCreateWindow(name.c_str());
}

void getDisplayFunc() {
  glClearColor(1.0,1.0,1.0,0.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

void Window::display()
{
  glutDisplayFunc(getDisplayFunc);
}