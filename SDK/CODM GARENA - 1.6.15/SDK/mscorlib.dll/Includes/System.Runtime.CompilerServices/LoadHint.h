#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class LoadHint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "LoadHint"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Always() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Sometimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
