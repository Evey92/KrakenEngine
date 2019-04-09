#pragma once
#include <kraRenderTargetView.h>

#include "kraPrerequisitesGFX.h"

namespace kraEngineSDK {

  class Device;
  class SwapChain;
  class Texture;

  class KRA_UTILGFX_EXPORT RenderTargetViewDX : public RenderTargetView
  {
    public:

    RenderTargetViewDX() = default;
    ~RenderTargetViewDX() {}

    bool
    createRenderTargetView(const Device& pDevice);
    bool
    createRenderTargetView(const Device& pDevice, Texture* pTexture);
    void
    setRenderTarget(const Device& pDevice, uint32 numViews);
    void
    setRenderTarget(const Device& pDevice, const DepthStencylView& pDSV, uint32 numViews);
    void 
    cleanRTV();
    void
    clearRenderTargetView(Device* pDevice, Vector4 clearColor);
    //ID3D11RenderTargetView* m_pRenderTargetView;
    Vector<ID3D11RenderTargetView*> m_viewsVec;
  };
}
