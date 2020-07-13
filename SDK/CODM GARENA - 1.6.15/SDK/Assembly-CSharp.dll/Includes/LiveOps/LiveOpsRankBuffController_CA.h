#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsRankBuffControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsRankBuffController_CA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mLobbyRankBuffDs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& MPRankData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BrRankData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& m_OrignalSize() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector2> T& m_ViewSize() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_TitleDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_BtnDistanceToRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__BtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcPictureAdaptation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_LobbyRankBuffDs() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351F748))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351F7F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351F8A8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351F9AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351FA50))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351FB84))(this);
	}
	template <typename T = void> T SetRankData() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351FCA0))(this);
	}
	template <typename T = void> T SetUIBg() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x351FFE4))(this);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsRankBuffControllerCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x35210E4))(this, url, bSuccess, texture);
	}
	template <typename T = void> T SetUIText() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x3520524))(this);
	}
	template <typename T = void> T _BtnGoClick() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x352124C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data, Il2CppVector2 viewSize) {
		return ((T (*)(LiveOpsRankBuffControllerCA*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x34F7018))(this, data, viewSize);
	}
	template <typename T = void> T CalcPictureAdaptation() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x35219A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x3521D90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x3521D98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x3521DA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsRankBuffControllerCA*))(Il2CppBase() + 0x3521DA8))(this);
	}

};

}
