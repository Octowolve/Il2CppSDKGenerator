#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameHandleButtonDefine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameHandleButtonDefine"));
	}

	template <typename T = uintptr_t> T& InputBtn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PlayerInputInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mIsButtonDown() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsButtonUp() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mIsButtonState() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& LastButtonState() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& IsCheckState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInitButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInputButtonPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInputButtonOriginPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLastButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLastButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonDownAnUpState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T set_IsButtonDown(bool value) {
		return ((T (*)(GameHandleButtonDefine*, bool))(Il2CppBase() + 0x36CDAAC))(this, value);
	}
	template <typename T = bool> T get_IsButtonDown() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CD4A8))(this);
	}
	template <typename T = bool> T get_IsButtonUp() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CD5C4))(this);
	}
	template <typename T = void> T set_IsButtonUp(bool value) {
		return ((T (*)(GameHandleButtonDefine*, bool))(Il2CppBase() + 0x36CDAB4))(this, value);
	}
	template <typename T = void> T set_IsButtonState(bool value) {
		return ((T (*)(GameHandleButtonDefine*, bool))(Il2CppBase() + 0x36C744C))(this, value);
	}
	template <typename T = bool> T get_IsButtonState() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36C7454))(this);
	}
	template <typename T = void> T SetInputButtonPos(Il2CppVector2 pos) {
		return ((T (*)(GameHandleButtonDefine*, Il2CppVector2))(Il2CppBase() + 0x36C5A34))(this, pos);
	}
	template <typename T = void> T SetInputButtonSize(Il2CppVector2 size) {
		return ((T (*)(GameHandleButtonDefine*, Il2CppVector2))(Il2CppBase() + 0x36CDABC))(this, size);
	}
	template <typename T = void> T ResetButtonPos() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36C5B0C))(this);
	}
	template <typename T = void> T SetInitButtonPos(Il2CppVector2 pos) {
		return ((T (*)(GameHandleButtonDefine*, Il2CppVector2))(Il2CppBase() + 0x36CDB94))(this, pos);
	}
	template <typename T = Il2CppVector2> T GetInputButtonPos() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CDC80))(this);
	}
	template <typename T = Il2CppVector2> T GetInputButtonOriginPos() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CDD48))(this);
	}
	template <typename T = void> T SetLastButtonState() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CD6DC))(this);
	}
	template <typename T = void> T ResetLastButtonState() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36CDE10))(this);
	}
	template <typename T = void> T UpdateButtonDownAnUpState() {
		return ((T (*)(GameHandleButtonDefine*))(Il2CppBase() + 0x36C745C))(this);
	}

};

}
