#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FireBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FireBtnController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKnifeGrapFaceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckShowFirstGrapFaceTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FireBtnController*))(Il2CppBase() + 0x31DCFC4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FireBtnController*))(Il2CppBase() + 0x31DD0EC))(this);
	}
	template <typename T = void> T SetKnifeGrapFaceState(bool bShow) {
		return ((T (*)(FireBtnController*, bool))(Il2CppBase() + 0x31DD394))(this, bShow);
	}
	template <typename T = void> T OnCheckShowFirstGrapFaceTips(uintptr_t msg) {
		return ((T (*)(FireBtnController*, uintptr_t))(Il2CppBase() + 0x31DD4A0))(this, msg);
	}
	template <typename T = void> T OnCheckShowFirstGrapFaceTipsm__0() {
		return ((T (*)(FireBtnController*))(Il2CppBase() + 0x31DDB14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FireBtnController*))(Il2CppBase() + 0x31DDB40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FireBtnController*))(Il2CppBase() + 0x31DDB48))(this);
	}

};

}
