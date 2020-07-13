#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SytemLevelAnimatorLodData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SytemLevelAnimatorLodData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Lods() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
