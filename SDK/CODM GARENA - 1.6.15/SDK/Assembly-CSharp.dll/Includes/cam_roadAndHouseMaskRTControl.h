#pragma once
#include <Il2Cpp/Il2Cpp.h>

class camroadAndHouseMaskRTControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "cam_roadAndHouseMaskRTControl"));
	}

	template <typename T = bool> T& m_alwaysRender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_backgroundColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_maskThreshold() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(camroadAndHouseMaskRTControl*))(Il2CppBase() + 0x53177A0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(camroadAndHouseMaskRTControl*))(Il2CppBase() + 0x5317838))(this);
	}
	template <typename T = void> T render() {
		return ((T (*)(camroadAndHouseMaskRTControl*))(Il2CppBase() + 0x5317984))(this);
	}

};

}
