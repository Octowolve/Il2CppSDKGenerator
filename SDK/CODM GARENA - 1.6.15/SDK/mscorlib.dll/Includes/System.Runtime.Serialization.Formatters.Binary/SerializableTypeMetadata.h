#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class SerializableTypeMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "SerializableTypeMetadata"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& types() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& names() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsCompatible(uintptr_t other) {
		return ((T (*)(SerializableTypeMetadata*, uintptr_t))(Il2CppBase() + 0x302C0B0))(this, other);
	}
	template <typename T = void> T WriteAssemblies(uintptr_t ow, uintptr_t writer) {
		return ((T (*)(SerializableTypeMetadata*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302C380))(this, ow, writer);
	}
	template <typename T = void> T WriteTypeData(uintptr_t ow, uintptr_t writer, bool writeTypes) {
		return ((T (*)(SerializableTypeMetadata*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x302C43C))(this, ow, writer, writeTypes);
	}
	template <typename T = void> T WriteObjectData(uintptr_t ow, uintptr_t writer, uintptr_t data) {
		return ((T (*)(SerializableTypeMetadata*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x302C610))(this, ow, writer, data);
	}
	template <typename T = bool> T get_RequiresTypes() {
		return ((T (*)(SerializableTypeMetadata*))(Il2CppBase() + 0x302C818))(this);
	}

};

}
