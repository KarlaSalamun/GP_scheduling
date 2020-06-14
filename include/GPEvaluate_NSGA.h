//
// Created by karla on 28. 04. 2020..
//

#ifndef GP_SCHEDULING_GPEVALUATE_NSGA_H
#define GP_SCHEDULING_GPEVALUATE_NSGA_H

#include <utility>
#include "GPEvaluateHeuristic.h"

class GPEvaluate_NSGA : public GPEvaluateHeuristic {
public:
    virtual ~GPEvaluate_NSGA() = default;

    GPEvaluate_NSGA( int task_number ) : GPEvaluateHeuristic( task_number ) {}
    void get_value_NSGA ( TreeSolution<AbstractNode *> &solution, std::pair<double, double> &fitness, bool display );
    void initialize();
    void cleanup();

private:
    double compute_mean_fitness( std::vector<double> values );
    std::vector<std::vector<Task *>> test_sets;
};

#endif //GP_SCHEDULING_GPEVALUATE_NSGA_H
