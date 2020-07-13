#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LayerMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LayerMask"));
	}

	template <typename T = int32_t> T& m_Mask() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> static T op_Implicit(uintptr_t mask) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A4B68))(0, mask);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(int32_t intVal) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A4B70))(0, intVal);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(LayerMask*))(Il2CppBase() + 0x47A4B80))(this);
	}
	template <typename T = Il2CppString*> static T LayerToName(int32_t layer) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A4B88))(0, layer);
	}
	template <typename T = int32_t> static T NameToLayer(Il2CppString* layerName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47A4C20))(0, layerName);
	}
	template <typename T = int32_t> static T GetMask(Il2CppArray<uintptr_t>* layerNames) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A4CB8))(0, layerNames);
	}

};

}
