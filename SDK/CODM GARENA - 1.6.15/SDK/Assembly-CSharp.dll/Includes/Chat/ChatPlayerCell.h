#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatPlayerCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatPlayerCell"));
	}

	template <typename T = uintptr_t> T& Head() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BrLadderIcon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& HighlightedBG() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NormalBG() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& StatusMask() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& lastRedDot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& canTwinkle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& NameColorOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LevleColorOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& twinkleTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewMsgTwinkleStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TwinkelEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T set_PlayerID(uint64_t value) {
		return ((T (*)(ChatPlayerCell*, uint64_t))(Il2CppBase() + 0x1D5A874))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerID() {
		return ((T (*)(ChatPlayerCell*))(Il2CppBase() + 0x1D5A884))(this);
	}
	template <typename T = void> T Configure(uintptr_t mode, bool isCurSelect, int32_t redDot, uintptr_t mCutPanel) {
		return ((T (*)(ChatPlayerCell*, uintptr_t, bool, int32_t, uintptr_t))(Il2CppBase() + 0x1D4230C))(this, mode, isCurSelect, redDot, mCutPanel);
	}
	template <typename T = void> T Configure_1(uintptr_t info, uintptr_t mCutPanel) {
		return ((T (*)(ChatPlayerCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D4B7A0))(this, info, mCutPanel);
	}
	template <typename T = void> T Configure_2(uintptr_t info, uintptr_t mCutPanel) {
		return ((T (*)(ChatPlayerCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D5B444))(this, info, mCutPanel);
	}
	template <typename T = void> T ConfigureState(int32_t state, uint64_t logoutTime) {
		return ((T (*)(ChatPlayerCell*, int32_t, uint64_t))(Il2CppBase() + 0x1D5AB6C))(this, state, logoutTime);
	}
	template <typename T = void> T SetHighlight(bool isShow) {
		return ((T (*)(ChatPlayerCell*, bool))(Il2CppBase() + 0x1D5B96C))(this, isShow);
	}
	template <typename T = void> T OnNewMsgTwinkleStart() {
		return ((T (*)(ChatPlayerCell*))(Il2CppBase() + 0x1D42A38))(this);
	}
	template <typename T = void> T TwinkelEnd() {
		return ((T (*)(ChatPlayerCell*))(Il2CppBase() + 0x1D5BAB4))(this);
	}
	template <typename T = void> static T SetLadderIcon(int32_t ladder, uintptr_t icon, bool isBR) {
		return ((T (*)(void *, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1D5A88C))(0, ladder, icon, isBR);
	}
	template <typename T = void> T xLuaBaseProxy_SetHighlight(bool P0) {
		return ((T (*)(ChatPlayerCell*, bool))(Il2CppBase() + 0x1D5BCCC))(this, P0);
	}

};

}
