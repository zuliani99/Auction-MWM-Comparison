#include "../include/Auction.h"
#include "../include/BipartiteGraph.h"
#include "../include/AuctionAlgorithm.hpp"


double perform_au(const Graph& graph, Duration& elapsed, int& n_iteration_au, bool verbose)
{
    int n = int(boost::num_vertices(graph) / 2);
    //Weight total_cost_auction = 0;
    std::vector<int> assignments(n);


    //auto t_start = now();
    //auction_algorithm2<Graph, Weight>(graph, Weight((1 / n) * 10'000), n_iteration_au, assignments);
    //elapsed = now() - t_start;

    Auction<Graph, double> auction_problem(n);
    auto t_start = now();
    auction_problem.auction_algorithm(graph, assignments);
    elapsed = now() - t_start;

    std::cout << " Finished \nThe matching is: ";
    for (int bidder = 0; bidder < n; ++bidder)
        std::cout << "(" << bidder << "," << assignments[bidder] << ")";
    std::cout << "\n";

    if (verbose) auction_problem.printProprieties();
    n_iteration_au = auction_problem.getNIterationAu();

    return auction_problem.getTotalCost(graph);
}