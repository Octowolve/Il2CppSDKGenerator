#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPillarControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPillarController_CA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MainController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_AdaptationTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& liveOpsActivityClickReport() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetLiveOps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x351728C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x351733C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x3517448))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x35174EC))(this);
	}
	template <typename T = void> T SetLiveOps(bool bInit, int32_t topNum) {
		return ((T (*)(LiveOpsPillarControllerCA*, bool, int32_t))(Il2CppBase() + 0x35175BC))(this, bInit, topNum);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x3517788))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x35178F8))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsPillarControllerCA*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x35179C8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T DidSelectItem(int32_t inTopNum, Il2CppString* inTopName) {
		return ((T (*)(LiveOpsPillarControllerCA*, int32_t, Il2CppString*))(Il2CppBase() + 0x3517FD8))(this, inTopNum, inTopName);
	}
	template <typename T = void> T AdaptationViewm__0() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x3518200))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdatedm__1(uintptr_t topData) {
		return ((T (*)(LiveOpsPillarControllerCA*, uintptr_t))(Il2CppBase() + 0x3518E7C))(this, topData);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x351904C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x3519054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x351905C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsPillarControllerCA*))(Il2CppBase() + 0x3519064))(this);
	}

};

}
