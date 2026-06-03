#ifndef GRAPHNODE_H_
#define GRAPHNODE_H_

#include <memory>
#include <string>
#include <vector>

#include "chatbot.h"

// forward declarations
class GraphEdge;
using GraphEdgePtr = std::shared_ptr<GraphEdge>;
using ChatBotPtr = std::shared_ptr<ChatBot>;

class GraphNode : public std::enable_shared_from_this<GraphNode> {
 private:
  //// TODO

  // data handles (owned)
  std::vector<GraphEdgePtr> _childEdges;  // edges to subsequent nodes

  // data handles (not owned)
  std::vector<GraphEdgePtr> _parentEdges;  // edges to preceding nodes
  ChatBotPtr _chatBot;

  //// End of TODO

  // proprietary members
  int _id;
  std::vector<std::string> _answers;

 public:
  // constructor / destructor
  GraphNode(int id);
  ~GraphNode();

  // getter / setter
  int GetID() { return _id; }
  int GetNumberOfChildEdges() { return _childEdges.size(); }
  GraphEdgePtr &GetChildEdgeAtIndex(int index);
  std::vector<std::string> GetAnswers() { return _answers; }
  int GetNumberOfParents() { return _parentEdges.size(); }

  // proprietary functions
  void AddToken(std::string token);  // add answers to list
  void AddEdgeToParentNode(GraphEdgePtr edge);
  void AddEdgeToChildNode(GraphEdgePtr edge);  // TODO

  void MoveChatbotHere(ChatBotPtr newNode);  // TODO

  void MoveChatbotToNewNode(std::shared_ptr<GraphNode> newNode);
};

#endif /* GRAPHNODE_H_ */
