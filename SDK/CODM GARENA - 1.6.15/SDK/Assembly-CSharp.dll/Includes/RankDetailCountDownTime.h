#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankDetailCountDownTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankDetailCountDownTime"));
	}

	template <typename T = uintptr_t> T& LableCountDowns_red() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LableCountDowns_black() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& OneDaySeconds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ColorChangeDay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& difference_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisAbleCountDownTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T StartCountDown(int32_t ColorChangeDay, int32_t EndTime) {
		return ((T (*)(RankDetailCountDownTime*, int32_t, int32_t))(Il2CppBase() + 0x37EDD0C))(this, ColorChangeDay, EndTime);
	}
	template <typename T = uintptr_t> T StartTime() {
		return ((T (*)(RankDetailCountDownTime*))(Il2CppBase() + 0x37EDE4C))(this);
	}
	template <typename T = void> T DisAbleCountDownTimes() {
		return ((T (*)(RankDetailCountDownTime*))(Il2CppBase() + 0x37EDF34))(this);
	}

};

}
