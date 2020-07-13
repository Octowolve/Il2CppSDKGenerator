#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class BinaryFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter"));
	}

	template <typename T = uintptr_t> T& assembly_format() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& binder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& surrogate_selector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& type_format() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& filter_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& DefaultSurrogateSelector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_DefaultSurrogateSelector() {
		return ((T (*)(void *))(Il2CppBase() + 0x3017818))(0);
	}
	template <typename T = void> T set_AssemblyFormat(uintptr_t value) {
		return ((T (*)(BinaryFormatter*, uintptr_t))(Il2CppBase() + 0x30178E8))(this, value);
	}
	template <typename T = uintptr_t> T get_Binder() {
		return ((T (*)(BinaryFormatter*))(Il2CppBase() + 0x30178F0))(this);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(BinaryFormatter*))(Il2CppBase() + 0x30178F8))(this);
	}
	template <typename T = uintptr_t> T get_SurrogateSelector() {
		return ((T (*)(BinaryFormatter*))(Il2CppBase() + 0x301790C))(this);
	}
	template <typename T = uintptr_t> T get_FilterLevel() {
		return ((T (*)(BinaryFormatter*))(Il2CppBase() + 0x3017914))(this);
	}
	template <typename T = uintptr_t> T Deserialize(uintptr_t serializationStream) {
		return ((T (*)(BinaryFormatter*, uintptr_t))(Il2CppBase() + 0x301791C))(this, serializationStream);
	}
	template <typename T = uintptr_t> T NoCheckDeserialize(uintptr_t serializationStream, uintptr_t handler) {
		return ((T (*)(BinaryFormatter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3017924))(this, serializationStream, handler);
	}
	template <typename T = void> T Serialize(uintptr_t serializationStream, uintptr_t graph) {
		return ((T (*)(BinaryFormatter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3019840))(this, serializationStream, graph);
	}
	template <typename T = void> T Serialize_1(uintptr_t serializationStream, uintptr_t graph, Il2CppArray<uintptr_t>* headers) {
		return ((T (*)(BinaryFormatter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x301985C))(this, serializationStream, graph, headers);
	}
	template <typename T = void> T WriteBinaryHeader(uintptr_t writer, bool hasHeaders) {
		return ((T (*)(BinaryFormatter*, uintptr_t, bool))(Il2CppBase() + 0x3019AA4))(this, writer, hasHeaders);
	}
	template <typename T = void> T ReadBinaryHeader(uintptr_t reader, uintptr_t* hasHeaders) {
		return ((T (*)(BinaryFormatter*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3017BA8))(this, reader, hasHeaders);
	}

};

}
