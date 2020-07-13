#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebProxy"));
	}

	template <typename T = uintptr_t> T& address() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bypassOnLocal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bypassList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& credentials() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useDefaultCredentials() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E74F30))(this, serializationInfo, streamingContext);
	}
	template <typename T = uintptr_t> T get_Credentials() {
		return ((T (*)(WebProxy*))(Il2CppBase() + 0x3E74F58))(this);
	}
	template <typename T = bool> T get_UseDefaultCredentials() {
		return ((T (*)(WebProxy*))(Il2CppBase() + 0x3E74F60))(this);
	}
	template <typename T = uintptr_t> T GetProxy(uintptr_t destination) {
		return ((T (*)(WebProxy*, uintptr_t))(Il2CppBase() + 0x3E74F68))(this, destination);
	}
	template <typename T = bool> T IsBypassed(uintptr_t host) {
		return ((T (*)(WebProxy*, uintptr_t))(Il2CppBase() + 0x3E74F8C))(this, host);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E758B0))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T CheckBypassList() {
		return ((T (*)(WebProxy*))(Il2CppBase() + 0x3E74B5C))(this);
	}

};

}
