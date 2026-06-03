#ifndef GRAPHEDGE_H_
#define GRAPHEDGE_H_

#include <memory>
#include <string>
#include <vector>

class GraphNode;  // forward declaration
using GraphNodeWPtr = std::weak_ptr<GraphNode>;

class GraphEdge {
 private:
  // data handles (not owned)
  GraphNodeWPtr _childNode;
  GraphNodeWPtr _parentNode;

  // proprietary members
  int _id;
  std::vector<std::string>
      _keywords;  // list of topics associated with this edge

 public:
  // constructor / desctructor
  GraphEdge(int id);

  // getter / setter
  int GetID() { return _id; }
  void SetChildNode(GraphNodeWPtr childNode);
  void SetParentNode(GraphNodeWPtr parentNode);
  GraphNodeWPtr& GetChildNode() { return _childNode; }
  std::vector<std::string> GetKeywords() { return _keywords; }

  // proprietary functions
  void AddToken(std::string token);
};

#endif /* GRAPHEDGE_H_ */