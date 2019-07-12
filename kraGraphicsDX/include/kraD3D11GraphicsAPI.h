#pragma once
#include <kraGraphicsAPI.h>
#include <kraVertex.h>
#include <kraVector4.h>
#include <kraMatrix4.h>
#include <d3d11.h>
#include <windows.h>

#include "kraPrerequisitesGFX.h"
#include "kraD3D11Device.h"
#include "kraD3D11RenderTargetView.h"
#include "kraD3D11Texture.h"
#include "kraD3D11DepthStencil.h"
#include "kraD3D11DepthStencylView.h"
#include "kraD3D11Viewport.h"
#include "kraD3D11Shader.h"
#include "kraD3D11VertexShader.h"
#include "kraD3D11InputLayout.h"
#include "kraD3D11PixelShader.h"
#include "kraD3D11VertexBuffer.h"
#include "kraD3D11IndexBuffer.h"
#include "kraD3D11ConstantBuffer.h"
#include "ConstantBufferMatrices.h"
#include "kraD3D11ShaderResourceView.h"
#include "kraD3D11Sampler.h"



namespace kraEngineSDK {
  class Matrix4;

  class KRA_UTILGFX_EXPORT GraphicsAPIDX : public GraphicsAPI
  {
   public:
     GraphicsAPIDX() = default;
    ~GraphicsAPIDX() {}
    
    Device*
    initializeAPI(void* g_hWnd);
    void 
    Render();
    void
    Cleanup();

    DeviceDX m_device;
    
    Matrix4 m_World;
    Matrix4 m_View;
    Matrix4 m_Projection;
    Vector4 m_meshColor = Vector4(.7f, .7f, .7f, 1.0f);
  };
}
