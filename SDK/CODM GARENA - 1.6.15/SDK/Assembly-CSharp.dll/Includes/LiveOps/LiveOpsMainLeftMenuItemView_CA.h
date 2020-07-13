#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMainLeftMenuItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMainLeftMenuItemView_CA"));
	}

	template <typename T = uintptr_t> T& BtnBg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NormalTag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalTitle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NormalTitleKing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectedTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SelectedTitle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SelectedTitleKing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TagTypeRoot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TagTypeBG_Red() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TagTypeBG_Green() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TagTypeBG_Orange() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& TagTypeBG_Blue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TagTypeBGList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TagTypeName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RedSprite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*))(Il2CppBase() + 0x34FBCC4))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*))(Il2CppBase() + 0x34FBD74))(this);
	}
	template <typename T = void> T SetTabData(uintptr_t indata, int32_t incount, bool inbSelected, bool inbShowRed) {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*, uintptr_t, int32_t, bool, bool))(Il2CppBase() + 0x34FBF48))(this, indata, incount, inbSelected, inbShowRed);
	}
	template <typename T = void> T UpdateView(Il2CppString* inName, uintptr_t inTagType) {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x34FC3C8))(this, inName, inTagType);
	}
	template <typename T = void> T SetBtnState(bool inbSelected) {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*, bool))(Il2CppBase() + 0x34FC2C0))(this, inbSelected);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(LiveOpsMainLeftMenuItemViewCA*))(Il2CppBase() + 0x34FCEB8))(this);
	}

};

}
