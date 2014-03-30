#ifndef _GROUP_H_
#define _GROUP_H_

#include <string>

class Group
{
public:
    Group()
    {
        head = tail = NULL;
    }
    ~Group();
    std::string getName(void)   {   return name;    }
    void setName(std::string str)   {   name = str; }

private:
    std::string name;
    //Implement a vector list here? dubious
    typedef struct structGene
    {
        Gene* next;
        Gene* previous;
        Gene* gene;
    }structGene;
    structGene* head;
    structGene* tail;
};
#endif
