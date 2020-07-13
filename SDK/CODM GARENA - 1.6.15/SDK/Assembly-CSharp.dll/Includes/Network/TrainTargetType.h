#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class TrainTargetType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "TrainTargetType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLED_TARGET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SLIDING_TARGET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FLYING_TARGET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
