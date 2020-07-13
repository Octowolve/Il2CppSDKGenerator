#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class KnifeSwitchBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "KnifeSwitchBtnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E24818))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E248BC))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E24A48))(this);
	}
	template <typename T = uintptr_t> T GetTransform() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E24AE0))(this);
	}
	template <typename T = void> T OnGrenadeShowed(uintptr_t msg) {
		return ((T (*)(KnifeSwitchBtnController*, uintptr_t))(Il2CppBase() + 0x2E24BA4))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E24C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(KnifeSwitchBtnController*))(Il2CppBase() + 0x2E24C64))(this);
	}

};

}
