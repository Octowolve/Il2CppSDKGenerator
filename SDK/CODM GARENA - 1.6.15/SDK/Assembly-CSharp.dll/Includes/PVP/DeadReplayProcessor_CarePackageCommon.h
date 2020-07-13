#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorCarePackageCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_CarePackageCommon"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_CarePackageInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_OriginCarePackageIDList() {
		return *(T*)((uintptr_t)this + 0x10);
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
	template <typename T = uintptr_t> static T& __Hotfix0_HandleCarePackageSyncData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCarePackageMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreateCarePackageMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*))(Il2CppBase() + 0x3452888))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, uint32_t))(Il2CppBase() + 0x3452890))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*))(Il2CppBase() + 0x3452938))(this);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3452A38))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*))(Il2CppBase() + 0x3452EA4))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3453248))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T HandleCarePackageSyncData(uintptr_t msgData) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, uintptr_t))(Il2CppBase() + 0x34536EC))(this, msgData);
	}
	template <typename T = void> T CheckCarePackageMsg(Il2CppArray<uintptr_t>* data, int32_t index, float replayTime) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3453354))(this, data, index, replayTime);
	}
	template <typename T = void> T CheckCreateCarePackageMsg(Il2CppArray<uintptr_t>* data, int32_t index, float replayTime) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3453520))(this, data, index, replayTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorCarePackageCommon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3453A44))(this, P0, P1);
	}

};

}
