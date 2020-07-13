#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGamePlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGamePlayerInfo"));
	}

	template <typename T = bool> T& IsRebornInGame() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_Story_StoryGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T AutoGen_Copy_Story_StoryGamePlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F1E400))(0, src, dest);
	}

};

}
