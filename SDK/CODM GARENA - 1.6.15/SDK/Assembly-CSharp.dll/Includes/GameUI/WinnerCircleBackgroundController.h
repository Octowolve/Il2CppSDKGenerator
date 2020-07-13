#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WinnerCircleBackgroundController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WinnerCircleBackgroundController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBGTextureFromMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A31950))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A319F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A31A90))(this);
	}
	template <typename T = void> T InitBG() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A31C50))(this);
	}
	template <typename T = uintptr_t> T GetBGTextureFromMapId(int32_t mapId) {
		return ((T (*)(WinnerCircleBackgroundController*, int32_t))(Il2CppBase() + 0x2A31E60))(this, mapId);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A322E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WinnerCircleBackgroundController*))(Il2CppBase() + 0x2A322E8))(this);
	}

};

}
