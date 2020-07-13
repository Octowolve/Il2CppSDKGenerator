#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlReaderSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlReaderSettings"));
	}

	template <typename T = bool> T& checkCharacters() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& conformance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& schemas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& schemasNeedsInitialization() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& validationFlags() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_CheckCharacters() {
		return ((T (*)(XmlReaderSettings*))(Il2CppBase() + 0x4CF4D34))(this);
	}
	template <typename T = uintptr_t> T get_ConformanceLevel() {
		return ((T (*)(XmlReaderSettings*))(Il2CppBase() + 0x4CF4D3C))(this);
	}
	template <typename T = uintptr_t> T get_Schemas() {
		return ((T (*)(XmlReaderSettings*))(Il2CppBase() + 0x4CF4D44))(this);
	}
	template <typename T = uintptr_t> T get_ValidationFlags() {
		return ((T (*)(XmlReaderSettings*))(Il2CppBase() + 0x4CF4DEC))(this);
	}

};

}
