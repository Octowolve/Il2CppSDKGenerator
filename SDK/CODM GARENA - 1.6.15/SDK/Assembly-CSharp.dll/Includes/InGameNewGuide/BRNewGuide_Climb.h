#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideClimb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_Climb"));
	}

	template <typename T = uintptr_t> T& m_DriveBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_RideBtn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDriveBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRideBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideClimb*, uintptr_t))(Il2CppBase() + 0x4998970))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideClimb*))(Il2CppBase() + 0x4998AA4))(this);
	}
	template <typename T = uintptr_t> T GetDriveBtn() {
		return ((T (*)(BRNewGuideClimb*))(Il2CppBase() + 0x4998E00))(this);
	}
	template <typename T = uintptr_t> T GetRideBtn() {
		return ((T (*)(BRNewGuideClimb*))(Il2CppBase() + 0x4998F88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideClimb*, uintptr_t))(Il2CppBase() + 0x4999110))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideClimb*))(Il2CppBase() + 0x4999118))(this);
	}

};

}
