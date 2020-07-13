#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CommonAvatarAdapterType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CommonAvatarAdapterType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& NoAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Absolute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
