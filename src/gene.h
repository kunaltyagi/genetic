/**
 * @file gene.h
 * @class Gene
 * @brief Methods for gene.cpp
 * @detail Framework for genetic algorithm, feature<sequence<gene<group<chromosome<smthg
 *         Current status @TODO
 */

#ifndef _GENE_H_
#define _GENE_H_

#include <iostream>

using namespace std;

/**
 * @brief Genetic namespace for all classes, so they don't interfere with my other projects, coming up
 */
namespace Genetic
{
/**
 * @brief Gene class, basic unit of information in Genetic algorithms
 * @detail Genes currently contain only one feature. Plan to include different features for different classes.
 *         Or bundle up genes in a superclass, to have complex features.
 *         Class contains a feature, a heuristic to calculate 'goodness' based on some inputs, to be decided,
 *         and an act method to showcase its response to a situation
 */
class Gene
{
public:
    // Constructors
    Gene();
    //Destructor
    ~Gene();

    //enums
    enum Trait  { DOMINANT, RECESSESIVE };
    enum Type   { DNA, RNS };
    enum Bit    { T, G, A, C, U };  //all even combine, all odd combine, T not used if RNA is on
    void addBit(Bit newBit)
    {
        _sequence.push_back(_BitToChar[newBit]);
    }
    std::string getSequence()
    {
        return _sequence;
    }
private:
    static const char _BitToChar[6] = "TGACU";
    Trait _dominantNature;
    Type _chemicalComposition;
    bool _standAlone;    ///< For checking if the gene is single, or part of a network, maybe something to make the network
    std::string _sequence;

protected:
    // property of gene
    virtual void feature() = 0;
    // how good is it for some input
    virtual double heuristic() = 0;
    // how will it act for some input
    virtual void act() = 0;

};

}
#endif
