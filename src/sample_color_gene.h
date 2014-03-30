#ifndef _SAMPLE_COLOR_GENE_H_
#define _SAMPLE_COLOR_GENE_H_

#include "gene.h"

class ColotAlle:public gene
{
public:

private:

protected:
    void feature(void)
    {
        std::cout<<"Dominant/Recessive, Red/White color";
        return;
    }
};
#endif
