#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamePadCompositeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamePadCompositeButton"));
	}

	template <typename T = float> static T& LongPressThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& FrameCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Phase() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ButtonPressTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeyDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonStateNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonKeepDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonBeginDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T KeyDown(bool down) {
		return ((T (*)(GamePadCompositeButton*, bool))(Il2CppBase() + 0x36DE27C))(this, down);
	}
	template <typename T = bool> T IsButtonStateNone() {
		return ((T (*)(GamePadCompositeButton*))(Il2CppBase() + 0x36DE3FC))(this);
	}
	template <typename T = bool> T IsButtonKeepDown() {
		return ((T (*)(GamePadCompositeButton*))(Il2CppBase() + 0x36DE4D8))(this);
	}
	template <typename T = bool> T IsButtonBeginDown() {
		return ((T (*)(GamePadCompositeButton*))(Il2CppBase() + 0x36DE5B4))(this);
	}
	template <typename T = bool> T IsButtonUp() {
		return ((T (*)(GamePadCompositeButton*))(Il2CppBase() + 0x36DE68C))(this);
	}

};

}
