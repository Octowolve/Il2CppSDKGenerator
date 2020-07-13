#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationCallbacks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationCallbacks"));
	}

	template <typename T = uintptr_t> T& onSerializingList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& onSerializedList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& onDeserializingList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onDeserializedList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& cache_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasSerializedCallbacks() {
		return ((T (*)(SerializationCallbacks*))(Il2CppBase() + 0x3030264))(this);
	}
	template <typename T = bool> T get_HasDeserializedCallbacks() {
		return ((T (*)(SerializationCallbacks*))(Il2CppBase() + 0x302E2D4))(this);
	}
	template <typename T = uintptr_t> static T GetMethodsByAttribute(uintptr_t type, uintptr_t attr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x302FE8C))(0, type, attr);
	}
	template <typename T = void> static T Invoke(uintptr_t list, uintptr_t target, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3030274))(0, list, target, context);
	}
	template <typename T = void> T RaiseOnSerializing(uintptr_t target, uintptr_t contex) {
		return ((T (*)(SerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30307C8))(this, target, contex);
	}
	template <typename T = void> T RaiseOnSerialized(uintptr_t target, uintptr_t contex) {
		return ((T (*)(SerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x303088C))(this, target, contex);
	}
	template <typename T = void> T RaiseOnDeserializing(uintptr_t target, uintptr_t contex) {
		return ((T (*)(SerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302EA70))(this, target, contex);
	}
	template <typename T = void> T RaiseOnDeserialized(uintptr_t target, uintptr_t contex) {
		return ((T (*)(SerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302EB34))(this, target, contex);
	}
	template <typename T = uintptr_t> static T GetSerializationCallbacks(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x302DDB4))(0, t);
	}

};

}
