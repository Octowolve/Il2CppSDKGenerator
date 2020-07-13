#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CatlikeCoding.SDFToolkit {

class UIMaterialLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CatlikeCoding.SDFToolkit", "UIMaterialLink"));
	}

	template <typename T = uintptr_t> T& sourceMaterial() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shaderKeywords() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_SourceMaterial() {
		return ((T (*)(UIMaterialLink*))(Il2CppBase() + 0x1D1BDF0))(this);
	}
	template <typename T = void> T set_SourceMaterial(uintptr_t value) {
		return ((T (*)(UIMaterialLink*, uintptr_t))(Il2CppBase() + 0x1D1BDF8))(this, value);
	}
	template <typename T = uintptr_t> T GetModifiedMaterial(uintptr_t baseMaterial) {
		return ((T (*)(UIMaterialLink*, uintptr_t))(Il2CppBase() + 0x1D1BEBC))(this, baseMaterial);
	}

};

}
