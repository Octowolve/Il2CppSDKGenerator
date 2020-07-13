#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamePadButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamePadButton"));
	}

	template <typename T = float> static T& LongPressThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& ClickThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& Phase() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ButtonPressTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasCompositeResponded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsLongPressResponded() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KeyDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonStateNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonKeepDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonBeginDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsButtonLongPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T KeyDown(bool down, bool up) {
		return ((T (*)(GamePadButton*, bool, bool))(Il2CppBase() + 0x36DD850))(this, down, up);
	}
	template <typename T = bool> T IsButtonStateNone() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DD9EC))(this);
	}
	template <typename T = bool> T IsButtonDown() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDAC8))(this);
	}
	template <typename T = bool> T IsButtonKeepDown() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDBA8))(this);
	}
	template <typename T = bool> T IsButtonBeginDown() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDC84))(this);
	}
	template <typename T = bool> T IsButtonClick() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDD5C))(this);
	}
	template <typename T = bool> T IsButtonUp() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDEC0))(this);
	}
	template <typename T = bool> T IsButtonLongPressed() {
		return ((T (*)(GamePadButton*))(Il2CppBase() + 0x36DDF9C))(this);
	}

};

}
