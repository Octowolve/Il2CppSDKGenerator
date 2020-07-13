#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GUITipsMessageBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GUITipsMessageBox"));
	}

	template <typename T = uintptr_t> T& m_BG() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WriterEffect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_ContentText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_ChangeBG() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GUITipsMessageBox*))(Il2CppBase() + 0x22DFB74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GUITipsMessageBox*))(Il2CppBase() + 0x22DFC9C))(this);
	}

};

}
