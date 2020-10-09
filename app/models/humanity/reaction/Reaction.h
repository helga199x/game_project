#include <string>
#include <ctime>

using namespace std;

class Reaction {
  public:
    char* get_id();
    string get_name(); 
    string get_type(); 
    int get_duration_sec();
    string get_action();
    time_t set_time_occurred();

    void set_id(char*);
    void set_name(string); 
    void set_type(string); 
    void set_duration_sec(int);
    void set_action(string);
    void set_time_occurred(time_t); 

    virtual string present_reaction();
    
  private: 
    char* id;
    string name;
    string type;
    int duration_sec;
    string action;
    time_t time_occurred;
};