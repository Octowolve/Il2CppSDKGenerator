#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class StageExitCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "StageExitCondition"));
	}

	template <typename T = uintptr_t> T& conditionType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& conditionParam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
