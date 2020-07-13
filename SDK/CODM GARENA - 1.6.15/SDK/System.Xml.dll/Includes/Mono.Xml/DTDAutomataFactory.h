#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDAutomataFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDAutomataFactory"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& choiceTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sequenceTable() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T Choice(uintptr_t left, uintptr_t right) {
		return ((T (*)(DTDAutomataFactory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E10FD0))(this, left, right);
	}
	template <typename T = uintptr_t> T Sequence(uintptr_t left, uintptr_t right) {
		return ((T (*)(DTDAutomataFactory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1125C))(this, left, right);
	}

};

}
