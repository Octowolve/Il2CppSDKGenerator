#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ScorpionRageConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ScorpionRageConfig"));
	}

	template <typename T = uintptr_t> T& startRageAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& endRageAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareAnimLen() {
		return ((T (*)(ScorpionRageConfig*))(Il2CppBase() + 0x435946C))(this);
	}
	template <typename T = float> T get_endAttackAnimLen() {
		return ((T (*)(ScorpionRageConfig*))(Il2CppBase() + 0x435947C))(this);
	}

};

}
