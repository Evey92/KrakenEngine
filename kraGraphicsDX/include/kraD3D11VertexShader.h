#pragma once
#include "kraPrerequisitesGFX.h"
#include "kraD3D11GraphicsBuffer.h"
#include "kraD3D11Shader.h"

namespace kraEngineSDK {
  class KRA_UTILGFX_EXPORT VertexShader :
    public Shader
  {
  public:
    VertexShader() = default;
    ~VertexShader() {};

    HRESULT
    compileVertexShader(const wchar_t* fileName,
                        const char* entryPoint);

    HRESULT
    createVertexShader(ID3D11Device* pDevice);

    void cleanShader();
    ID3DBlob* m_blob;
    ID3D11VertexShader* m_pVertexShader;
  };
}