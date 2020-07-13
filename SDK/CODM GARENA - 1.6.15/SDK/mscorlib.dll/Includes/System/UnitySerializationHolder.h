#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UnitySerializationHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UnitySerializationHolder"));
	}

	template <typename T = Il2CppString*> T& _data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _unityType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _assemblyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> static T GetTypeData(uintptr_t instance, uintptr_t info, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9C114))(0, instance, info, ctx);
	}
	template <typename T = void> static T GetDBNullData(uintptr_t instance, uintptr_t info, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9C2A8))(0, instance, info, ctx);
	}
	template <typename T = void> static T GetModuleData(uintptr_t instance, uintptr_t info, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9C438))(0, instance, info, ctx);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(UnitySerializationHolder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9C5BC))(this, info, context);
	}
	template <typename T = uintptr_t> T GetRealObject(uintptr_t context) {
		return ((T (*)(UnitySerializationHolder*, uintptr_t))(Il2CppBase() + 0x4D9C650))(this, context);
	}

};

}
