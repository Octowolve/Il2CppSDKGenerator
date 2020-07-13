#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NetworkTextDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NetworkTextDownloader"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertBytesToDelivery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHighPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ConvertBytesToDelivery(Il2CppArray<uintptr_t>* bytes, Il2CppString* url) {
		return ((T (*)(NetworkTextDownloader*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x271A614))(this, bytes, url);
	}
	template <typename T = bool> T IsHighPriority() {
		return ((T (*)(NetworkTextDownloader*))(Il2CppBase() + 0x271A8E4))(this);
	}

};

}
