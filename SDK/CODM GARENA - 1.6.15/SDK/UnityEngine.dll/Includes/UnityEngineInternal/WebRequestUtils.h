#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class WebRequestUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "WebRequestUtils"));
	}

	template <typename T = uintptr_t> static T& domainRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T RedirectTo(Il2CppString* baseUri, Il2CppString* redirectUri) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4D424AC))(0, baseUri, redirectUri);
	}
	template <typename T = Il2CppString*> static T MakeInitialUrl(Il2CppString* targetUrl, Il2CppString* localUrl) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4D425F4))(0, targetUrl, localUrl);
	}

};

}
