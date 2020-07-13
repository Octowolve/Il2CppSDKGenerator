#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareTextureLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareTextureLoader"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTextureDownLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T Start(Il2CppString* url, bool downFromPandora) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x449B808))(0, url, downFromPandora);
	}
	template <typename T = void> static T OnTextureDownLoad(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x449BAEC))(0, url, isSuccess, texture);
	}

};

}
