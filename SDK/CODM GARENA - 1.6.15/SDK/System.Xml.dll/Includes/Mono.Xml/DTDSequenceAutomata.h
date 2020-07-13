#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDSequenceAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDSequenceAutomata"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& hasComputedEmptiable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& cachedEmptiable() {
		return *(T*)((uintptr_t)this + 0x15);
	}

	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDSequenceAutomata*, Il2CppString*))(Il2CppBase() + 0x4E1529C))(this, name);
	}
	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDSequenceAutomata*))(Il2CppBase() + 0x4E15398))(this);
	}
	template <typename T = bool> T get_Emptiable() {
		return ((T (*)(DTDSequenceAutomata*))(Il2CppBase() + 0x4E153EC))(this);
	}

};

}
