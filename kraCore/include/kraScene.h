#pragma once
#include "kraPrerequisitesCore.h"
#include "kraSceneGraph.h"

namespace kraEngineSDK {
  class KRA_CORE_EXPORT Scene
  {
   public:
     
     Scene(int buildIndex, String name)
     : m_buildIndex(buildIndex), m_name(name) {}
     
     Scene(String name)
     : m_name(name) {}

    ~Scene() = default;

    
#pragma region PUBLIC_METHODS
    void
    initialize();

    void
    Scene::addNode(SceneNode* node);

    void
      addEmptyNode();

#pragma endregion PUBLIC_METHODS

#pragma region PRIVATE_MEMBERS
    
    SceneGraph* m_sceneGraph;

#pragma endregion PRIVATE_MEMBERS

#pragma region PUBLIC_MEMBERS

    int m_buildIndex;
    int m_nodes = 0;
    String m_name;
    String m_path;
    bool m_isDirty = true;
    bool m_isLoaded;
#pragma endregion PUBLIC_MEMBERS
  };
}