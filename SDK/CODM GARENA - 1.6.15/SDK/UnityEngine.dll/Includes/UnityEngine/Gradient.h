#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Gradient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Gradient"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(Gradient*))(Il2CppBase() + 0x4772AD8))(this);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(Gradient*))(Il2CppBase() + 0x4772B70))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Gradient*))(Il2CppBase() + 0x4772C08))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_colorKeys() {
		return ((T (*)(Gradient*))(Il2CppBase() + 0x4772C6C))(this);
	}
	template <typename T = void> T set_colorKeys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Gradient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4772D04))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_alphaKeys() {
		return ((T (*)(Gradient*))(Il2CppBase() + 0x4772DA4))(this);
	}
	template <typename T = void> T set_mode(uintptr_t value) {
		return ((T (*)(Gradient*, uintptr_t))(Il2CppBase() + 0x4772E3C))(this, value);
	}
	template <typename T = void> T SetKeys(Il2CppArray<uintptr_t>* colorKeys, Il2CppArray<uintptr_t>* alphaKeys) {
		return ((T (*)(Gradient*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4772EDC))(this, colorKeys, alphaKeys);
	}

};

}
