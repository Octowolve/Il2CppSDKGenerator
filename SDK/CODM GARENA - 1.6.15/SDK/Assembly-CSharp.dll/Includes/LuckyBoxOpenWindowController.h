#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyBoxOpenWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyBoxOpenWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OnCloseClick() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_TreasureBoxId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCachePropList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mCacheTurnToMail() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> static T& bOpeningBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetNavData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLuckyBoxInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBoxScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectShowPropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyBoxSingleAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLuckyBoxAwards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterOpenTreasureBoxDetailCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenItemMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareToShowDecomposeAgingItems_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveRareAwardShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoxCameraOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x435488C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x43549C8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4354AA0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4354B74))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4354D5C))(this);
	}
	template <typename T = void> T TrySetNavData(Il2CppList<uintptr_t>* paraList) {
		return ((T (*)(LuckyBoxOpenWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4354E70))(this, paraList);
	}
	template <typename T = void> T SetLuckyBoxInfo(int32_t boxId, Il2CppList<uintptr_t>* propList, bool turnToMail, bool isGiftBox) {
		return ((T (*)(LuckyBoxOpenWindowController*, int32_t, Il2CppList<uintptr_t>*, bool, bool))(Il2CppBase() + 0x435511C))(this, boxId, propList, turnToMail, isGiftBox);
	}
	template <typename T = void> T ShowBoxScene(int32_t boxId, Il2CppList<uintptr_t>* propList, bool turnToMail) {
		return ((T (*)(LuckyBoxOpenWindowController*, int32_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x43552C8))(this, boxId, propList, turnToMail);
	}
	template <typename T = void> T SelectShowPropList(uintptr_t mCachePropList) {
		return ((T (*)(LuckyBoxOpenWindowController*, uintptr_t))(Il2CppBase() + 0x4355640))(this, mCachePropList);
	}
	template <typename T = void> T OnBoxShowFinish() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4355938))(this);
	}
	template <typename T = void> T ShowLuckyBoxSingleAward(uintptr_t item, uintptr_t prop, bool turnToMail) {
		return ((T (*)(LuckyBoxOpenWindowController*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4356358))(this, item, prop, turnToMail);
	}
	template <typename T = void> T ShowLuckyBoxAwards(Il2CppDictionary<uintptr_t, int32_t>* awardMap, bool turnToMail) {
		return ((T (*)(LuckyBoxOpenWindowController*, Il2CppDictionary<uintptr_t, int32_t>*, bool))(Il2CppBase() + 0x43564BC))(this, awardMap, turnToMail);
	}
	template <typename T = void> T OnCloseWindow(uintptr_t msg) {
		return ((T (*)(LuckyBoxOpenWindowController*, uintptr_t))(Il2CppBase() + 0x4356604))(this, msg);
	}
	template <typename T = void> T EnterOpenTreasureBoxDetailCallback(uintptr_t msg) {
		return ((T (*)(LuckyBoxOpenWindowController*, uintptr_t))(Il2CppBase() + 0x43566EC))(this, msg);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GenItemMap(Il2CppList<uintptr_t>* propList) {
		return ((T (*)(LuckyBoxOpenWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4355C5C))(this, propList);
	}
	template <typename T = void> T PrepareToShowDecomposeAgingItems_TEST() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356998))(this);
	}
	template <typename T = void> T OnNotifyCommonReceiveRareAwardShow(uintptr_t Msg) {
		return ((T (*)(LuckyBoxOpenWindowController*, uintptr_t))(Il2CppBase() + 0x4356C40))(this, Msg);
	}
	template <typename T = void> T SetBoxCameraOpen(bool open) {
		return ((T (*)(LuckyBoxOpenWindowController*, bool))(Il2CppBase() + 0x4356D20))(this, open);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356F68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356F70))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356F80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LuckyBoxOpenWindowController*))(Il2CppBase() + 0x4356F88))(this);
	}

};

}
