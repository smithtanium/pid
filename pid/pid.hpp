#ifndef PID_H
#define PID_H

#include <ctime>

class PID
{
  public:
    //default constructors	  
    PID();
    //parameterized constructors
    PID(double value, double Kp, double Ki, double Kd)
    //copy constructor
    PID(const PID& other); 
    //destructor
    ~PID();
   //move constructor
    PID(PID&& other);
    //copy assignment operator
    PID& operator=(const PID other);
    //move assignment operator
    PID& operator=(PID& other);

    //setters
    void set_Kp(double new_Kp);
    void set_Ki(double new_Ki);
    void set_Kd(double new_Kd);
    void update_value(double new_value);    
    //getters
    double get_value();
    double get_error();    

  protected:
    double Kp_;
    double Ki_;
    double Kd_;

    double value_;
    time_t last_time_;  

};
