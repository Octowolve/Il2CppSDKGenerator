#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class TypeMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "TypeMetadata"));
	}

	template <typename T = Il2CppString*> T& TypeAssemblyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& InstanceTypeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T WriteAssemblies(uintptr_t ow, uintptr_t writer) {
		return ((T (*)(TypeMetadata*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, ow, writer);
	}
	template <typename T = void> T WriteTypeData(uintptr_t ow, uintptr_t writer, bool writeTypes) {
		return ((T (*)(TypeMetadata*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, ow, writer, writeTypes);
	}
	template <typename T = void> T WriteObjectData(uintptr_t ow, uintptr_t writer, uintptr_t data) {
		return ((T (*)(TypeMetadata*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, ow, writer, data);
	}
	template <typename T = bool> T IsCompatible(uintptr_t other) {
		return ((T (*)(TypeMetadata*, uintptr_t))(Il2CppBase() + 0x302C820))(this, other);
	}
	template <typename T = bool> T get_RequiresTypes() {
		return ((T (*)(TypeMetadata*))(Il2CppBase() + 0x0))(this);
	}

};

}
