#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class LabelUrlClickView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "LabelUrlClickView"));
	}

	template <typename T = uintptr_t> T& m_Label() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OnClickFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_OnClickedUrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitData(uintptr_t func, Il2CppString* str) {
		return ((T (*)(LabelUrlClickView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x33029B8))(this, func, str);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(LabelUrlClickView*))(Il2CppBase() + 0x3302A7C))(this);
	}

};

}
