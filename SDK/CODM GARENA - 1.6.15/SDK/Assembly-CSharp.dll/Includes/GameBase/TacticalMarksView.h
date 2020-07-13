#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMarksView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMarksView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mMarkCache() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUIWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_MarkCache() {
		return ((T (*)(TacticalMarksView*))(Il2CppBase() + 0x2794884))(this);
	}
	template <typename T = void> T AddUIWidget(uintptr_t widget) {
		return ((T (*)(TacticalMarksView*, uintptr_t))(Il2CppBase() + 0x279488C))(this, widget);
	}

};

}
