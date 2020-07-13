#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ChestCardWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ChestCardWindowController"));
	}

	template <typename T = uintptr_t> T& OnCloseJump() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mViewMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& previousScene() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCurrentBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBoxScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBoxScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C6140))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C61E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C66F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C67C0))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ChestCardWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x28C688C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C6B48))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(ChestCardWindowController*, uintptr_t))(Il2CppBase() + 0x28C70D0))(this, closeType);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C69A8))(this);
	}
	template <typename T = void> T RequestCurrentBox() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C73BC))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C765C))(this);
	}
	template <typename T = void> T ShowBoxScene() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C6CB0))(this);
	}
	template <typename T = void> T CloseBoxScene() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7264))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7704))(this);
	}
	template <typename T = void> T Initm__1() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7708))(this);
	}
	template <typename T = void> T Initm__2() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7710))(this);
	}
	template <typename T = void> T Initm__3() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7718))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7740))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7748))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChestCardWindowController*))(Il2CppBase() + 0x28C7760))(this);
	}

};

}
