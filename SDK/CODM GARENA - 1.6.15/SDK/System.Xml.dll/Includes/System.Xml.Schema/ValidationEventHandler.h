#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class ValidationEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "ValidationEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(ValidationEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A73330))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ValidationEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AA22E4))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ValidationEventHandler*, uintptr_t))(Il2CppBase() + 0x2AA231C))(this, result);
	}

};

}
