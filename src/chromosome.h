#ifndef _CHROMOSOME_H_
#define _CHROMOSOME_H_

#include <iostream>

using namespace std;

namespace Genetic
{
class Chromosome
{
public:
    // Constructors
    Chromosome();
    //Destructor
    ~Chromosome();

    // Add genes/groups to chromosome, decide on heirarchy l8r
    bool addGene(Gene* newGene);

private:

protected:

};

}
#endif
