#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class Alert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "Alert"));
	}

	template <typename T = uintptr_t> T& level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& description() {
		return *(T*)((uintptr_t)this + 0x9);
	}

	template <typename T = uintptr_t> T get_Level() {
		return ((T (*)(Alert*))(Il2CppBase() + 0x47D6628))(this);
	}
	template <typename T = uintptr_t> T get_Description() {
		return ((T (*)(Alert*))(Il2CppBase() + 0x47D6630))(this);
	}
	template <typename T = bool> T get_IsWarning() {
		return ((T (*)(Alert*))(Il2CppBase() + 0x47D6638))(this);
	}
	template <typename T = bool> T get_IsCloseNotify() {
		return ((T (*)(Alert*))(Il2CppBase() + 0x47D6648))(this);
	}
	template <typename T = void> T inferAlertLevel() {
		return ((T (*)(Alert*))(Il2CppBase() + 0x47D659C))(this);
	}
	template <typename T = Il2CppString*> static T GetAlertMessage(uintptr_t description) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47D6670))(0, description);
	}

};

}
