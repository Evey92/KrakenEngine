#pragma once
#include "kraPrerequisitesCore.h"
#include "kraSceneNode.h"

namespace kraEngineSDK {
  class SceneGraph {

   public:
     SceneGraph() 
     {

       SceneNode* rootNode = new SceneNode();
       m_sceneNodes.push_back(rootNode);

     }
    ~SceneGraph() = default;

    /*
    ** @brief Function to add a new SceneNode at the root node
    ** @param the node to add
    **/
    void 
    setNode(SceneNode* newNode);

    /*
    ** @brief Function to add a new SceneNode as a child of a spec�fic node
    ** @param the node to add
    **/
    void
    setNodeAtChildren(SceneNode* newNode, String childNodeName);

    /*
    ** @brief Function to add a new SceneNode at the root node
    ** @param the node to add
    **/
    SceneNode*
    getNode(int nodeId);

   private:
     
     Vector<SceneNode*> m_sceneNodes;
  };
}