#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PropPawnInitializeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PropPawnInitializeData"));
	}

	template <typename T = float> T& CorpseLifeTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Copy(uintptr_t source) {
		return ((T (*)(PropPawnInitializeData*, uintptr_t))(Il2CppBase() + 0x2DC064C))(this, source);
	}

};

}
