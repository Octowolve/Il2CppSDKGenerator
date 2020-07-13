#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NetworkResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NetworkResources"));
	}

	template <typename T = uintptr_t> static T& Downloaders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_CacheDirPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MyRemoteCertificateValidationCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteOldStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCacheDirPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCacheFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BitToChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void*> static T get_BytesDownloader() {
		return ((T (*)(void *))(Il2CppBase() + 0x27184E8))(0);
	}
	template <typename T = void*> static T get_TextureDownloader() {
		return ((T (*)(void *))(Il2CppBase() + 0x27185AC))(0);
	}
	template <typename T = void*> static T get_TextDownloader() {
		return ((T (*)(void *))(Il2CppBase() + 0x2718670))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x2718734))(this);
	}
	template <typename T = bool> static T MyRemoteCertificateValidationCallback(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x271895C))(0, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(NetworkResources*, float))(Il2CppBase() + 0x2718CE0))(this, dt);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x2718EAC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x2719070))(this);
	}
	template <typename T = void> T DeleteOldStorage() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x2719238))(this);
	}
	template <typename T = Il2CppString*> static T GetCacheDirPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x271994C))(0);
	}
	template <typename T = Il2CppString*> static T GetCacheFilePath(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2719DB8))(0, url);
	}
	template <typename T = Il2CppString*> static T ComputeMD5(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x271A0B4))(0, str);
	}
	template <typename T = char> static T BitToChar(unsigned char value) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x271A46C))(0, value);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x271A5F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkResources*, float))(Il2CppBase() + 0x271A5FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x271A604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(NetworkResources*))(Il2CppBase() + 0x271A60C))(this);
	}

};

}
