#include "graphnode.h"

#include "chatbot.h"
#include "graphedge.h"

GraphNode::GraphNode(int id) { _id = id; }

GraphNode::~GraphNode() {
  // leave as-is
}

void GraphNode::AddToken(std::string token) { _answers.push_back(token); }

void GraphNode::AddEdgeToParentNode(GraphEdgePtr edge) {
  _parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(GraphEdgePtr edge) {
  _childEdges.push_back(edge);  // TODO(fix)
}

void GraphNode::MoveChatbotHere(ChatBotPtr chatbot) {
  _chatBot = std::move(chatbot);                 // TODO(fix)
  _chatBot->SetCurrentNode(shared_from_this());  // TODO
}

void GraphNode::MoveChatbotToNewNode(GraphNodeSPtr newNode) {
  newNode->MoveChatbotHere(std::move(_chatBot));  // TODO(fix)
}

GraphEdgePtr& GraphNode::GetChildEdgeAtIndex(int index) {
  return _childEdges[index];  // TODO(fix)
}