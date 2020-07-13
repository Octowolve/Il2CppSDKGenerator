#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementEggRewardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementEggRewardView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket5() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket6() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BallSocket() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& GoBallTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelTimeRemain() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& DelayQuitView() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CardItems() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CardAnimatorList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BallAnimatorList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CardObjList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BallObjList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<int32_t>*> T& ColorIDList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GoBalls() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& animator1() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& animator2() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& DelayTime1() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& DelayTime2() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& BallInterval() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& CardInterval() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& BallCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& CardCount() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSocketTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBallView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCardView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshExitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGumballAccordingToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardAnimationClipFromColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBallAnimationClipFromColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetSocketTrans(int32_t ItemCount) {
		return ((T (*)(PVESettlementEggRewardView*, int32_t))(Il2CppBase() + 0x3B32700))(this, ItemCount);
	}
	template <typename T = void> T InitView(Il2CppList<uintptr_t>* Items) {
		return ((T (*)(PVESettlementEggRewardView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B310EC))(this, Items);
	}
	template <typename T = void> T ShowBallView() {
		return ((T (*)(PVESettlementEggRewardView*))(Il2CppBase() + 0x3B32954))(this);
	}
	template <typename T = void> T ShowCardView() {
		return ((T (*)(PVESettlementEggRewardView*))(Il2CppBase() + 0x3B32D10))(this);
	}
	template <typename T = void> T RefreshExitTime() {
		return ((T (*)(PVESettlementEggRewardView*))(Il2CppBase() + 0x3B33108))(this);
	}
	template <typename T = Il2CppString*> T GetGumballAccordingToColor(int32_t ColorID) {
		return ((T (*)(PVESettlementEggRewardView*, int32_t))(Il2CppBase() + 0x3B32808))(this, ColorID);
	}
	template <typename T = Il2CppString*> T GetCardAnimationClipFromColor(int32_t ColorID) {
		return ((T (*)(PVESettlementEggRewardView*, int32_t))(Il2CppBase() + 0x3B32FBC))(this, ColorID);
	}
	template <typename T = Il2CppString*> T GetBallAnimationClipFromColor(int32_t ColorID) {
		return ((T (*)(PVESettlementEggRewardView*, int32_t))(Il2CppBase() + 0x3B32BC4))(this, ColorID);
	}
	template <typename T = int32_t> static T InitViewm__0(uintptr_t i1, uintptr_t i2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B331F4))(0, i1, i2);
	}

};

}
