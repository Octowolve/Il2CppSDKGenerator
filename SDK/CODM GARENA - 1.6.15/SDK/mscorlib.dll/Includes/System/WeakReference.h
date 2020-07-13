#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class WeakReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "WeakReference"));
	}

	template <typename T = bool> T& isLongReference() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& gcHandle() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T AllocateHandle(uintptr_t target) {
		return ((T (*)(WeakReference*, uintptr_t))(Il2CppBase() + 0x4D9DA2C))(this, target);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(WeakReference*))(Il2CppBase() + 0x4D9DBC8))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(WeakReference*))(Il2CppBase() + 0x4D9DBEC))(this);
	}
	template <typename T = bool> T get_TrackResurrection() {
		return ((T (*)(WeakReference*))(Il2CppBase() + 0x4D9DBF8))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(WeakReference*))(Il2CppBase() + 0x4D9DC00))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(WeakReference*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9DC6C))(this, info, context);
	}

};

}
