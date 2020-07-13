#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class UnpilotedCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "Unpiloted_Circle"));
	}

	template <typename T = Il2CppVector3> T& InitPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& InitRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCircleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T get_InitPos() {
		return ((T (*)(UnpilotedCircle*))(Il2CppBase() + 0x35B0C98))(this);
	}
	template <typename T = void> T set_InitPos(Il2CppVector3 value) {
		return ((T (*)(UnpilotedCircle*, Il2CppVector3))(Il2CppBase() + 0x35B0CAC))(this, value);
	}
	template <typename T = float> T get_InitRadius() {
		return ((T (*)(UnpilotedCircle*))(Il2CppBase() + 0x35B0CB8))(this);
	}
	template <typename T = void> T set_InitRadius(float value) {
		return ((T (*)(UnpilotedCircle*, float))(Il2CppBase() + 0x35B0CC0))(this, value);
	}
	template <typename T = void> T SetupInfo(Il2CppVector3 pos, float radius) {
		return ((T (*)(UnpilotedCircle*, Il2CppVector3, float))(Il2CppBase() + 0x35B0CC8))(this, pos, radius);
	}
	template <typename T = float> T get_CurrentRadius() {
		return ((T (*)(UnpilotedCircle*))(Il2CppBase() + 0x35B0DE0))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(UnpilotedCircle*))(Il2CppBase() + 0x35B0DE8))(this);
	}
	template <typename T = void> T UpdateCircleInfo(Il2CppVector3 pos) {
		return ((T (*)(UnpilotedCircle*, Il2CppVector3))(Il2CppBase() + 0x35B0DFC))(this, pos);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCircleInfo(Il2CppVector3 P0) {
		return ((T (*)(UnpilotedCircle*, Il2CppVector3))(Il2CppBase() + 0x35B0EF0))(this, P0);
	}

};

}
