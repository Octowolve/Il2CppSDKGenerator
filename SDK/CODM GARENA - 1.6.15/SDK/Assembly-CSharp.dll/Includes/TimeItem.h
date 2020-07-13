#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeItem"));
	}

	template <typename T = uintptr_t> T& SelfRootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PointLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TimeSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsAddMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Start() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTimeBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimeBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopTimeBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateTime(float t) {
		return ((T (*)(TimeItem*, float))(Il2CppBase() + 0x34CD9C0))(this, t);
	}
	template <typename T = void> T StartTimeBar(uint32_t totalTime) {
		return ((T (*)(TimeItem*, uint32_t))(Il2CppBase() + 0x34CE08C))(this, totalTime);
	}
	template <typename T = void> T UpdateTimeBar(float d) {
		return ((T (*)(TimeItem*, float))(Il2CppBase() + 0x34CDB7C))(this, d);
	}
	template <typename T = void> T StopTimeBar() {
		return ((T (*)(TimeItem*))(Il2CppBase() + 0x34CD52C))(this);
	}

};

}
