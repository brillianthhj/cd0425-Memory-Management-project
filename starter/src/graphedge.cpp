#include "graphedge.h"

#include "graphnode.h"

GraphEdge::GraphEdge(int id) { _id = id; }

void GraphEdge::SetChildNode(GraphNodeWPtr childNode) {
  _childNode = childNode;
}

void GraphEdge::SetParentNode(GraphNodeWPtr parentNode) {
  _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token) { _keywords.push_back(token); }