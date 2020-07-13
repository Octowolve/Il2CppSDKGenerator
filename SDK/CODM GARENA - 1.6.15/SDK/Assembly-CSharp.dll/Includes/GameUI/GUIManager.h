#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GUIManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GUIManager"));
	}

	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadGUIWindowsAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_UISceneObject() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DEA64))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DEF14))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GUIManager*, float))(Il2CppBase() + 0x22DF0B8))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DF18C))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DF234))(this);
	}
	template <typename T = void> T UnRegisterUIScene(uintptr_t InScene) {
		return ((T (*)(GUIManager*, uintptr_t))(Il2CppBase() + 0x22DF354))(this, InScene);
	}
	template <typename T = void> T RegisterUIScene(uintptr_t inScene) {
		return ((T (*)(GUIManager*, uintptr_t))(Il2CppBase() + 0x22DF408))(this, inScene);
	}
	template <typename T = uintptr_t> T LoadGUIWindowsAsset(uintptr_t eAsset, bool bAddUIRoot, uintptr_t parentUIPanel) {
		return ((T (*)(GUIManager*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x22DF4D0))(this, eAsset, bAddUIRoot, parentUIPanel);
	}
	template <typename T = void> T ProcessEvent(uintptr_t Msg) {
		return ((T (*)(GUIManager*, uintptr_t))(Il2CppBase() + 0x22DF808))(this, Msg);
	}
	template <typename T = void> T ProcessZoneEvent(uintptr_t Msg) {
		return ((T (*)(GUIManager*, uintptr_t))(Il2CppBase() + 0x22DF8C4))(this, Msg);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(GUIManager*, bool))(Il2CppBase() + 0x22DF980))(this, pause);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DFAA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GUIManager*, float))(Il2CppBase() + 0x22DFAB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DFAB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(GUIManager*))(Il2CppBase() + 0x22DFAC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(GUIManager*, bool))(Il2CppBase() + 0x22DFAC8))(this, P0);
	}

};

}
