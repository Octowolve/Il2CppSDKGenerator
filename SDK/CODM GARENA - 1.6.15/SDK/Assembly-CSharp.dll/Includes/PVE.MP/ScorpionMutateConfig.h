#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ScorpionMutateConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ScorpionMutateConfig"));
	}

	template <typename T = int32_t> T& mutateStage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mutateAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& hideMeshTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_mutateAnimLen() {
		return ((T (*)(ScorpionMutateConfig*))(Il2CppBase() + 0x43593B0))(this);
	}

};

}
