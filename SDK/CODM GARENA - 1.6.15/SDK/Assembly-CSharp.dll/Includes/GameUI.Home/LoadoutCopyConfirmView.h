#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class LoadoutCopyConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "LoadoutCopyConfirmView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Buttons() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadoutBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LoadoutCopyConfirmView*))(Il2CppBase() + 0x232BEC0))(this);
	}
	template <typename T = void> T SetLoadoutBtn() {
		return ((T (*)(LoadoutCopyConfirmView*))(Il2CppBase() + 0x232B684))(this);
	}
	template <typename T = void> T OnLoadoutBtnClick(uintptr_t Obj) {
		return ((T (*)(LoadoutCopyConfirmView*, uintptr_t))(Il2CppBase() + 0x232C1C8))(this, Obj);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LoadoutCopyConfirmView*))(Il2CppBase() + 0x232C62C))(this);
	}

};

}
