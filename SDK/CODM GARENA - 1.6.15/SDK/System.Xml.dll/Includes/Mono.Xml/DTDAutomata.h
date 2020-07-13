#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDAutomata"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(DTDAutomata*))(Il2CppBase() + 0x4E10CCC))(this);
	}
	template <typename T = uintptr_t> T MakeChoice(uintptr_t other) {
		return ((T (*)(DTDAutomata*, uintptr_t))(Il2CppBase() + 0x4E10CD4))(this, other);
	}
	template <typename T = uintptr_t> T MakeSequence(uintptr_t other) {
		return ((T (*)(DTDAutomata*, uintptr_t))(Il2CppBase() + 0x4E11198))(this, other);
	}
	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDAutomata*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDAutomata*))(Il2CppBase() + 0x4E11424))(this);
	}
	template <typename T = bool> T get_Emptiable() {
		return ((T (*)(DTDAutomata*))(Il2CppBase() + 0x4E1144C))(this);
	}

};

}
