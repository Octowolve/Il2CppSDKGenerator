#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsRoomSettingSameWithBubbleInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsRoomSettingSameWithBubbleInfo>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(IsRoomSettingSameWithBubbleInfocAnonStorey0*, uint32_t))(Il2CppBase() + 0x210B438))(this, it);
	}

};

}
