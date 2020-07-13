#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PersonalInfoRenamePopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PersonalInfoRenamePopController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsChange() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = char> static T& CHAR_VALIDATE_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_SPACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_NEWLINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> T& m_LastAddedChar() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterInputLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNameLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTextLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenameCardNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoToBuyBtnClock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8EDB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8EE5C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8EF68))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8F6C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8F8C0))(this);
	}
	template <typename T = void> T RegisterInputLabel(bool register_) {
		return ((T (*)(PersonalInfoRenamePopController*, bool))(Il2CppBase() + 0x3A8F1E0))(this, register_);
	}
	template <typename T = void> T OnChangeBtnClick() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A8FDF0))(this);
	}
	template <typename T = bool> T CheckNameLength(Il2CppString* name, bool lastCheck) {
		return ((T (*)(PersonalInfoRenamePopController*, Il2CppString*, bool))(Il2CppBase() + 0x3A90204))(this, name, lastCheck);
	}
	template <typename T = char> T OnValidate(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(PersonalInfoRenamePopController*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3A90954))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A90B0C))(this);
	}
	template <typename T = void> T CheckTextLength() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A90BB0))(this);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A90DB0))(this);
	}
	template <typename T = void> T RenameRefresh(uintptr_t Msg) {
		return ((T (*)(PersonalInfoRenamePopController*, uintptr_t))(Il2CppBase() + 0x3A90FAC))(this, Msg);
	}
	template <typename T = bool> T GetRenameCardNumber() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A90714))(this);
	}
	template <typename T = void> T OnGoToBuyBtnClock() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A91364))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A91500))(this);
	}
	template <typename T = bool> static T GetRenameCardNumberm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A915B4))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A916C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A916C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A916D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A916D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PersonalInfoRenamePopController*))(Il2CppBase() + 0x3A916E0))(this);
	}

};

}
