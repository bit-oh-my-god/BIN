// using boost

#include <boost/graph/adjacency_list.hpp>
#include <array>
#include <utility>
#include <iostream>

#ifndef PRE_DEFINTION_H
#define PRE_DEFINTION_H

typedef struct vertex_property {
    int supplyOrDemand;
}vp;

typedef struct edege_property {
    int capacity;
    int cost;
    int flow;

}ep;

typedef boost::adjacency_list<boost::setS, boost::vecS, boost::directedS, vp, ep, boost::no_property>graph;

class solution {
    private:


    public:
        solution();
        void run();
        virtual ~solution();
};

void solution::run() {

    enum vertices { A, B, C, D, E, F};

    std::array<std::pair<int, int>, 9> edges{{
        std::make_pair(A, B),
            std::make_pair(A, C),
            std::make_pair(B, C),
            std::make_pair(C, D),
            std::make_pair(C, F),
            std::make_pair(D, F),
            std::make_pair(F, D),
            std::make_pair(D, E),
            std::make_pair(F, E)
    }};

   std::array<ep, 9> edges_props{{
        {3, 1, 0},
            {3, 4, 0},
            {5, 2, 0},
            {1, 3, 0},
            {5, 4, 0},
            {3, 3, 0},
            {3, 3, 0},
            {2, 4, 0},
            {4, 2, 0},
    }};

    std::array<vp, 6> vertices_props{{
        {5},
            {0},
            {0},
            {0},
            {-5},
            {0},
    }};

    graph g{edges.begin(), edges.end(), edges_props.begin(), 9};
    std::cout << "in solution: " << std::endl;
    std::cout << "num of vertices is : " << boost::num_vertices(g) << std::endl;
    std::cout << "num of edges is : " << boost::num_edges(g) << std::endl;

}

#endif /* PRE_DEFINTION_H */
