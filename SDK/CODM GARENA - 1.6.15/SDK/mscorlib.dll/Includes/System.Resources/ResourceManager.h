#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class ResourceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "ResourceManager"));
	}

	template <typename T = uintptr_t> static T& ResourceCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& NonExistent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& HeaderVersionNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& MagicNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& resourceSetType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
