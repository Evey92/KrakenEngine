#pragma once
#include "kraPrerequisitesCore.h"
#include "kraGFXMappings.h"

namespace kraEngineSDK {
  class Device;

  class Texture
  {
   public:
     Texture() = default;
     virtual 
     ~Texture() {}

    virtual void
    createTexture2D(const Device& pDevice, int height, int width) = 0;
    virtual void
    createTexture2D(void* pDevice, int height, int width,
                    GFX_FORMAT::E format, void* bindFlag,
                    GFX_USAGE::E usage,
                    CPU_USAGE::E cpuUsage) = 0;

    virtual bool
    createTexture2DFromFile(const Device&,
                            std::string filename,
                            GFX_FORMAT::E format,
                            GFX_USAGE::E usage = GFX_USAGE::E::kUSAGE_DEFAULT,
                            CPU_USAGE::E  cpuUsage = CPU_USAGE::E::kCPU_ACCESS_READ) = 0;

    virtual void
    setTextureShaderResource(const Device* pDevice,
                               uint32 startSlot,
                               uint32 numViews) = 0;
    virtual void
    releaseTexture() = 0;

  };
}
