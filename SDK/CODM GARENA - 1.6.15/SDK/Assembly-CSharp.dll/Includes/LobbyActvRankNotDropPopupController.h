#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyActvRankNotDropPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyActvRankNotDropPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCodLiveOpsActivityDs() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mLobbyRankPointBuffDs() {
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
	template <typename T = Il2CppVector3> T& Modes_Label_Pos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& mUrl() {
		return *(T*)((uintptr_t)this + 0x6C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_CodLiveOpsActivityDs() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x43345D4))(this);
	}
	template <typename T = uintptr_t> T get_LobbyRankPointBuffDs() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x4334684))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x4334734))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x43347E4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x43348E8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x433498C))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x4334A3C))(this);
	}
	template <typename T = void> T SetBgPic(Il2CppString* picName, Il2CppString* url) {
		return ((T (*)(LobbyActvRankNotDropPopupController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4335F40))(this, picName, url);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LobbyActvRankNotDropPopupController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4336390))(this, url, bSuccess, texture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x433653C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x4336544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LobbyActvRankNotDropPopupController*))(Il2CppBase() + 0x433654C))(this);
	}

};

}
