#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionServerActivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionServerActivityController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& shareActivityController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> static T& fTickTimeInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& fDeltaTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27660))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27704))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27838))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F2796C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27A30))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27AF4))(this);
	}
	template <typename T = void> T TickCallback(float dt) {
		return ((T (*)(IDCollectionServerActivityController*, float))(Il2CppBase() + 0x4F27C00))(this, dt);
	}
	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27CB4))(this);
	}
	template <typename T = void> T RefreshActivityPoints() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27DB4))(this);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(IDCollectionServerActivityController*, uintptr_t))(Il2CppBase() + 0x4F27E68))(this, task);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F27F40))(this);
	}
	template <typename T = void> T OnShareButtonClick() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F2810C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F282D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F282E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F282E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F282F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F282F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F28300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickCallback(float P0) {
		return ((T (*)(IDCollectionServerActivityController*, float))(Il2CppBase() + 0x4F28308))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReqActivityPoints() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F28310))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshActivityPoints() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F28318))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameBatchTask(uintptr_t P0) {
		return ((T (*)(IDCollectionServerActivityController*, uintptr_t))(Il2CppBase() + 0x4F28320))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(IDCollectionServerActivityController*))(Il2CppBase() + 0x4F28328))(this);
	}

};

}
