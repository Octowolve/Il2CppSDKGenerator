#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsBaseControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsBaseController_En"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_LeftNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x353BE30))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x353A71C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x353C994))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x353B32C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x353B4C8))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsBaseControllerEn*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x356CA8C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x356CBB4))(this);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsBaseControllerEn*, int32_t, int32_t, bool))(Il2CppBase() + 0x356CC80))(this, topNum, leftNum, bInit);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsBaseControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x353B96C))(this, activity, bInit);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x356CD90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x356CD98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x356CDA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsBaseControllerEn*))(Il2CppBase() + 0x356CDA8))(this);
	}

};

}
