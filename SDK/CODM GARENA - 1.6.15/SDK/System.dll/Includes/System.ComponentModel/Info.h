#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class Info
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "Info"));
	}

	template <typename T = uintptr_t> T& _infoType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _attributes() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T GetAttributes() {
		return ((T (*)(Info*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetProperties() {
		return ((T (*)(Info*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_InfoType() {
		return ((T (*)(Info*))(Il2CppBase() + 0x4CAD5A4))(this);
	}
	template <typename T = uintptr_t> T GetProperties_1(Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(Info*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CAD5AC))(this, attributes);
	}
	template <typename T = uintptr_t> T GetAttributes_1(uintptr_t comp) {
		return ((T (*)(Info*, uintptr_t))(Il2CppBase() + 0x4CA4BAC))(this, comp);
	}

};

}
