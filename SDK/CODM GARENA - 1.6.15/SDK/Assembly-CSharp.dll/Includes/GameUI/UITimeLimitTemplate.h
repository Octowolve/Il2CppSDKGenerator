#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITimeLimitTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITimeLimitTemplate"));
	}

	template <typename T = uintptr_t> T& RightRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RightBlock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RightLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RightClock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LeftRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LeftBlock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LeftLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LeftClock() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& CurTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& CanUpdate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isAlignToRight() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIContentRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIContentLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(UITimeLimitTemplate*, bool))(Il2CppBase() + 0x2A09348))(this, isActive);
	}
	template <typename T = void> T SetUIContent(int32_t duration, Il2CppString* content, bool isRight) {
		return ((T (*)(UITimeLimitTemplate*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x2A09448))(this, duration, content, isRight);
	}
	template <typename T = void> T SetUIContentRight(int32_t duration, Il2CppString* content) {
		return ((T (*)(UITimeLimitTemplate*, int32_t, Il2CppString*))(Il2CppBase() + 0x2A0983C))(this, duration, content);
	}
	template <typename T = void> T SetRightAdapter() {
		return ((T (*)(UITimeLimitTemplate*))(Il2CppBase() + 0x2A09B3C))(this);
	}
	template <typename T = void> T SetUIContentLeft(int32_t duration, Il2CppString* content) {
		return ((T (*)(UITimeLimitTemplate*, int32_t, Il2CppString*))(Il2CppBase() + 0x2A099BC))(this, duration, content);
	}
	template <typename T = void> T SetLeftAdapter() {
		return ((T (*)(UITimeLimitTemplate*))(Il2CppBase() + 0x2A09D40))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITimeLimitTemplate*))(Il2CppBase() + 0x2A09E78))(this);
	}

};

}
