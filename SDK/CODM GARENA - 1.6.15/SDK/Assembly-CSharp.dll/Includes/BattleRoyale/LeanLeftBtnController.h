#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class LeanLeftBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "LeanLeftBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeanStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LeanLeftBtnController*))(Il2CppBase() + 0x3D558AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LeanLeftBtnController*))(Il2CppBase() + 0x3D55950))(this);
	}
	template <typename T = void> T OnLeanStateChanged(int32_t leanState) {
		return ((T (*)(LeanLeftBtnController*, int32_t))(Il2CppBase() + 0x3D55A5C))(this, leanState);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LeanLeftBtnController*))(Il2CppBase() + 0x3D55C94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LeanLeftBtnController*))(Il2CppBase() + 0x3D55C9C))(this);
	}

};

}
