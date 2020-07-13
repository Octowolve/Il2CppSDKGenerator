#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropHuntScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropHuntScore"));
	}

	template <typename T = uint32_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
