#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpecialMoveSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpecialMoveSpot"));
	}

	template <typename T = uintptr_t> T& MoveType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& GroupNo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SeqNo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
