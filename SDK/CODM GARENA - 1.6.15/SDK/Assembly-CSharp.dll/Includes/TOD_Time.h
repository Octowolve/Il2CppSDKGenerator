#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_Time"));
	}

	template <typename T = float> T& DayLengthInMinutes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ProgressDate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ProgressMoonPhase() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& ProgressTime() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = float> T& CurrTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isDay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sky() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapSkyLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsDay() {
		return ((T (*)(TODTime*))(Il2CppBase() + 0x4965EF0))(this);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4965EF8))(0);
	}
	template <typename T = void> T SetTime(uint32_t timeInSecond) {
		return ((T (*)(TODTime*, uint32_t))(Il2CppBase() + 0x4966064))(this, timeInSecond);
	}
	template <typename T = void> T SetHour(float _hour) {
		return ((T (*)(TODTime*, float))(Il2CppBase() + 0x496623C))(this, _hour);
	}
	template <typename T = unsigned char> T MapSkyLight(unsigned char skyLight) {
		return ((T (*)(TODTime*, unsigned char))(Il2CppBase() + 0x49662E8))(this, skyLight);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TODTime*))(Il2CppBase() + 0x49663E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TODTime*))(Il2CppBase() + 0x49664A8))(this);
	}

};

}
