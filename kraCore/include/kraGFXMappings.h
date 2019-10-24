#pragma once
#pragma once
#include "kraPrerequisitesCore.h"
#include <kraCommonTypes.h>

namespace kraEngineSDK {

  namespace VERTEX_FORMAT {
    enum E {
      kraFLOATR = 0,
      kraFLOATRG,
      kraFLOATRGB,
      kraFLOATRGBA,
      kraCOLOR,
      kraSHORTR,
      kraSHORTRG,
      kraSHORTRGB,
      kraSHORTRGBA,
      kraUBYTERGBA,
    };
  }

  namespace GFX_FORMAT {
    enum class E {
      kFORMAT_UNKNOWN = 0,
      kFORMAT_R32G32B32A32_TYPELESS = 1,
      kFORMAT_R32G32B32A32_FLOAT = 2,
      kFORMAT_R32G32B32A32_UINT = 3,
      kFORMAT_R32G32B32A32_SINT = 4,
      kFORMAT_R32G32B32_TYPELESS = 5,
      kFORMAT_R32G32B32_FLOAT = 6,
      kFORMAT_R32G32B32_UINT = 7,
      kFORMAT_R32G32B32_SINT = 8,
      kFORMAT_R16G16B16A16_TYPELESS = 9,
      kFORMAT_R16G16B16A16_FLOAT = 10,
      kFORMAT_R16G16B16A16_UNORM = 11,
      kFORMAT_R16G16B16A16_UINT = 12,
      kFORMAT_R16G16B16A16_SNORM = 13,
      kFORMAT_R16G16B16A16_SINT = 14,
      kFORMAT_R32G32_TYPELESS = 15,
      kFORMAT_R32G32_FLOAT = 16,
      kFORMAT_R32G32_UINT = 17,
      kFORMAT_R32G32_SINT = 18,
      kFORMAT_R32G8X24_TYPELESS = 19,
      kFORMAT_D32_FLOAT_S8X24_UINT = 20,
      kFORMAT_R32_FLOAT_X8X24_TYPELESS = 21,
      kFORMAT_X32_TYPELESS_G8X24_UINT = 22,
      kFORMAT_R10G10B10A2_TYPELESS = 23,
      kFORMAT_R10G10B10A2_UNORM = 24,
      kFORMAT_R10G10B10A2_UINT = 25,
      kFORMAT_R11G11B10_FLOAT = 26,
      kFORMAT_R8G8B8A8_TYPELESS = 27,
      kFORMAT_R8G8B8A8_UNORM = 28,
      kFORMAT_R8G8B8A8_UNORM_SRGB = 29,
      kFORMAT_R8G8B8A8_UINT = 30,
      kFORMAT_R8G8B8A8_SNORM = 31,
      kFORMAT_R8G8B8A8_SINT = 32,
      kFORMAT_R16G16_TYPELESS = 33,
      kFORMAT_R16G16_FLOAT = 34,
      kFORMAT_R16G16_UNORM = 35,
      kFORMAT_R16G16_UINT = 36,
      kFORMAT_R16G16_SNORM = 37,
      kFORMAT_R16G16_SINT = 38,
      kFORMAT_R32_TYPELESS = 39,
      kFORMAT_D32_FLOAT = 40,
      kFORMAT_R32_FLOAT = 41,
      kFORMAT_R32_UINT = 42,
      kFORMAT_R32_SINT = 43,
      kFORMAT_R24G8_TYPELESS = 44,
      kFORMAT_D24_UNORM_S8_UINT = 45,
      kFORMAT_R24_UNORM_X8_TYPELESS = 46,
      kFORMAT_X24_TYPELESS_G8_UINT = 47,
      kFORMAT_R8G8_TYPELESS = 48,
      kFORMAT_R8G8_UNORM = 49,
      kFORMAT_R8G8_UINT = 50,
      kFORMAT_R8G8_SNORM = 51,
      kFORMAT_R8G8_SINT = 52,
      kFORMAT_R16_TYPELESS = 53,
      kFORMAT_R16_FLOAT = 54,
      kFORMAT_D16_UNORM = 55,
      kFORMAT_R16_UNORM = 56,
      kFORMAT_R16_UINT = 57,
      kFORMAT_R16_SNORM = 58,
      kFORMAT_R16_SINT = 59,
      kFORMAT_R8_TYPELESS = 60,
      kFORMAT_R8_UNORM = 61,
      kFORMAT_R8_UINT = 62,
      kFORMAT_R8_SNORM = 63,
      kFORMAT_R8_SINT = 64,
      kFORMAT_A8_UNORM = 65,
      kFORMAT_R1_UNORM = 66,
      kFORMAT_R9G9B9E5_SHAREDEXP = 67,
      kFORMAT_R8G8_B8G8_UNORM = 68,
      kFORMAT_G8R8_G8B8_UNORM = 69,
      kFORMAT_BC1_TYPELESS = 70,
      kFORMAT_BC1_UNORM = 71,
      kFORMAT_BC1_UNORM_SRGB = 72,
      kFORMAT_BC2_TYPELESS = 73,
      kFORMAT_BC2_UNORM = 74,
      kFORMAT_BC2_UNORM_SRGB = 75,
      kFORMAT_BC3_TYPELESS = 76,
      kFORMAT_BC3_UNORM = 77,
      kFORMAT_BC3_UNORM_SRGB = 78,
      kFORMAT_BC4_TYPELESS = 79,
      kFORMAT_BC4_UNORM = 80,
      kFORMAT_BC4_SNORM = 81,
      kFORMAT_BC5_TYPELESS = 82,
      kFORMAT_BC5_UNORM = 83,
      kFORMAT_BC5_SNORM = 84,
      kFORMAT_B5G6R5_UNORM = 85,
      kFORMAT_B5G5R5A1_UNORM = 86,
      kFORMAT_B8G8R8A8_UNORM = 87,
      kFORMAT_B8G8R8X8_UNORM = 88,
      kFORMAT_R10G10B10_XR_BIAS_A2_UNORM = 89,
      kFORMAT_B8G8R8A8_TYPELESS = 90,
      kFORMAT_B8G8R8A8_UNORM_SRGB = 91,
      kFORMAT_B8G8R8X8_TYPELESS = 92,
      kFORMAT_B8G8R8X8_UNORM_SRGB = 93,
      kFORMAT_BC6H_TYPELESS = 94,
      kFORMAT_BC6H_UF16 = 95,
      kFORMAT_BC6H_SF16 = 96,
      kFORMAT_BC7_TYPELESS = 97,
      kFORMAT_BC7_UNORM = 98,
      kFORMAT_BC7_UNORM_SRGB = 99,
      kFORMAT_AYUV = 100,
      kFORMAT_Y410 = 101,
      kFORMAT_Y416 = 102,
      kFORMAT_NV12 = 103,
      kFORMAT_P010 = 104,
      kFORMAT_P016 = 105,
      kFORMAT_420_OPAQUE = 106,
      kFORMAT_YUY2 = 107,
      kFORMAT_Y210 = 108,
      kFORMAT_Y216 = 109,
      kFORMAT_NV11 = 110,
      kFORMAT_AI44 = 111,
      kFORMAT_IA44 = 112,
      kFORMAT_P8 = 113,
      kFORMAT_A8P8 = 114,
      kFORMAT_B4G4R4A4_UNORM = 115,

      kFORMAT_P208 = 130,
      kFORMAT_V208 = 131,
      kFORMAT_V408 = 132,
    };
  }
#pragma region BUFFER_USAGE

  namespace GFX_USAGE {
    enum class E {
      kUSAGE_DEFAULT = 0,
      kUSAGE_IMMUTABLE,
      kUSAGE_DYNAMIC,
      kUSAGE_STAGING,
    };
  }

  namespace CPU_USAGE {
    enum class E {
      kCPU_ACCESS_WRITE = 0x10000L,
      kCPU_ACCESS_READ = 0x20000L,
    };
  }

#pragma endregion

#pragma region RASTERIZER_DESCRIPTOR

  namespace FILL_MODE {
    enum E {
      kFILL_WIREFRAME = 2,
      kFILL_SOLID = 3
    };
  }

  namespace CULL_MODE {
    enum E {
      kCULL_NONE = 1,
      kCULL_FRONT = 2,
      kCULL_BACK = 3
    };
  }

#pragma endregion RASTERIZER_DESCRIPTOR

#pragma region SAMPLER_DESCRIPTOR

  namespace SAMPLER_FILTER {
    enum E {
      kFILTER_MIN_MAG_MIP_POINT = 0,
      kFILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
      kFILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
      kFILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
      kFILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
      kFILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
      kFILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
      kFILTER_MIN_MAG_MIP_LINEAR = 0x15,
      kFILTER_ANISOTROPIC = 0x55,
      kFILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
      kFILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
      kFILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
      kFILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
      kFILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
      kFILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
      kFILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
      kFILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
      kFILTER_COMPARISON_ANISOTROPIC = 0xd5,
      kFILTER_MINIMUM_MIN_MAG_MIP_POINT = 0x100,
      kFILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x101,
      kFILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x104,
      kFILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x105,
      kFILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x110,
      kFILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x111,
      kFILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x114,
      kFILTER_MINIMUM_MIN_MAG_MIP_LINEAR = 0x115,
      kFILTER_MINIMUM_ANISOTROPIC = 0x155,
      kFILTER_MAXIMUM_MIN_MAG_MIP_POINT = 0x180,
      kFILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x181,
      kFILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x184,
      kFILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x185,
      kFILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x190,
      kFILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x191,
      kFILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x194,
      kFILTER_MAXIMUM_MIN_MAG_MIP_LINEAR = 0x195,
      kFILTER_MAXIMUM_ANISOTROPIC = 0x1d5
    };
  }

  namespace TEXTURE_ADDRESS_MODE {
    enum E {
      kTEXTURE_ADDRESS_WRAP = 1,
      kTEXTURE_ADDRESS_MIRROR = 2,
      kTEXTURE_ADDRESS_CLAMP = 3,
      kTEXTURE_ADDRESS_BORDER = 4,
      kTEXTURE_ADDRESS_MIRROR_ONCE = 5
    };
  }

#pragma endregion SAMPLER_DESCRIPTOR

}