#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EventRabbitVideoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EventRabbitVideoController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4702D88))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4702E2C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4702F38))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x470306C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4703188))(this);
	}
	template <typename T = void> T SetData(uintptr_t picConf) {
		return ((T (*)(EventRabbitVideoController*, uintptr_t))(Il2CppBase() + 0x47032A8))(this, picConf);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4703350))(this);
	}
	template <typename T = void> T OnBuyBtnClick() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x47034B8))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x47037FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x47038EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x47038F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x47038FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4703904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x470390C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(EventRabbitVideoController*))(Il2CppBase() + 0x4703914))(this);
	}

};

}
