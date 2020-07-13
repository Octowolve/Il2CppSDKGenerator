#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsResistanceViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsResistanceView_CA"));
	}

	template <typename T = Il2CppVector2> T& m_OrignalSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector2> T& m_ViewSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& STIMSHOT_ITEMID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TextureBg() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TitleContainer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& DescTipBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RightContainer() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ExplanationContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LevelStimShotCountLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LevelBattleTimeLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LevelResistanceValue() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& CurLevelLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ButtomContainer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& StimShotCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& GoBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LevelScrollViewContainer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LevelScrollView() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LevelFlowTable() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ResistanceValue() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ResistanceContainer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_ViewParentWidget() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_bAdaptation() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& m_TextureUrl() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLevelScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStimShotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_bAdaptation() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x4321CAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x4321CB4))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x4321D64))(this);
	}
	template <typename T = void> T AdaptationLevelScrollView(int32_t scrollHeight) {
		return ((T (*)(LiveOpsResistanceViewCA*, int32_t))(Il2CppBase() + 0x43225D8))(this, scrollHeight);
	}
	template <typename T = void> T UpdateCurLevel(uintptr_t task, bool bFull) {
		return ((T (*)(LiveOpsResistanceViewCA*, uintptr_t, bool))(Il2CppBase() + 0x43229A8))(this, task, bFull);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsResistanceViewCA*, uintptr_t))(Il2CppBase() + 0x4322F54))(this, activity);
	}
	template <typename T = void> T UpdateStimShotItem() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x4323FC4))(this);
	}
	template <typename T = void> T UpdateTime(uintptr_t activity) {
		return ((T (*)(LiveOpsResistanceViewCA*, uintptr_t))(Il2CppBase() + 0x432336C))(this, activity);
	}
	template <typename T = void> T UpdateSprite(uintptr_t activity) {
		return ((T (*)(LiveOpsResistanceViewCA*, uintptr_t))(Il2CppBase() + 0x4323A44))(this, activity);
	}
	template <typename T = Il2CppString*> T GetDefaultSpriteName() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x43241A0))(this);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsResistanceViewCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4324258))(this, url, bSuccess, texture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsResistanceViewCA*))(Il2CppBase() + 0x43243A4))(this);
	}

};

}
