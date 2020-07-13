#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_VTOL"));
	}

	template <typename T = uintptr_t> T& m_VTOLInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckVTOLMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorVTOL*))(Il2CppBase() + 0x346B6B0))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorVTOL*, uint32_t))(Il2CppBase() + 0x346B6B8))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorVTOL*))(Il2CppBase() + 0x346B76C))(this);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorVTOL*, uintptr_t, uintptr_t))(Il2CppBase() + 0x346B8CC))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorVTOL*))(Il2CppBase() + 0x346BCFC))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorVTOL*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x346BF14))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckVTOLMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorVTOL*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x346C000))(this, data, index, shootTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorVTOL*, uintptr_t, uintptr_t))(Il2CppBase() + 0x346CCEC))(this, P0, P1);
	}

};

}
