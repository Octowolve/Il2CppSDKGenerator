#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class ValidationEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "ValidationEventArgs"));
	}

	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& severity() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(ValidationEventArgs*))(Il2CppBase() + 0x2A733FC))(this);
	}
	template <typename T = uintptr_t> T get_Severity() {
		return ((T (*)(ValidationEventArgs*))(Il2CppBase() + 0x2A733F4))(this);
	}

};

}
