#ifndef _GROUP_H_
#define _GROUP_H_

#include <string>
#include <vector>

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
    std::vector<Gene> geneGroup;
};
#endif
