#include "graphnode.h"

#include "chatbot.h"
#include "graphedge.h"

GraphNode::GraphNode(int id) { _id = id; }

GraphNode::~GraphNode() {
  // leave as-is
}

void GraphNode::AddToken(std::string token) { _answers.push_back(token); }

void GraphNode::AddEdgeToParentNode(GraphEdge *edge) {
  _parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(std::unique_ptr<GraphEdge> edge) {
  _childEdges.push_back(edge);  // TODO
}

void GraphNode::moveChatbotHere(ChatBot chatbot) {
  _chatBot = chatbot;              // TODO
  _chatBot->SetCurrentNode(this);  // TODO
}

void GraphNode::MoveChatbotToNewNode(GraphNode *newNode) {
  newNode->moveChatbotHere(std::move(_chatBot));  // TODO
}

GraphEdge *GraphNode::GetChildEdgeAtIndex(int index) {
  return _childEdges[index];  // TODO
}