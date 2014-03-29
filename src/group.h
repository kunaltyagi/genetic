#ifndef _GROUP_H_
#define _GROUP_H_

class Group
{
public:
    Group();
    ~Group();

private:
    //Implement a vector list here? dubious
    Gene* start;
    Gene* end;
    Gene* next;
    Gene* previous;

#endif
