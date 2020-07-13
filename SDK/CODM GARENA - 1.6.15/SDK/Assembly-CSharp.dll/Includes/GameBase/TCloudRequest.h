#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TCloudRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TCloudRequest"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MyRemoteCertificateValidationCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T MyRemoteCertificateValidationCallback(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(TCloudRequest*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27BCDE8))(this, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = Il2CppString*> T SendRequest(Il2CppString* url, uintptr_t data, uintptr_t requestMethod, uintptr_t header, int32_t timeOut) {
		return ((T (*)(TCloudRequest*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x27BACC4))(this, url, data, requestMethod, header, timeOut);
	}

};

}
