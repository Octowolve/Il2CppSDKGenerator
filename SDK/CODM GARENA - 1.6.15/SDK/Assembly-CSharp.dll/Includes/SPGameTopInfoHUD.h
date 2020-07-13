#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameTopInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameTopInfoHUD"));
	}

	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TargetDescLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TargetProgressLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TaskAndProgressParent() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TargetDescLabel1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& OnlyTaskDescParent() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& DomVolItem() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_OneSecondSum() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskAndProgressParentPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeLoadLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetModeTargetInfo(Il2CppString* modeTarget) {
		return ((T (*)(SPGameTopInfoHUD*, Il2CppString*))(Il2CppBase() + 0x39172C4))(this, modeTarget);
	}
	template <typename T = void> T SetTaskAndProgressParentPosition(bool showNumber) {
		return ((T (*)(SPGameTopInfoHUD*, bool))(Il2CppBase() + 0x3917588))(this, showNumber);
	}
	template <typename T = void> T OnSyncLeftTime(int32_t leftTime) {
		return ((T (*)(SPGameTopInfoHUD*, int32_t))(Il2CppBase() + 0x391773C))(this, leftTime);
	}
	template <typename T = void> T UpdateLeftTime(float time) {
		return ((T (*)(SPGameTopInfoHUD*, float))(Il2CppBase() + 0x39177F8))(this, time);
	}
	template <typename T = void> T OnSyncTaskProgress(int32_t current, int32_t total) {
		return ((T (*)(SPGameTopInfoHUD*, int32_t, int32_t))(Il2CppBase() + 0x39179A8))(this, current, total);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SPGameTopInfoHUD*))(Il2CppBase() + 0x3917C80))(this);
	}
	template <typename T = void> T BeforeLoadLevel(uintptr_t msg) {
		return ((T (*)(SPGameTopInfoHUD*, uintptr_t))(Il2CppBase() + 0x3917EFC))(this, msg);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(SPGameTopInfoHUD*))(Il2CppBase() + 0x3917FA8))(this);
	}

};

}
