#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsCandyCollectionControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsCandyCollectionController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnDetailsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CliamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3570ACC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3570BD4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3570C78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3570E0C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x3570F38))(this, activity, bInit);
	}
	template <typename T = void> T BtnGoClick() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3571004))(this);
	}
	template <typename T = void> T BtnDetailsClick() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x357128C))(this);
	}
	template <typename T = void> T _CliamBtnClick(uintptr_t Msg) {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*, uintptr_t))(Il2CppBase() + 0x3571324))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3571500))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3571504))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x3571508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*))(Il2CppBase() + 0x357150C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsCandyCollectionControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x3571510))(this, P0, P1);
	}

};

}
