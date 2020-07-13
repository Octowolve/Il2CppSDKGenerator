#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMMissionItemHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMMissionItemHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyItemChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMMissionItemHUD*))(Il2CppBase() + 0x2A5875C))(this);
	}
	template <typename T = void> T OnNotifyItemChange(uintptr_t inMsg) {
		return ((T (*)(ZMMissionItemHUD*, uintptr_t))(Il2CppBase() + 0x2A58870))(this, inMsg);
	}
	template <typename T = void> T RefreshGrid() {
		return ((T (*)(ZMMissionItemHUD*))(Il2CppBase() + 0x2A5891C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMMissionItemHUD*))(Il2CppBase() + 0x2A58E34))(this);
	}

};

}
