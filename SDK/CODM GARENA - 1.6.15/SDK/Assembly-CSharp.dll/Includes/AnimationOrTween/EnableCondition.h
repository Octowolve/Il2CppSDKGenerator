#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AnimationOrTween {

class EnableCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AnimationOrTween", "EnableCondition"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& DoNothing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EnableThenPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& IgnoreDisabledState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
