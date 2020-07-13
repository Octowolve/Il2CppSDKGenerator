#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerEmblemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerEmblemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_EmblemListCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EmbleDataList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingEmblem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheEmblemID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnALLGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLESUREGameTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingEmblem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPersonalInfoGameTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x29051A8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x290527C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2905AC8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2905F28))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2906078))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x29063DC))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x29064B4))(this);
	}
	template <typename T = void> T OnALLGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x2906674))(this, obj);
	}
	template <typename T = void> T OnPVPGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x29067E0))(this, obj);
	}
	template <typename T = void> T OnBRGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x290694C))(this, obj);
	}
	template <typename T = void> T OnPVEGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x2906AB8))(this, obj);
	}
	template <typename T = void> T OnLESUREGameTypeClick(uintptr_t obj) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x2906C24))(this, obj);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CareerEmblemController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2906D90))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T InitPendingEmblem(uintptr_t Type) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x29053EC))(this, Type);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CareerEmblemController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2906EE0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CareerEmblemController*, uintptr_t, int32_t))(Il2CppBase() + 0x2907750))(this, list, userContext);
	}
	template <typename T = void> T OnPersonalInfoGameTypeChange(uintptr_t Msg) {
		return ((T (*)(CareerEmblemController*, uintptr_t))(Il2CppBase() + 0x2907834))(this, Msg);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907908))(this);
	}
	template <typename T = bool> static T InitPendingEmblemm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2907AD4))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CareerEmblemController*))(Il2CppBase() + 0x2907B2C))(this);
	}

};

}
