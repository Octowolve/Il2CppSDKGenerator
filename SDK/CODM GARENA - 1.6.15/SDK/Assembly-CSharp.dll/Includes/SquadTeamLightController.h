#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SquadTeamLightController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SquadTeamLightController"));
	}

	template <typename T = float> T& KeyLightChangeDuation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& KeyLightDefault() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& KeyLightAtPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FillLightAtPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RoomKeyLightParam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AnimateCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& defaultPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& defaultRotEuler() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& defaultIntensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& defaultSpotAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& startPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& startRotEuler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& startIntensity() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& startSpotAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& deltaPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& deltaRotEuler() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& deltaIntensity() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& deltaSpotAngle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& calcTimeSum() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bMoving() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SquadTeamLightController*))(Il2CppBase() + 0x394CC98))(this);
	}
	template <typename T = void> T FocusOn(int32_t Pos) {
		return ((T (*)(SquadTeamLightController*, int32_t))(Il2CppBase() + 0x394AE4C))(this, Pos);
	}
	template <typename T = void> T SetTarget(Il2CppVector3 position, Il2CppVector3 rotationEuler, float Range, float SpotAngle) {
		return ((T (*)(SquadTeamLightController*, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x394CE1C))(this, position, rotationEuler, Range, SpotAngle);
	}
	template <typename T = void> T SetRoomLight() {
		return ((T (*)(SquadTeamLightController*))(Il2CppBase() + 0x394A768))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SquadTeamLightController*))(Il2CppBase() + 0x394B3AC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SquadTeamLightController*))(Il2CppBase() + 0x394D07C))(this);
	}

};

}
