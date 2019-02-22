#pragma once
#include "kraPrerequisitesCore.h"


namespace kraEngineSDK {

  class GraphicsAPI
  {
  public:

    GraphicsAPI() = default;
    virtual
     ~GraphicsAPI() {}

    virtual bool
    initializeAPI(void* g_hWnd) = 0;

    virtual void
    Render() = 0;

    virtual void
    Cleanup() = 0;


  };
}