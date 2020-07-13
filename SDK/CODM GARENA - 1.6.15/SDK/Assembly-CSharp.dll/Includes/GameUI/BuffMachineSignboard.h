#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BuffMachineSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BuffMachineSignboard"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CheckNear() {
		return ((T (*)(BuffMachineSignboard*))(Il2CppBase() + 0x3DD8748))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(BuffMachineSignboard*))(Il2CppBase() + 0x3DD8994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckNear() {
		return ((T (*)(BuffMachineSignboard*))(Il2CppBase() + 0x3DD8BDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLabelImpl() {
		return ((T (*)(BuffMachineSignboard*))(Il2CppBase() + 0x3DD8BE4))(this);
	}

};

}
