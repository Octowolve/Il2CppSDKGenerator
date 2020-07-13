#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class ChangeNickNameEditView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "ChangeNickNameEditView"));
	}

	template <typename T = uintptr_t> T& m_ButtonOK() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ButtonCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_InputName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_BGSprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_OnFocusCallback() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyMySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_OnFocusCallback() {
		return ((T (*)(ChangeNickNameEditView*))(Il2CppBase() + 0x431D234))(this);
	}
	template <typename T = void> T set_OnFocusCallback(uintptr_t value) {
		return ((T (*)(ChangeNickNameEditView*, uintptr_t))(Il2CppBase() + 0x431ACC4))(this, value);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ChangeNickNameEditView*))(Il2CppBase() + 0x431D23C))(this);
	}
	template <typename T = void> T SetNickName(Il2CppString* text) {
		return ((T (*)(ChangeNickNameEditView*, Il2CppString*))(Il2CppBase() + 0x431A79C))(this, text);
	}
	template <typename T = void> T OnInputFocus() {
		return ((T (*)(ChangeNickNameEditView*))(Il2CppBase() + 0x431D2EC))(this);
	}
	template <typename T = void> T DestroyMySelf() {
		return ((T (*)(ChangeNickNameEditView*))(Il2CppBase() + 0x431D39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ChangeNickNameEditView*))(Il2CppBase() + 0x431D490))(this);
	}

};

}
