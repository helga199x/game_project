#include <string>
#include <GL/freeglut.h> 

using namespace std;

class Window {
  public:
    Window();
    int getId();
    string getName(); 
    string getType();
    int getDisplayMode();
    int getWindowWidth();
    int getWindowHeight();

    void setId(int);
    void setName(string); 
    void setType(string); 
    void setDisplayMode(int);
    void setWindowWidth(int);
    void setWindowHeight(int);
    void setWindowPosition(int, int);

    void init();
    void display();

  private: 
    int id;
    string name;
    string type;
    int displayMode;
    int windowWidth, windowHeight, x, y;

    static int windowCounter;
};