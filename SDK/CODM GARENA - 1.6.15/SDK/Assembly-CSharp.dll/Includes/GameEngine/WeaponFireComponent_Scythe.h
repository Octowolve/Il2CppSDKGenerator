#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentScythe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Scythe"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcShotSpreadSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T CalcShotSpreadSize() {
		return ((T (*)(WeaponFireComponentScythe*))(Il2CppBase() + 0x23F820C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_CalcShotSpreadSize() {
		return ((T (*)(WeaponFireComponentScythe*))(Il2CppBase() + 0x23F851C))(this);
	}

};

}
