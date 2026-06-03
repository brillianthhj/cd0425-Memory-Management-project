#ifndef CHATLOGIC_H_
#define CHATLOGIC_H_

#include <memory>
#include <string>
#include <vector>
// #include "chatgui.h"  // Removed for CLI decoupling

// forward declarations
class ChatBot;
class GraphEdge;
class GraphNode;
class ChatBotPanelDialog;  // Forward declaration for GUI compatibility
                           // (deprecated)
using ChatBotPtr = std::shared_ptr<ChatBot>;

class ChatLogic {
 private:
  // data handles (owned)
  std::vector<std::shared_ptr<GraphNode>> _nodes;  // TODO(fix)
  std::vector<std::shared_ptr<GraphEdge>> _edges;

  // data handles (not owned)
  GraphNode *_currentNode;
  ChatBotPtr _chatBot;
  ChatBotPanelDialog *_panelDialog;

  // proprietary type definitions
  typedef std::vector<std::pair<std::string, std::string>> tokenlist;

  // proprietary functions
  template <typename T>
  void AddAllTokensToElement(std::string tokenID, tokenlist &tokens,
                             T &element);

 public:
  // constructor / destructor
  ChatLogic();
  ~ChatLogic();

  // getter / setter
  void SetPanelDialogHandle(ChatBotPanelDialog *panelDialog);
  void SetChatbotHandle(ChatBotPtr chatbot);

  // proprietary functions
  void LoadAnswerGraphFromFile(std::string filename);
  void SendMessageToChatbot(std::string message);
  virtual void SendMessageToUser(std::string message);
  bool IsGraphLoaded() const;
};

#endif /* CHATLOGIC_H_ */