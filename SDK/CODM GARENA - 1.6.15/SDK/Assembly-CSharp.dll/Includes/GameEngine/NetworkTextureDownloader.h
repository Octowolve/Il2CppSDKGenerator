#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NetworkTextureDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NetworkTextureDownloader"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertBytesToDelivery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTexture2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T ConvertBytesToDelivery(Il2CppArray<uintptr_t>* bytes, Il2CppString* url) {
		return ((T (*)(NetworkTextureDownloader*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x271A984))(this, bytes, url);
	}
	template <typename T = uintptr_t> static T CreateTexture2D(Il2CppArray<uintptr_t>* bytes, Il2CppString* url) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x271AD20))(0, bytes, url);
	}
	template <typename T = void*> static T GetTextureType(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271AFAC))(0, bytes);
	}

};

}
