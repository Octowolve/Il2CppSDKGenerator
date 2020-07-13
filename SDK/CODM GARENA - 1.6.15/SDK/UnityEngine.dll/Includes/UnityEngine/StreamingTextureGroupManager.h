#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StreamingTextureGroupManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StreamingTextureGroupManager"));
	}


	template <typename T = uintptr_t> static T GetTextureGroup(int32_t uniqueID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E897AC))(0, uniqueID);
	}
	template <typename T = void> static T SetTextureGroup(uintptr_t group) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E89844))(0, group);
	}

};

}
