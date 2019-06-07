#include "kraGameObject.h"

namespace kraEngineSDK {

  GameObject::GameObject() {
    m_transform.Position = Vector3(0.0f, 0.0f, 0.0f);
    m_transform.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    m_transform.Scale = Vector3(1.0f, 1.0f, 1.0f);
  }

  void
  GameObject::addComponet(Component* newComponent) {
    m_componentsVec.push_back(newComponent);
  }

}