#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CellularNetworkPopWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CellularNetworkPopWindowController"));
	}

	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& btnClickCallBack() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnClickAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOKClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDB7E0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDB8E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDB988))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDBB28))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDBCA4))(this);
	}
	template <typename T = void> T SetBtnClickAction(void* btnClickCallBack) {
		return ((T (*)(CellularNetworkPopWindowController*, void*))(Il2CppBase() + 0x3DDBEB8))(this, btnClickCallBack);
	}
	template <typename T = void> T OnBtnOKClick() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDBF60))(this);
	}
	template <typename T = void> T OnBtnCancelClick() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC0A8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC18C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC23C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC24C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC254))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC25C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(CellularNetworkPopWindowController*))(Il2CppBase() + 0x3DDC264))(this);
	}

};

}
