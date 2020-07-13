#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class LayerMaskExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "LayerMaskExtensions"));
	}


	template <typename T = bool> static T Contains(uintptr_t mask, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4F7F0E8))(0, mask, layer);
	}
	template <typename T = uintptr_t> static T Create(Il2CppArray<uintptr_t>* layerNames) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F138))(0, layerNames);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppArray<uintptr_t>* layerNumbers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F1EC))(0, layerNumbers);
	}
	template <typename T = uintptr_t> static T NamesToMask(Il2CppArray<uintptr_t>* layerNames) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F13C))(0, layerNames);
	}
	template <typename T = uintptr_t> static T LayerNumbersToMask(Il2CppArray<uintptr_t>* layerNumbers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F1F0))(0, layerNumbers);
	}
	template <typename T = uintptr_t> static T Inverse(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F7F28C))(0, original);
	}
	template <typename T = uintptr_t> static T AddToMask(uintptr_t original, Il2CppArray<uintptr_t>* layerNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F2B4))(0, original, layerNames);
	}
	template <typename T = uintptr_t> static T RemoveFromMask(uintptr_t original, Il2CppArray<uintptr_t>* layerNames) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4F7F2FC))(0, original, layerNames);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T MaskToNames(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F7F368))(0, original);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T MaskToNumbers(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F7F504))(0, original);
	}
	template <typename T = Il2CppString*> static T MaskToString(uintptr_t original) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F7F634))(0, original);
	}
	template <typename T = Il2CppString*> static T MaskToString_1(uintptr_t original, Il2CppString* delimiter) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4F7F6B8))(0, original, delimiter);
	}

};

}
