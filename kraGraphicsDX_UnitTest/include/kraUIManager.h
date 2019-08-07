#pragma once
#include <windows.h>
#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <kraCamera.h>
#include <kraModel.h>
#include <kraMesh.h>

using namespace kraEngineSDK;

  class UIManager {

  public:

    bool
    initUI(void* hWnd, void* device, void* ctx);

    void
    updateUI(Scene* scene);

    void
    renderUI();

    void
    shutDown();

    void
    showSceneGraph(Scene* sg);

    void
    showInspector(GameObject* gameObj);

    void
    showSceneWindow();

    void
    drawTransform(Transform transform);

#pragma region COMPONENT_UI

    void
    drawCamera(Camera* cam);

#pragma endregion COMPONENT_UI


  };