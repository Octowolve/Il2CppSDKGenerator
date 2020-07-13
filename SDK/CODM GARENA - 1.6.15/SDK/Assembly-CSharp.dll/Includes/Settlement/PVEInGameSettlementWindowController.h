#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVEInGameSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVEInGameSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayResultBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnReturnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnChapterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResReturnToLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnToFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2AB34))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2ABD8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2ACE4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2B21C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2B41C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t ds) {
		return ((T (*)(PVEInGameSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3B2ADFC))(this, ds);
	}
	template <typename T = void> T PlayResultBGM(uintptr_t gameResult) {
		return ((T (*)(PVEInGameSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3B2B10C))(this, gameResult);
	}
	template <typename T = void> T OnBtnReturnClick() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2B92C))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BA0C))(this);
	}
	template <typename T = void> T OnBtnChapterClick() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BAEC))(this);
	}
	template <typename T = void> T OnResReturnToLobby(uintptr_t Msg) {
		return ((T (*)(PVEInGameSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3B2BB84))(this, Msg);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BC30))(this);
	}
	template <typename T = void> T OnReturnToFrontEnd() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BCD4))(this);
	}
	template <typename T = bool> static T UpdateViewm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B2BE18))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(PVEInGameSettlementWindowController*))(Il2CppBase() + 0x3B2BE60))(this);
	}

};

}
