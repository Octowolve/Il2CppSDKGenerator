#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMatchMsgScheduler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMatchMsgScheduler"));
	}

	template <typename T = Il2CppDictionary<uint32_t, float>*> T& m_MsgProcessRunInfoDict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_MsgRunQueue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_MsgProcessMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, float>*> static T& ScheduleConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_PickAniList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& inPlayAni() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& playManualAniTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& playAutoAniTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToPickupResQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMsgPoolObjWithCommandID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPickupRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPickupRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExePickAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRMatchMsgScheduler*))(Il2CppBase() + 0x18FA4EC))(this);
	}
	template <typename T = void> T PushToPickupResQueue(uintptr_t Msg) {
		return ((T (*)(BRMatchMsgScheduler*, uintptr_t))(Il2CppBase() + 0x1953194))(this, Msg);
	}
	template <typename T = uintptr_t> T CreateMsgPoolObjWithCommandID(uint32_t commandID) {
		return ((T (*)(BRMatchMsgScheduler*, uint32_t))(Il2CppBase() + 0x1953404))(this, commandID);
	}
	template <typename T = void> T TickPickupRes() {
		return ((T (*)(BRMatchMsgScheduler*))(Il2CppBase() + 0x1953560))(this);
	}
	template <typename T = void> T ProcessPickupRes(uintptr_t origData) {
		return ((T (*)(BRMatchMsgScheduler*, uintptr_t))(Il2CppBase() + 0x1913BEC))(this, origData);
	}
	template <typename T = void> T ExePickAni(uintptr_t pawn) {
		return ((T (*)(BRMatchMsgScheduler*, uintptr_t))(Il2CppBase() + 0x1953E9C))(this, pawn);
	}

};

}
