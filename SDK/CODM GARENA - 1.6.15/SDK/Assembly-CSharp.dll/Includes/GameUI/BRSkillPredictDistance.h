#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSkillPredictDistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSkillPredictDistance"));
	}

	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateDistance(Il2CppVector3 targetPositon) {
		return ((T (*)(BRSkillPredictDistance*, Il2CppVector3))(Il2CppBase() + 0x3DBFDE8))(this, targetPositon);
	}

};

}
