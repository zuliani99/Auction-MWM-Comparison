#ifndef _Auction_H
#define _Auction_H

#include "Graph.h"

void auction_algorithm(Graph& graph, long long& time_execution, float& total_cost_auction);
//void auction_algorithm(std::vector<std::vector<float>>* cost_matrix, const int* n_bidders_items, long long* time_execution, float *total_cost_auction);


/*template<typename Class>
std::unordered_map<int, Class> retunr_n(int n) {
    std::unordered_map<int, Class> ret;
    for (int i = 0; i < n; ++i) {
        ret.insert({ i, Class() });
    }
    return ret;
}*/

#endif