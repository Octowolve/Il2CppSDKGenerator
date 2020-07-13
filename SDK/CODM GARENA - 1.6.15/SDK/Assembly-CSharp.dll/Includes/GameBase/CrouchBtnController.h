#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrouchBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrouchBtnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetHideProneButtonValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CrouchBtnController*))(Il2CppBase() + 0x40D4BDC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CrouchBtnController*))(Il2CppBase() + 0x40D4C80))(this);
	}
	template <typename T = void> T SetHideProneButtonValue(bool value) {
		return ((T (*)(CrouchBtnController*, bool))(Il2CppBase() + 0x40D4D8C))(this, value);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CrouchBtnController*))(Il2CppBase() + 0x40D4EF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CrouchBtnController*))(Il2CppBase() + 0x40D4EF8))(this);
	}

};

}
