### This is a implement for this [paper](https://www.researchgate.net/publication/266993235_Interactive_tool_for_the_successive_shortest_paths_algorithm_in_solving_the_minimum_cost_flow_problem)

###
version of BOOST I was using is 1.58, the latest version is 1.62 which have more example in a boost/lib/graph/test path
##### Reference 
- [book](https://github.com/richelbilderbeek/BoostGraphTutorial)
see "building graphs with bundled edges and verties"
- [Dijkstra](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)
- [Bellam-Ford](https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm)
- [Mini-cost-flow](https://en.wikipedia.org/wiki/Minimum-cost_flow_problem)
- [boost-BGL](http://theboostcpplibraries.com/boost.graph-vertices-and-edges)
- [boost-design](http://stackoverflow.com/questions/29955664/designing-around-bundled-properties-in-the-boost-graph-library)
- [boost-property-map](http://www.boost.org/doc/libs/1_53_0/libs/graph/doc/using_property_maps.html)
- [boost-using-adjacency-list](http://www.boost.org/doc/libs/1_55_0/libs/graph/doc/using_adjacency_list.html#sec:adjacency-list-properties)
see "Internal Properties" and [tags](http://www.boost.org/doc/libs/1_55_0/libs/graph/doc/PropertyTag.html)
- [boost-bundled-properties](http://www.boost.org/doc/libs/1_55_0/libs/graph/doc/bundles.html)
"There is currently no support for creating property maps from the bundled properties of a graph."
- [boost-successive-shortest-path-nonnegative-weights](http://www.boost.org/doc/libs/1_60_0/libs/graph/doc/successive_shortest_path_nonnegative_weights.html)
- [example](fossies.org/linux/boost/libs/graph/test/min_cost_max_flow_utils.hpp)
- [bgl_named_params](www.boost.org/doc/libs/1_58_0/libs/graph/doc/bgl_named_params.html)

##### There is a LEMON cpp library who implement the solution of minimum-cost-flow-problem without succesive shortest path
- [LEMON](http://lemon.cs.elte.hu/pub/doc/1.2.3/a00534.html)
#### Reference for cmake and gtest
- [Cmake org](https://cmake.org/cmake/help/v3.4/command/add_executable.html?highlight=add_executable)
- [Cmake usful variant](https://cmake.org/Wiki/CMake_Useful_Variables)
- [gtest](https://github.com/google/googletest)
- [gtest + cmake example](https://github.com/dmonopoly/gtest-cmake-example)

#### code
- 1
note get_graph in pre_definition.hpp[ref](http://stackoverflow.com/questions/13502421/candidate-template-ignored-substitution-failure-compiler-error) [ref](theboostcpplibraries.com/boost.graph-algorithms)_
