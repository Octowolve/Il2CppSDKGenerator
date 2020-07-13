#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsTask"));
	}

	template <typename T = Il2CppString*> T& m_TaskDesc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& m_Seq_Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Task_Id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Task_Progress() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TaskState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_Target_Value() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_Task_Point() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TaskAwards() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_GoPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_SecondTab() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ThirdTab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_JumpUrl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ExchangeItemList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ExchangeNumLimit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CurExchangeNumLimit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_CurExchangeItemNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ZoneProgress() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_TaskResetType() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_bTip() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ConditionId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_PreConditionType1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_PreConditionValue1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& unlock_day() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfigData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurExchangeItemNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExchangeTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T get_TaskDesc() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3534658))(this);
	}
	template <typename T = uint64_t> T get_SeqId() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3526734))(this);
	}
	template <typename T = int32_t> T get_TaskId() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8C0))(this);
	}
	template <typename T = int32_t> T get_TaskProgress() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3534660))(this);
	}
	template <typename T = uintptr_t> T get_TaskState() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x352ED4C))(this);
	}
	template <typename T = void> T set_TaskState(uintptr_t value) {
		return ((T (*)(CodLiveOpsTask*, uintptr_t))(Il2CppBase() + 0x3528E38))(this, value);
	}
	template <typename T = int32_t> T get_Target_Value() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3534668))(this);
	}
	template <typename T = int32_t> T get_Task_Point() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354A564))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TaskAwards() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3534944))(this);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x35393B0))(this);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x35393B8))(this);
	}
	template <typename T = int32_t> T get_ThirdTab() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x35393C0))(this);
	}
	template <typename T = Il2CppString*> T get_JumpUrl() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ExchangeItemList() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3526BCC))(this);
	}
	template <typename T = int32_t> T get_ExchangeNumLimit() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3526BDC))(this);
	}
	template <typename T = int32_t> T get_CurExchangeNumLimit() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3526BD4))(this);
	}
	template <typename T = void> T set_CurExchangeNumLimit(int32_t value) {
		return ((T (*)(CodLiveOpsTask*, int32_t))(Il2CppBase() + 0x3528E40))(this, value);
	}
	template <typename T = int32_t> T get_CurExchangeItemNum() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8D0))(this);
	}
	template <typename T = int32_t> T get_ZoneProgress() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8D8))(this);
	}
	template <typename T = void> T set_ZoneProgress(int32_t value) {
		return ((T (*)(CodLiveOpsTask*, int32_t))(Il2CppBase() + 0x354F8E0))(this, value);
	}
	template <typename T = int32_t> T get_TaskResetType() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8E8))(this);
	}
	template <typename T = bool> T get_bTip() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x3526490))(this);
	}
	template <typename T = int32_t> T get_ConditionID() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8F0))(this);
	}
	template <typename T = int32_t> T get_PreConditionType1() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F8F8))(this);
	}
	template <typename T = int32_t> T get_PreConditionValue1() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F900))(this);
	}
	template <typename T = int32_t> T get_unlock_day() {
		return ((T (*)(CodLiveOpsTask*))(Il2CppBase() + 0x354F908))(this);
	}
	template <typename T = void> T set_unlock_day(int32_t value) {
		return ((T (*)(CodLiveOpsTask*, int32_t))(Il2CppBase() + 0x354F910))(this, value);
	}
	template <typename T = void> T SetConfigData(uintptr_t csvInfo) {
		return ((T (*)(CodLiveOpsTask*, uintptr_t))(Il2CppBase() + 0x354F918))(this, csvInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTaskAwardList(uintptr_t res) {
		return ((T (*)(CodLiveOpsTask*, uintptr_t))(Il2CppBase() + 0x354FEE0))(this, res);
	}
	template <typename T = void> T SetDy(uintptr_t data) {
		return ((T (*)(CodLiveOpsTask*, uintptr_t))(Il2CppBase() + 0x3550300))(this, data);
	}
	template <typename T = void> T SetCurExchangeItemNum(int32_t gold) {
		return ((T (*)(CodLiveOpsTask*, int32_t))(Il2CppBase() + 0x3550408))(this, gold);
	}
	template <typename T = void> T SetExchangeTip(bool HightLight) {
		return ((T (*)(CodLiveOpsTask*, bool))(Il2CppBase() + 0x35504B0))(this, HightLight);
	}

};

}
