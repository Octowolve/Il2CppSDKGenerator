#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsActivityBatchTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsActivityBatchTaskController"));
	}

	template <typename T = uintptr_t> T& m_codLiveOpsActivity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& liveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& batchtasks() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& willAwardTasks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& mActivityPoint() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_RewardItemWidth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTaskWillAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(LiveOpsActivityBatchTaskController*, uintptr_t))(Il2CppBase() + 0x3560E84))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3560E98))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3560F84))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561054))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561120))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsActivityBatchTaskController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x35611EC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561328))(this);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(LiveOpsActivityBatchTaskController*, uintptr_t))(Il2CppBase() + 0x35613C0))(this, task);
	}
	template <typename T = void> T RefreshActivityPoints() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561468))(this);
	}
	template <typename T = bool> static T IsTaskWillAward(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x356150C))(0, task);
	}
	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x35615CC))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561A04))(this);
	}
	template <typename T = bool> T RefreshDataStorem__0(uintptr_t task) {
		return ((T (*)(LiveOpsActivityBatchTaskController*, uintptr_t))(Il2CppBase() + 0x3561A9C))(this, task);
	}
	template <typename T = int32_t> static T RefreshDataStorem__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3561AAC))(0, a, b);
	}
	template <typename T = bool> static T RefreshDataStorem__2(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3561AF8))(0, task);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561AFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561B04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561B0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsActivityBatchTaskController*))(Il2CppBase() + 0x3561B14))(this);
	}

};

}
