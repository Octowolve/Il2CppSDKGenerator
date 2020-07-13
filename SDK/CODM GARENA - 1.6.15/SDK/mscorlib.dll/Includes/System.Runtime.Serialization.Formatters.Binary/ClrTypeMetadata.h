#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class ClrTypeMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ClrTypeMetadata"));
	}

	template <typename T = uintptr_t> T& InstanceType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_RequiresTypes() {
		return ((T (*)(ClrTypeMetadata*))(Il2CppBase() + 0x301BF2C))(this);
	}

};

}
