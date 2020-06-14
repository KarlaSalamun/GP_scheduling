//
// Created by karla on 13. 11. 2019..
//

#ifndef PROJEKT_SOLUTION_H
#define PROJEKT_SOLUTION_H

#include <vector>
#include <cstdio>
#include <queue>

using namespace std;

template <typename  T>
class Solution {
    public:
        std::pair<T, T> data;
        double fitness;
        std::pair<double, double> fitness_NSGA;
        int mi;
        std::vector<int> S;
        double d;
        int rank;
        double coev_fitness;
};

#endif //PROJEKT_SOLUTION_H
