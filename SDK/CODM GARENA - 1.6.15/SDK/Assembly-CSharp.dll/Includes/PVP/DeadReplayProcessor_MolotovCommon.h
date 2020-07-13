#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorMolotovCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_MolotovCommon"));
	}

	template <typename T = bool> T& m_HasThrowStartAnim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_HasThrowEndAnim() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& m_NeedPlayThrowStartAnim() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSyncBufferMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorMolotovCommon*))(Il2CppBase() + 0x3460B20))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, uint32_t))(Il2CppBase() + 0x3460B28))(this, actorID);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3460BD0))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorMolotovCommon*))(Il2CppBase() + 0x3460D78))(this);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, float))(Il2CppBase() + 0x3460EF4))(this, replayTime);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorMolotovCommon*))(Il2CppBase() + 0x34611E0))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3461288))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckSyncBufferMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3461374))(this, data, index, shootTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3461604))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorMolotovCommon*, float))(Il2CppBase() + 0x346160C))(this, P0);
	}

};

}
