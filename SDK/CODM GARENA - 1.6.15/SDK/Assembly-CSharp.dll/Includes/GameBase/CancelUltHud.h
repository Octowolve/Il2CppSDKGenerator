#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CancelUltHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CancelUltHud"));
	}

	template <typename T = uintptr_t> T& ReqCancelUltBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUltBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CancelUltHud*))(Il2CppBase() + 0x3C4F1D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CancelUltHud*))(Il2CppBase() + 0x3C4F31C))(this);
	}
	template <typename T = void> T OnCancelUltBtnClicked() {
		return ((T (*)(CancelUltHud*))(Il2CppBase() + 0x3C4F464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CancelUltHud*))(Il2CppBase() + 0x3C4F7D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CancelUltHud*))(Il2CppBase() + 0x3C4F7E0))(this);
	}

};

}
