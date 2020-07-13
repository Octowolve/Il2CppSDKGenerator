#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LegendaryWeaponDataDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LegendaryWeaponDataDefine"));
	}

	template <typename T = Il2CppString*> static T& OffsetPoseStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
