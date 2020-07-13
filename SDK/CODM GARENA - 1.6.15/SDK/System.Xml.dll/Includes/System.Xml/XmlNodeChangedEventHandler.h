#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNodeChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNodeChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(XmlNodeChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37D3988))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(XmlNodeChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37E2D5C))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(XmlNodeChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x37E2D94))(this, result);
	}

};

}
