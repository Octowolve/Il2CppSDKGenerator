#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ResourceAttributes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ResourceAttributes"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Public() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Private() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
