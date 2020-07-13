#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRSkyDivingZone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRSkyDivingZone"));
	}

	template <typename T = float> T& CenterPointRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SkydivingRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ExternalDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRSkyDivingZone*))(Il2CppBase() + 0x52FAE00))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(BRSkyDivingZone*))(Il2CppBase() + 0x52FAE08))(this);
	}
	template <typename T = void> T DrawSphere(float radius, uintptr_t color) {
		return ((T (*)(BRSkyDivingZone*, float, uintptr_t))(Il2CppBase() + 0x52FAF2C))(this, radius, color);
	}

};

}
