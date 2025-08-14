#pragma once

#include <vector>

class Graph {
 public:
  /**
   * @brief Returns the number of vertices in the graph.
   */
  int V() const;

  /**
   * @brief Returns the number of edges in the graph.
   */
  int E() const;

  /**
   * Tests whether there is an edge from node x to node y.
   */
  bool adjacent(int x, int y) const;

  /**
   * @brief Lists all nodes y such that there is an edge from x to y.
   */
  std::vector<int> neighbors(int x) const;

  /**
   * @brief Adds to G the edge from x to y, if it is not there.
   */
  void add(int x, int y);

  /**
   * @brief Removes the edge from x to y, if it is there.
   */
  void remove(int x, int y);

  /**
   * @brief Returns the value associated with the node x.
   */
  int get_node_value(int x) const;

  /**
   * @brief Sets the value associated with the node x to a.
   */
  void set_node_value(int x, int value);

  /**
   * @brief Returns the value associated to the edge (x,y).
   */
  int get_edge_value(int x, int y) const;

  /**
   * @brief Sets the value associated to the edge (x,y) to v.
   */
  void set_edge_value(int x, int y, int value);
};
