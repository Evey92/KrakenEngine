// kraInputManager.cpp : Defines the entry point for the application.
//
#include "kraInputManagerGI.h"
#include "kraInputMappings.h"
namespace kraEngineSDK {


  void
  InputManagerGI::setUpInputManager(uint32 width, uint32 height) {
    m_inputManager.SetDisplaySize(width, height);
    gainput::InputMap newmap(m_inputManager);
  }

  //TODO: Create a proper Mappings file on kraCore to create a specific device
  void
    InputManagerGI::mapBoolDevice(uint32 userButton,
                               INPUT_DEVICE::E device,
                               uint32 key) 
  {
    gainput::InputMap map(m_inputManager);
    uint32 devID;

   switch(device)
   {

    case INPUT_DEVICE::kraKEYBOARD:
      devID = m_inputManager.CreateDevice<gainput::InputDeviceKeyboard>();
    case INPUT_DEVICE::kraGAMEPAD:
      devID = m_inputManager.CreateDevice<gainput::InputDevicePad>();
    case INPUT_DEVICE::kraTOUCH:
      devID = m_inputManager.CreateDevice<gainput::InputDeviceTouch>();

      map.MapBool(userButton, devID, key);
   }
  }

  void
    InputManagerGI::mapFloatDevice(uint32 userButton,
      INPUT_DEVICE::E device,
      uint32 key)
  {
    gainput::InputMap map(m_inputManager);
    
    uint32 devID;

    switch (device)
    {
    case INPUT_DEVICE::kraMOUSE:
      devID = m_inputManager.CreateDevice<gainput::InputDeviceMouse>();

      map.MapBool(userButton, devID, key);

    }
  }

  void
    InputManagerGI::handleMessage(MSG& msg) {

    m_inputManager.HandleMessage(msg);
  }

  
}
