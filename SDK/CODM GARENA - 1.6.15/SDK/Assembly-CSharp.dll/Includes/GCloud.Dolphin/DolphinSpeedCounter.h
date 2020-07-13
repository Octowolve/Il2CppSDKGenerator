#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinSpeedCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinSpeedCounter"));
	}

	template <typename T = uint32_t> T& currentSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& lastCurrentSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& mSpeedCountList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& doTimer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpeedCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSpeedCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpeedCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T StartSpeedCounter() {
		return ((T (*)(DolphinSpeedCounter*))(Il2CppBase() + 0x452D884))(this);
	}
	template <typename T = void> T StopSpeedCounter() {
		return ((T (*)(DolphinSpeedCounter*))(Il2CppBase() + 0x452BF14))(this);
	}
	template <typename T = void> T SetSize(uint32_t size) {
		return ((T (*)(DolphinSpeedCounter*, uint32_t))(Il2CppBase() + 0x452D968))(this, size);
	}
	template <typename T = void> T SpeedCounter() {
		return ((T (*)(DolphinSpeedCounter*))(Il2CppBase() + 0x452C684))(this);
	}
	template <typename T = uint32_t> T GetSpeed() {
		return ((T (*)(DolphinSpeedCounter*))(Il2CppBase() + 0x452C8E8))(this);
	}
	template <typename T = uint32_t> T GetCurrentSpeed() {
		return ((T (*)(DolphinSpeedCounter*))(Il2CppBase() + 0x452E02C))(this);
	}

};

}
