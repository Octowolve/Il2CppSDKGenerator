#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WNPlugins.PandoraAdapter {

class PandoraEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WNPlugins.PandoraAdapter", "PandoraEventChannel"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_EventHanlders() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& SHOW_LOADING_CONTENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHOW_LOADING_TRUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COMMON_TIP_CONTENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COMMON_TIP_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DEFAULT_COMMON_TIP_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TYPE_VALUE_SHOW_ITEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHOW_ITEM_CONTENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CurrentPandoraType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PANDORA_FACE_LOGINSIGN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PANDORA_FACE_COMMON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PANDORA_IS_POP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPandoraEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPandoraEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraRefreshDiamond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShowTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEntrance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPandoraRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPandoraFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPandoraFaceOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePandoraFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareStructMessageToWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareStructMessageToQQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraSharePhotoToWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraSharePhotoToQQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQQFriend_ToGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareStructMessageToQQGameFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareUrlToWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareMiniAppToWX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraShareMiniAppToQQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSingFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseCommonFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraPanelReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraPanelClosed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T InitPandoraEvent() {
		return ((T (*)(PandoraEventChannel*))(Il2CppBase() + 0x4A56B50))(this);
	}
	template <typename T = void> T OnPandoraEvent(Il2CppDictionary<Il2CppString*, Il2CppString*>* dataDict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A56C18))(this, dataDict);
	}
	template <typename T = void> T PandoraEmpty(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A56CE8))(this, dict);
	}
	template <typename T = void> T PandoraRefreshDiamond(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A56EC8))(this, dict);
	}
	template <typename T = void> T PandoraShowTip(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A57084))(this, dict);
	}
	template <typename T = void> T ShowEntrance(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A57398))(this, dict);
	}
	template <typename T = void> T ShowPandoraRedPoint(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5796C))(this, dict);
	}
	template <typename T = void> T ShowPandoraFace(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A57D00))(this, dict);
	}
	template <typename T = void> T ShowPandoraFaceOpen(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A57FC4))(this, dict);
	}
	template <typename T = void> T ClosePandoraFace(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5821C))(this, dict);
	}
	template <typename T = void> T ShowLoading(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A583BC))(this, dict);
	}
	template <typename T = void> T ShowCommonTip(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5848C))(this, dict);
	}
	template <typename T = void> T PandoraShareStructMessageToWX(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5855C))(this, dict);
	}
	template <typename T = void> T PandoraShareStructMessageToQQ(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5862C))(this, dict);
	}
	template <typename T = void> T PandoraSharePhotoToWX(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A586FC))(this, dict);
	}
	template <typename T = void> T PandoraSharePhotoToQQ(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A587CC))(this, dict);
	}
	template <typename T = Il2CppString*> T GetQQFriend_ToGame(bool Stat) {
		return ((T (*)(PandoraEventChannel*, bool))(Il2CppBase() + 0x4A5889C))(this, Stat);
	}
	template <typename T = void> T PandoraShareStructMessageToQQGameFriend(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A5898C))(this, dict);
	}
	template <typename T = void> T PandoraShareUrlToWX(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A58A5C))(this, dict);
	}
	template <typename T = void> T PandoraShareMiniAppToWX(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A58B2C))(this, dict);
	}
	template <typename T = void> T PandoraShareMiniAppToQQ(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A58BFC))(this, dict);
	}
	template <typename T = void> T ShowItems(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A58CCC))(this, dict);
	}
	template <typename T = uintptr_t> T ShowSignFace() {
		return ((T (*)(PandoraEventChannel*))(Il2CppBase() + 0x4A58D9C))(this);
	}
	template <typename T = uintptr_t> T ShowCommonFace() {
		return ((T (*)(PandoraEventChannel*))(Il2CppBase() + 0x4A5928C))(this);
	}
	template <typename T = void> T CloseSingFace() {
		return ((T (*)(PandoraEventChannel*))(Il2CppBase() + 0x4A59510))(this);
	}
	template <typename T = void> T CloseCommonFace() {
		return ((T (*)(PandoraEventChannel*))(Il2CppBase() + 0x4A59680))(this);
	}
	template <typename T = void> T PandoraPanelReady(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A597F0))(this, dict);
	}
	template <typename T = void> T PandoraPanelClosed(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(PandoraEventChannel*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4A598C0))(this, dict);
	}

};

}
