#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnColliderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnColliderData"));
	}

	template <typename T = Il2CppVector3> T& Center() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Direction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
