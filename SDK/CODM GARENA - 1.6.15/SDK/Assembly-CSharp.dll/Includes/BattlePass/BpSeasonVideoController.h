#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpSeasonVideoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpSeasonVideoController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_IntroduceNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_CurIntroduce() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& season_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBattlePassMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVideoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIntroduceShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4C9C0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4CA64))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4D30C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4D3B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4D45C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4D640))(this);
	}
	template <typename T = void> T OnContinueBtnClick() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4D808))(this);
	}
	template <typename T = void> T OpenBattlePassMain() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4DC7C))(this);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4DDA0))(this);
	}
	template <typename T = void> T RefreshVideoView(bool SkipBtnShow) {
		return ((T (*)(BpSeasonVideoController*, bool))(Il2CppBase() + 0x2C35998))(this, SkipBtnShow);
	}
	template <typename T = void> T SetIntroduceShow(int32_t i) {
		return ((T (*)(BpSeasonVideoController*, int32_t))(Il2CppBase() + 0x2C4CE2C))(this, i);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E348))(this);
	}
	template <typename T = void> T OnContinueBtnClickm__0() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E618))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E61C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E624))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E62C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E63C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BpSeasonVideoController*))(Il2CppBase() + 0x2C4E64C))(this);
	}

};

}
