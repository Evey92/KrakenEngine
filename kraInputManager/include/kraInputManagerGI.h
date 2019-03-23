#pragma once
#include <kraCommonTypes.h>
#include <gainput/gainput.h>

#include "kraPrerequisitesInput.h"

namespace kraEngineSDK {
  class KRA_UTILINPUT_EXPORT InputManagerGI
  {

   public:

     InputManagerGI() = default;
     ~InputManagerGI() {};
     
     void
     setUpInputManagerGI(uint32 width, uint32 height);
    

    //TODO: Create a proper Mappings file on kraCore to create a specific device
    //void
    //mapBoolDevice(uint32 devID, INPUT_DEVICE::E device, uint32 key);
    ///*void
    //mapFloatDevice(uint32 devID, INPUT_DEVICE::E device, uint32 key);*/
    //void
    //handleMessage(MSG& msg);

    //gainput::InputManager m_inputManager;

  };
}