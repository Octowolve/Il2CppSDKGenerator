#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckFireResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheckFireResult"));
	}

	template <typename T = bool> T& m_StartAim() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_StopAim() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& Aiming() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& m_StartFire() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& m_StopFire() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& FireButtonDown() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& FireButtonUp() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& AutoFire() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_StartAim(bool value) {
		return ((T (*)(CheckFireResult*, bool))(Il2CppBase() + 0x3A20350))(this, value);
	}
	template <typename T = bool> T get_StartAim() {
		return ((T (*)(CheckFireResult*))(Il2CppBase() + 0x3A204D8))(this);
	}
	template <typename T = bool> T get_StopAim() {
		return ((T (*)(CheckFireResult*))(Il2CppBase() + 0x3A204E0))(this);
	}
	template <typename T = void> T set_StopAim(bool value) {
		return ((T (*)(CheckFireResult*, bool))(Il2CppBase() + 0x3A204E8))(this, value);
	}
	template <typename T = void> T set_StartFire(bool value) {
		return ((T (*)(CheckFireResult*, bool))(Il2CppBase() + 0x3A205D0))(this, value);
	}
	template <typename T = bool> T get_StartFire() {
		return ((T (*)(CheckFireResult*))(Il2CppBase() + 0x3A206B8))(this);
	}
	template <typename T = void> T set_StopFire(bool value) {
		return ((T (*)(CheckFireResult*, bool))(Il2CppBase() + 0x3A206C0))(this, value);
	}
	template <typename T = bool> T get_StopFire() {
		return ((T (*)(CheckFireResult*))(Il2CppBase() + 0x3A207A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CheckFireResult*))(Il2CppBase() + 0x3A207B0))(this);
	}

};

}
