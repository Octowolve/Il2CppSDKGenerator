#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AudioVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AudioVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Center() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T Center() {
		return ((T (*)(AudioVolume*))(Il2CppBase() + 0x35EB24C))(this);
	}
	template <typename T = uintptr_t> static T Get(uint32_t uid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x35EB3F0))(0, uid);
	}

};

}
