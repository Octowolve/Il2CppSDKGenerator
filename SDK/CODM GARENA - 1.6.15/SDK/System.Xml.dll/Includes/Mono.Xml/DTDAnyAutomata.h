#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDAnyAutomata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDAnyAutomata"));
	}


	template <typename T = uintptr_t> T TryEndElement() {
		return ((T (*)(DTDAnyAutomata*))(Il2CppBase() + 0x4E0F8F4))(this);
	}
	template <typename T = uintptr_t> T TryStartElement(Il2CppString* name) {
		return ((T (*)(DTDAnyAutomata*, Il2CppString*))(Il2CppBase() + 0x4E0F8F8))(this, name);
	}
	template <typename T = bool> T get_Emptiable() {
		return ((T (*)(DTDAnyAutomata*))(Il2CppBase() + 0x4E0F8FC))(this);
	}

};

}
