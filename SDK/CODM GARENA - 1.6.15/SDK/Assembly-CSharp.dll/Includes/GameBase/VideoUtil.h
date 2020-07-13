#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VideoUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VideoUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelativeToStreamingAssetsFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetRelativeToStreamingAssetsFolder(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x27E0AC8))(0, fileName);
	}

};

}
