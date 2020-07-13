#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpvpPlaylistGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpvpPlaylistGroup"));
	}

	template <typename T = int32_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& selectPlaylistType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBubbleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetBubbleInfo(double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t ladderLevel) {
		return ((T (*)(SpvpPlaylistGroup*, double, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x431982C))(this, serverTime, dateTime, dayOfWeek, levelInfo, ladderLevel);
	}

};

}
