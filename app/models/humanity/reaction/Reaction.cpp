#include "Reaction.h"

// accsessors
char* Reaction::get_id() {
  return id; 
}

string Reaction::get_name() {
  return name; 
}

string Reaction::get_type() {
  return type; 
}

int Reaction::get_duration_sec() {
  return Reaction::duration_sec; 
}

// mutators
void Reaction::set_id(char* new_id) {
  id = new_id;
}

void Reaction::set_name(string new_name) {
  name = new_name; 
}

void Reaction::set_type(string new_type) {
  type = new_type;
}

void Reaction::set_duration_sec(int new_duration_sec) {
  duration_sec = new_duration_sec;
}

void Reaction::set_action(string new_action) {
  action = new_action;
}

void Reaction::set_time_occurred(time_t new_time_occurred) {
  time_occurred = new_time_occurred;
}