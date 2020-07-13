#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class DynamicPropertyCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection"));
	}

	template <typename T = uintptr_t> T& _properties() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_HasProperties() {
		return ((T (*)(DynamicPropertyCollection*))(Il2CppBase() + 0x4B2AB10))(this);
	}
	template <typename T = bool> T RegisterDynamicProperty(uintptr_t prop) {
		return ((T (*)(DynamicPropertyCollection*, uintptr_t))(Il2CppBase() + 0x4B2AF14))(this, prop);
	}
	template <typename T = bool> T UnregisterDynamicProperty(Il2CppString* name) {
		return ((T (*)(DynamicPropertyCollection*, Il2CppString*))(Il2CppBase() + 0x4B2B304))(this, name);
	}
	template <typename T = void> T NotifyMessage(bool start, uintptr_t msg, bool client_site, bool async) {
		return ((T (*)(DynamicPropertyCollection*, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x4B2B9A4))(this, start, msg, client_site, async);
	}
	template <typename T = int32_t> T FindProperty(Il2CppString* name) {
		return ((T (*)(DynamicPropertyCollection*, Il2CppString*))(Il2CppBase() + 0x4B2F4C0))(this, name);
	}

};

}
