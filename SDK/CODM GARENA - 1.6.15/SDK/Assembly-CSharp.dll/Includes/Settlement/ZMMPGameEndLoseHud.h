#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZMMPGameEndLoseHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZMMPGameEndLoseHud"));
	}

	template <typename T = uintptr_t> T& Gold() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnReturn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReturnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReturnToLobbyCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMMPGameEndLoseHud*))(Il2CppBase() + 0x2987ACC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ZMMPGameEndLoseHud*))(Il2CppBase() + 0x2987BEC))(this);
	}
	template <typename T = void> T OnBtnReturnClick() {
		return ((T (*)(ZMMPGameEndLoseHud*))(Il2CppBase() + 0x2987E94))(this);
	}
	template <typename T = void> T SetReturnToLobbyCallback(uintptr_t action) {
		return ((T (*)(ZMMPGameEndLoseHud*, uintptr_t))(Il2CppBase() + 0x2987F8C))(this, action);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMMPGameEndLoseHud*))(Il2CppBase() + 0x2988034))(this);
	}

};

}
