#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPTaskModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPTaskModeData"));
	}

	template <typename T = int32_t> T& WeekID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& WeekFinishedCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WeekChargeFinishedCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TaskState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>*> T& TaskDataMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedDotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskMapData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasAwardToGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfAwardHadGot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_WeekID() {
		return ((T (*)(BPTaskModeData*))(Il2CppBase() + 0x2C4F68C))(this);
	}
	template <typename T = void> T set_WeekID(int32_t value) {
		return ((T (*)(BPTaskModeData*, int32_t))(Il2CppBase() + 0x2C4F694))(this, value);
	}
	template <typename T = int32_t> T get_WeekFinishedCount() {
		return ((T (*)(BPTaskModeData*))(Il2CppBase() + 0x2C3E074))(this);
	}
	template <typename T = void> T set_WeekFinishedCount(int32_t value) {
		return ((T (*)(BPTaskModeData*, int32_t))(Il2CppBase() + 0x2C4F69C))(this, value);
	}
	template <typename T = int32_t> T get_WeekChargeFinishedCount() {
		return ((T (*)(BPTaskModeData*))(Il2CppBase() + 0x2C3E07C))(this);
	}
	template <typename T = void> T set_WeekChargeFinishedCount(int32_t value) {
		return ((T (*)(BPTaskModeData*, int32_t))(Il2CppBase() + 0x2C4F6A4))(this, value);
	}
	template <typename T = uintptr_t> T get_TaskState() {
		return ((T (*)(BPTaskModeData*))(Il2CppBase() + 0x2C4F6AC))(this);
	}
	template <typename T = void> T set_TaskState(uintptr_t value) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C4F6B4))(this, value);
	}
	template <typename T = void> T Reset(uintptr_t type) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C4F6BC))(this, type);
	}
	template <typename T = int32_t> T GetRedDotCount(uintptr_t t) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C4F7C4))(this, t);
	}
	template <typename T = void> T SetTaskMapData(Il2CppList<uintptr_t>* taskList, uintptr_t taskType, bool needReset) {
		return ((T (*)(BPTaskModeData*, Il2CppList<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x2C4FA9C))(this, taskList, taskType, needReset);
	}
	template <typename T = uintptr_t> T GetOneTaskData(uintptr_t mode) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C4FDDC))(this, mode);
	}
	template <typename T = uintptr_t> T GetTaskData(int32_t taskId, uintptr_t mode) {
		return ((T (*)(BPTaskModeData*, int32_t, uintptr_t))(Il2CppBase() + 0x2C500D4))(this, taskId, mode);
	}
	template <typename T = uintptr_t> T GetTaskState(int32_t taskId, uintptr_t mode) {
		return ((T (*)(BPTaskModeData*, int32_t, uintptr_t))(Il2CppBase() + 0x2C5023C))(this, taskId, mode);
	}
	template <typename T = bool> T IfHasAwardToGet(uintptr_t type) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C503AC))(this, type);
	}
	template <typename T = bool> T IfAwardHadGot(uintptr_t type) {
		return ((T (*)(BPTaskModeData*, uintptr_t))(Il2CppBase() + 0x2C50650))(this, type);
	}

};

}
