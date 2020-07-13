#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRAircraftManagerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRAircraftManagerData"));
	}

	template <typename T = float> T& CamMinAngle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& CamMaxAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CamSensitivity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& CamFOV() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& AircraftScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CamDist() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& CamInitYOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_Asset_ID_List() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_TransX_List() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_TransY_List() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_TransZ_List() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Helifleet_Camera_Initial_TransX() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Helifleet_Camera_Intital_Pitch_Degree() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_Camera_Speed_List() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Helifleet_Camera_Speed_Change_TransX_List() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Helifleet_Camera_Min_Switch_Time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& AircraftStartTextPrintInterval() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& AircraftStartTextDisappearTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& AircraftStartTextHideSpeed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Helifleet_Camera_Chase_Start_Distance() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& Helifleet_Camera_Chase_Acceleration() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ProgressBarStartHeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Camera_Anim_Time_List() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(BRAircraftManagerData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C15C0))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(BRAircraftManagerData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C20FC))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
