#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CDNDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CDNDataStore"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFullUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetUrlPrefix() {
		return ((T (*)(CDNDataStore*))(Il2CppBase() + 0x3C65950))(this);
	}
	template <typename T = Il2CppString*> T GetFullUrl(Il2CppString* relativelyPath) {
		return ((T (*)(CDNDataStore*, Il2CppString*))(Il2CppBase() + 0x3C65B94))(this, relativelyPath);
	}

};

}
