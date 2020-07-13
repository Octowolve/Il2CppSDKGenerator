#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderSeasonRewardWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderSeasonRewardWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RewardList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4306B9C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4306CA8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4306D4C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4306F74))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4307150))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4307204))(this);
	}
	template <typename T = void> T OnBtnLeftClick() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4307D10))(this);
	}
	template <typename T = void> T OnBtnRightClick() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4307E9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4308054))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x430805C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4308064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x430806C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SpvpLadderSeasonRewardWindowController*))(Il2CppBase() + 0x4308074))(this);
	}

};

}
