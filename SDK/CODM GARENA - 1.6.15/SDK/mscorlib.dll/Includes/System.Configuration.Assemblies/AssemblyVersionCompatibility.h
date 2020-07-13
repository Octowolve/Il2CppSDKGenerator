#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Configuration.Assemblies {

class AssemblyVersionCompatibility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Configuration.Assemblies", "AssemblyVersionCompatibility"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SameMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SameProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SameDomain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
