#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class NetworkService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "NetworkService"));
	}

	template <typename T = uintptr_t> T& NetworkChangedEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_NetworkChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_NetworkChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDetailNetworkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onNetworkStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T add_NetworkChangedEvent(uintptr_t value) {
		return ((T (*)(NetworkService*, uintptr_t))(Il2CppBase() + 0x442F4B4))(this, value);
	}
	template <typename T = void> T remove_NetworkChangedEvent(uintptr_t value) {
		return ((T (*)(NetworkService*, uintptr_t))(Il2CppBase() + 0x442F6DC))(this, value);
	}
	template <typename T = uintptr_t> T GetNetworkState() {
		return ((T (*)(NetworkService*))(Il2CppBase() + 0x442F904))(this);
	}
	template <typename T = uintptr_t> T GetDetailNetworkInfo() {
		return ((T (*)(NetworkService*))(Il2CppBase() + 0x442FB2C))(this);
	}
	template <typename T = void> T onNetworkStateChanged(uintptr_t state) {
		return ((T (*)(NetworkService*, uintptr_t))(Il2CppBase() + 0x442FDE4))(this, state);
	}

};

}
