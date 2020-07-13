#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildApplyMsgItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildApplyMsgItemView"));
	}

	template <typename T = uintptr_t> T& Head() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LevelInfoLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MsgLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RankSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DisagreeBtn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_ApplyInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMsgInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisagreeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_ApplyInfo() {
		return ((T (*)(GuildApplyMsgItemView*))(Il2CppBase() + 0x3E3DF9C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildApplyMsgItemView*))(Il2CppBase() + 0x3E3E000))(this);
	}
	template <typename T = void> T SetMsgInfo(uintptr_t applyInfo) {
		return ((T (*)(GuildApplyMsgItemView*, uintptr_t))(Il2CppBase() + 0x3E3A894))(this, applyInfo);
	}
	template <typename T = void> T SetLadderIcon(int32_t ladder, bool isBR) {
		return ((T (*)(GuildApplyMsgItemView*, int32_t, bool))(Il2CppBase() + 0x3E3E19C))(this, ladder, isBR);
	}
	template <typename T = void> T OnAgreeBtnClick() {
		return ((T (*)(GuildApplyMsgItemView*))(Il2CppBase() + 0x3E3E45C))(this);
	}
	template <typename T = void> T OnDisagreeBtnClick() {
		return ((T (*)(GuildApplyMsgItemView*))(Il2CppBase() + 0x3E3E55C))(this);
	}
	template <typename T = void> T ItemAdapt(int32_t width) {
		return ((T (*)(GuildApplyMsgItemView*, int32_t))(Il2CppBase() + 0x3E3ACC0))(this, width);
	}

};

}
