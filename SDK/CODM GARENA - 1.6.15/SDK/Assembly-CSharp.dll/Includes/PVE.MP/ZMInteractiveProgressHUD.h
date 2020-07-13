#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZMInteractiveProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZMInteractiveProgressHUD"));
	}

	template <typename T = uintptr_t> T& BtnCancel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& showObj() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelCommonDesc() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& targetUID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& ActiveTime_MS() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& startProgress() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4362DD4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4362E98))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4362FD8))(this);
	}
	template <typename T = void> T OnStartProgress(uintptr_t msg) {
		return ((T (*)(ZMInteractiveProgressHUD*, uintptr_t))(Il2CppBase() + 0x43631A0))(this, msg);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4363404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4363688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMInteractiveProgressHUD*))(Il2CppBase() + 0x4363690))(this);
	}

};

}
