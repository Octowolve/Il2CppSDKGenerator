#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalPhoneView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalPhoneView"));
	}

	template <typename T = uintptr_t> T& Listener() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BodyLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RightLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RightViceLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ContinueLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ResetUINodeList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CurrentTutorialFinalPhoneEventType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetAnimatorEvent(uintptr_t eventType) {
		return ((T (*)(TutorialFinalPhoneView*, uintptr_t))(Il2CppBase() + 0x423A04C))(this, eventType);
	}
	template <typename T = void> T ResetUI() {
		return ((T (*)(TutorialFinalPhoneView*))(Il2CppBase() + 0x4239D84))(this);
	}

};

}
