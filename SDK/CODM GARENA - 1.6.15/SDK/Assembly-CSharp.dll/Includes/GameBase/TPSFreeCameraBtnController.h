#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TPSFreeCameraBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TPSFreeCameraBtnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TPSFreeCameraBtnController*))(Il2CppBase() + 0x27CBAC4))(this);
	}
	template <typename T = void> T InitConfig(uintptr_t config) {
		return ((T (*)(TPSFreeCameraBtnController*, uintptr_t))(Il2CppBase() + 0x27CBB68))(this, config);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(TPSFreeCameraBtnController*, bool, bool, bool))(Il2CppBase() + 0x27CBC78))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(TPSFreeCameraBtnController*))(Il2CppBase() + 0x27CBE84))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TPSFreeCameraBtnController*))(Il2CppBase() + 0x27CBFAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitConfig(uintptr_t P0) {
		return ((T (*)(TPSFreeCameraBtnController*, uintptr_t))(Il2CppBase() + 0x27CBFB4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(TPSFreeCameraBtnController*, bool, bool, bool))(Il2CppBase() + 0x27CBFBC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(TPSFreeCameraBtnController*))(Il2CppBase() + 0x27CBFDC))(this);
	}

};

}
