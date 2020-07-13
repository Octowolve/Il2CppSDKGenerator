#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EPawnAnimatorTransitionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EPawnAnimatorTransitionType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EPawnAnimatorTransitionType_FromStand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPawnAnimatorTransitionType_FromCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPawnAnimatorTransitionType_FromProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EPawnAnimatorTransitionType_FromJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
