#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FtueTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FtueTipsView"));
	}

	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WriterEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_ContentText() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_StartTimer() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_StopTimer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowTips(bool show, Il2CppString* content, float duration) {
		return ((T (*)(FtueTipsView*, bool, Il2CppString*, float))(Il2CppBase() + 0x470FCB8))(this, show, content, duration);
	}
	template <typename T = void> T Show() {
		return ((T (*)(FtueTipsView*))(Il2CppBase() + 0x470FFA8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(FtueTipsView*))(Il2CppBase() + 0x4710338))(this);
	}

};

}
