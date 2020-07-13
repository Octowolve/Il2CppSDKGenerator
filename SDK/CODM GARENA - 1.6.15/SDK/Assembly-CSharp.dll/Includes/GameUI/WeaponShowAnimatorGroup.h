#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeaponShowAnimatorGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeaponShowAnimatorGroup"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AnimatorInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WeaponShowAnimatorGroup*))(Il2CppBase() + 0x2A30FDC))(this);
	}

};

}
