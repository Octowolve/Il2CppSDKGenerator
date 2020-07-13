#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonReceiveView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonReceiveView"));
	}

	template <typename T = uintptr_t> T& LabelTurnToMail() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelSafeBoxTurnToMail() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ViewAnimator() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Common() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Special() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_CacheGiftBag() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& low5Pos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& big5Pos() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& ifBigger5Item() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& rewardStyle() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& perLineNum() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& MaxShowNum() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& needShowDecompose() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GridChilds() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& onOpen() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& showChildIndex() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& showtime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& checkIndex() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> static T& SHOW_TIME_DEFINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& SoundPlayTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& SoundPlayTimeCounter() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& animStep() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& isShowing3DScene() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& Delay() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateChildObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGiftBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCommonCloseTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_myclose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show3DScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTurnToMailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29DF4C4))(this);
	}
	template <typename T = void> T InitData(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, Il2CppList<uintptr_t>* receiveBoxList, int32_t rewardStyle) {
		return ((T (*)(UICommonReceiveView*, Il2CppDictionary<uintptr_t, int32_t>*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x29DCEDC))(this, receiveItemList, receiveBoxList, rewardStyle);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReceiveItemList() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29DEBDC))(this);
	}
	template <typename T = void> T GenerateChildObject(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, uintptr_t index, Il2CppDictionary<uint32_t, uintptr_t>* refreshCoin) {
		return ((T (*)(UICommonReceiveView*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t, Il2CppDictionary<uint32_t, uintptr_t>*))(Il2CppBase() + 0x29DFC24))(this, receiveItemList, index, refreshCoin);
	}
	template <typename T = void> T ShowCommon(Il2CppDictionary<uintptr_t, int32_t>* receiveItemList, Il2CppList<uintptr_t>* receiveBoxList) {
		return ((T (*)(UICommonReceiveView*, Il2CppDictionary<uintptr_t, int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x29DF564))(this, receiveItemList, receiveBoxList);
	}
	template <typename T = uintptr_t> T GetGiftBag() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E09C8))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E0A68))(this);
	}
	template <typename T = void> T SetOpenInit() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E0A70))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E0B14))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(UICommonReceiveView*, float))(Il2CppBase() + 0x29E0BC4))(this, dt);
	}
	template <typename T = void> T PlayCommonCloseTween() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E1904))(this);
	}
	template <typename T = void> T ShowButton() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E17C8))(this);
	}
	template <typename T = void> T myclose() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E1A48))(this);
	}
	template <typename T = void> T Show3DScene(int32_t index) {
		return ((T (*)(UICommonReceiveView*, int32_t))(Il2CppBase() + 0x29E11A0))(this, index);
	}
	template <typename T = void> T DelayCall() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E1B80))(this);
	}
	template <typename T = void> T SetTurnToMailTip(bool turnToMail, bool bSafeBox) {
		return ((T (*)(UICommonReceiveView*, bool, bool))(Il2CppBase() + 0x29DE2F4))(this, turnToMail, bSafeBox);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E1C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(UICommonReceiveView*))(Il2CppBase() + 0x29E1C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UICommonReceiveView*, float))(Il2CppBase() + 0x29E1C44))(this, P0);
	}

};

}
