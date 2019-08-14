#pragma once
#include "kraPrerequisitesPBRenderer.h"

namespace kraEngineSDK {

  class KRA_RENDERER_EXPORT DeferredPBRenderer
  {
   public:

    DeferredPBRenderer() = default;
    ~DeferredPBRenderer() = default;

    void
    initialize();

    void
    render();

   private:

     void
     gBufferSetup();

     void
     geometryPass();

     void
     lightPass();

     void
     saoPass();

     void 
     postProcessPass();

     void
     forwardPass();

     void
     iblSetup();



  };

}