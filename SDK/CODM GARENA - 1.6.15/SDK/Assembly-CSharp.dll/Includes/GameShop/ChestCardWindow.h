#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ChestCardWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ChestCardWindow"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OpenNext() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& leftArrow() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& rightArrow() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& scrollbar() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& maskCollider() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OpenNextLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& OpenLater() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OpenEnd() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RevealAll() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Turn2Mail() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CardPanel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& OpenCardViewRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& OpenBoxViewRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& curStep() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& CacheDeltaY() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& OnUserSwipe() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponCache() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& mWeaponUsed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRoleCache() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& mRoleUsed() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mNormalCache() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& mNormalUsed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCards() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& mCanUpgrade() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> static T& kNextLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mOpenedBoxes() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& mBoxes() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& mCardNumber() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& mTurnedCardNumber() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> static T& kTap2RevealTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kTap2SeeAttatchment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kTapAndSwip2SeeMore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mHasAttchment() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& openBox() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOpenBoxView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Card() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PositionAutoDrag2End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCardRolling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardTurned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoRevealCards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNextCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstCardReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllPlayEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBarValueChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRightArrowWhenAllAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitArrows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___CallbackWhenAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C29F4))(this);
	}
	template <typename T = void> T ShowOpenBoxView(bool isShow) {
		return ((T (*)(ChestCardWindow*, bool))(Il2CppBase() + 0x28C2AF4))(this, isShow);
	}
	template <typename T = void> T OnUserDragEnd(uintptr_t go) {
		return ((T (*)(ChestCardWindow*, uintptr_t))(Il2CppBase() + 0x28C2D60))(this, go);
	}
	template <typename T = void> T OnUserDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(ChestCardWindow*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x28C2E34))(this, go, delta);
	}
	template <typename T = void> T OnUserPress(uintptr_t go, bool isPress) {
		return ((T (*)(ChestCardWindow*, uintptr_t, bool))(Il2CppBase() + 0x28C2F08))(this, go, isPress);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C2FCC))(this);
	}
	template <typename T = uintptr_t> T Card(uintptr_t cardData) {
		return ((T (*)(ChestCardWindow*, uintptr_t))(Il2CppBase() + 0x28C32BC))(this, cardData);
	}
	template <typename T = void> T CorrectPosition() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C349C))(this);
	}
	template <typename T = void> T PositionAutoDrag2End() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C3860))(this);
	}
	template <typename T = void> T Configure(uintptr_t viewMode) {
		return ((T (*)(ChestCardWindow*, uintptr_t))(Il2CppBase() + 0x28C3A28))(this, viewMode);
	}
	template <typename T = void> T ConfigureButton(bool allCardOpened) {
		return ((T (*)(ChestCardWindow*, bool))(Il2CppBase() + 0x28C4288))(this, allCardOpened);
	}
	template <typename T = void> T ConfigureCards(Il2CppList<uintptr_t>* carddatas) {
		return ((T (*)(ChestCardWindow*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28C3E74))(this, carddatas);
	}
	template <typename T = void> T BeginCardRolling() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C48AC))(this);
	}
	template <typename T = void> T OnCardTurned(uintptr_t go) {
		return ((T (*)(ChestCardWindow*, uintptr_t))(Il2CppBase() + 0x28C4B64))(this, go);
	}
	template <typename T = void> T AutoRevealCards() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C47C4))(this);
	}
	template <typename T = void> T PlayNextCard() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5090))(this);
	}
	template <typename T = void> T GetFirstCardReady() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C4F20))(this);
	}
	template <typename T = void> T AllPlayEnded() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5440))(this);
	}
	template <typename T = void> T OnAllFinish() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C56F4))(this);
	}
	template <typename T = void> T OnScrollBarValueChanged() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C58CC))(this);
	}
	template <typename T = void> T HideRightArrowWhenAllAnimEnd() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C57C8))(this);
	}
	template <typename T = void> T InitArrows() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C4C2C))(this);
	}
	template <typename T = void> T __CallbackWhenAnimEnd(uintptr_t go) {
		return ((T (*)(ChestCardWindow*, uintptr_t))(Il2CppBase() + 0x28C5B0C))(this, go);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5D30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5E84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5FE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ChestCardWindow*))(Il2CppBase() + 0x28C5FF0))(this);
	}

};

}
