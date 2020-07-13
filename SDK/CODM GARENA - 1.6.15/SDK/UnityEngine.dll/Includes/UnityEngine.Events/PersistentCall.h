#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class PersistentCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "PersistentCall"));
	}

	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_MethodName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Arguments() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CallState() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(PersistentCall*))(Il2CppBase() + 0x4DAB06C))(this);
	}
	template <typename T = Il2CppString*> T get_methodName() {
		return ((T (*)(PersistentCall*))(Il2CppBase() + 0x4DAB074))(this);
	}
	template <typename T = uintptr_t> T get_mode() {
		return ((T (*)(PersistentCall*))(Il2CppBase() + 0x4DAB07C))(this);
	}
	template <typename T = uintptr_t> T get_arguments() {
		return ((T (*)(PersistentCall*))(Il2CppBase() + 0x4DAB084))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(PersistentCall*))(Il2CppBase() + 0x4DAB08C))(this);
	}
	template <typename T = uintptr_t> T GetRuntimeCall(uintptr_t theEvent) {
		return ((T (*)(PersistentCall*, uintptr_t))(Il2CppBase() + 0x4DAB19C))(this, theEvent);
	}
	template <typename T = uintptr_t> static T GetObjectCall(uintptr_t target, uintptr_t method, uintptr_t arguments) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAB6C8))(0, target, method, arguments);
	}

};

}
