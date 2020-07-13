#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class CapturingGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "CapturingGroup"));
	}

	template <typename T = int32_t> T& gid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(CapturingGroup*))(Il2CppBase() + 0x4AE1494))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(CapturingGroup*, int32_t))(Il2CppBase() + 0x4AE1C20))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CapturingGroup*))(Il2CppBase() + 0x4AE1C28))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(CapturingGroup*, Il2CppString*))(Il2CppBase() + 0x4AE1C30))(this, value);
	}
	template <typename T = bool> T get_IsNamed() {
		return ((T (*)(CapturingGroup*))(Il2CppBase() + 0x4AE149C))(this);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(CapturingGroup*, uintptr_t, bool))(Il2CppBase() + 0x4AE1C38))(this, cmp, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(CapturingGroup*))(Il2CppBase() + 0x4AE1E6C))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(CapturingGroup*, uintptr_t))(Il2CppBase() + 0x4AE1E74))(this, other);
	}

};

}
