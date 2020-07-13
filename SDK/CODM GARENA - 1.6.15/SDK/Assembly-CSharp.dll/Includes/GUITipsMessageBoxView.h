#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUITipsMessageBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUITipsMessageBoxView"));
	}

	template <typename T = uintptr_t> T& m_BG() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WriterEffect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_ContentText() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_ChangeBG() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GUITipsMessageBoxView*))(Il2CppBase() + 0x29BA9E8))(this);
	}
	template <typename T = void> T ShowTips(Il2CppString* tipsContentKey, bool show, bool changeBG, bool forcePlay) {
		return ((T (*)(GUITipsMessageBoxView*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x29BB580))(this, tipsContentKey, show, changeBG, forcePlay);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GUITipsMessageBoxView*))(Il2CppBase() + 0x29BB9E0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GUITipsMessageBoxView*))(Il2CppBase() + 0x29BBC10))(this);
	}

};

}
